
#include<iostream>
using namespace std;

void INSERT(int Temp_List[],int Temp_Number_of_terms,int Temp_position,int Temp_Value)
{
  
 cout<<"\n\tElement Inserted\n";
 while (Temp_Number_of_terms >= Temp_position)
 {
     
  Temp_List[Temp_Number_of_terms] = Temp_List[Temp_Number_of_terms -1];
  Temp_Number_of_terms = Temp_Number_of_terms - 1;
 }
 
 Temp_List[Temp_position] = Temp_Value;
}

int DELETE(int Temp_List[],int Temp_Number_of_terms,int Temp_Value)
{

cout<<"\n\tDELETION OF ELEMENTS";
for (int index = 0 ; index<Temp_Number_of_terms ; index++)
{ 

 if(Temp_Value == Temp_List[index])
 {
  for (int Number = index; Number< Temp_Number_of_terms;Number++)
  {
  
  Temp_List[Number] = Temp_List[Number+1];
  }
  return 1;
 }
}
return 0;
}

int main()
{  
 int Number_of_terms, Value , Position , index , choice , option,terms;
 cout<<"\n\tINSERTING AND DELETING ELEMENT FROM List\n\n";
 cout<<"Enter the Number of elements  : ";
 cin>>Number_of_terms;
    
 int List[Number_of_terms];
 
 cout<<"Enter the elements one by one : ";
 for (index=0;index<Number_of_terms;index++)
 {
  cin>>List[index];
 }
 cout<<endl;
 for (index=0;index<Number_of_terms;index++)
 {
  cout<<"Element "<<index+1<<" : "<<List[index]<<endl;
 }
 
 do{
   cout<<"\n--------------------------------------------------";
   cout<<"\nSelect the appropriate operation : \n 1. INSERT an element \n 2. DELETE an element \n 3. EXIT \n => ";
   cin>>choice;
   cout<<"\n--------------------------------------------------";
 switch(choice)
 {
   case 1: 
    { cout<<"\nEnter the number of elements to insert : ";
      cin>>terms;
      List[Number_of_terms+terms];
      for(int i=0;i<terms;i++)
      {
         cout<<"\nEnter the element to Insert            : ";
         cin>>Value;
         cout<<"Enter position to insert               : ";
         Number_of_terms = Number_of_terms+1;
         cin>>Position;
         Position = Position-1;
         INSERT(List,Number_of_terms,Position,Value);
      }
      
 
      cout<<"\n\t   After Insertion \n\n";
      for ( index=0;index<Number_of_terms;index++)
      {
          cout<<"Element "<<index+1<<" : "<<List[index]<<endl;
      }
      break; }
     
    case 2:
      {  
        if(Number_of_terms != 0)
        {
         cout<<"\nEnter the Number to Delete : ";
         cin>>Value;
	 if (DELETE(List,Number_of_terms,Value) == 0)
	 {
	   cout<<"\nElement not found\n";
	 }
         else
         {   
 	   cout<<"\n\t   After Deletion \n\n";
	   for ( index=0;index<Number_of_terms-1;index++)
	   {
  		cout<<"Element "<<index+1<<" : "<<List[index]<<endl;
           }
 	   cout<<endl;
 	   Number_of_terms = Number_of_terms-1;
 	  } 
 	 }
 	 else
 	 {
 	   cout<<"\nUNDERFLOW No elements in the array to delete\n";
 	 }
 	  break; }
 	  
    case 3:
          break;
          
    default: cout<<"\nWrong Choice\n";
  }
    if (choice != 3)
    {
      cout<<"\n--------------------------------------------------";
      cout<<"\nDo you want to continue - 1 or Exit - 0: ";
      cin>>option;
      if(option == 0)
      {
        choice = 3;
      }
    }
  
 }while(choice != 3); 
 cout<<"\n\tEND\n";
 return 0;
}
