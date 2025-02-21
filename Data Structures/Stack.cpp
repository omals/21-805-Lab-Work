#include<iostream>
using namespace std;

class STACKARRAY
{

 int *Stack;
 int TOP;
 int MAXSTK;
public:
 STACKARRAY( int maxstk)
 {
  TOP  = -1;
  MAXSTK = maxstk;
  Stack = new int[maxstk];
 }
 int PUSH( int ITEM )
 {
  if (TOP == MAXSTK)
  {
   cout<<"\tOVERFLOW \n";
   return 1;
  }
  TOP = TOP+1;
  Stack[TOP] = ITEM;
  return 0;
 }
 int POP( )
 {
  int ITEM;
  if (TOP == -1)
  {
   cout<<"\tUNDERFLOW \n";
   return -1;
  }
  ITEM = Stack[TOP];
  TOP = TOP-1;
  return ITEM;
 }
 
 void DISPLAY()
 {

  for(int i=0;i<=TOP;i++)
  {
   cout<<"  "<<Stack[i];
  } 
  cout<<endl;
 }
};

class Node
{
 public:
   int info;
   Node *link;
};
class STACKLINK
{
 Node *TOP;
 public:
   STACKLINK()
   {
   TOP = NULL;
   }
   int PUSH( int ITEM)
   {
    Node *NEW = new Node;
    if (NEW == NULL)
    {
     cout<<"\tOVERFLOW\n";
     return 1;
    }
    NEW->info = ITEM;
    NEW->link = TOP;
    TOP = NEW;
    return 0;
    delete NEW;
   }
   int POP()
   {
    Node *TEMP = new Node;
    if (TOP == NULL)
    {
     cout<<"\tUNDERFLOW\n";
     return 1;
    }
    int ITEM = TOP->info;
    TEMP = TOP;
    TOP = TOP->link;
     return ITEM;
     delete TEMP;
   }
   
   void DISPLAY()
   {
     Node *TEMP = new Node;
     TEMP = TOP;
     while (TEMP != NULL)
     {
      cout<<TEMP->info<<"  ";
      TEMP = TEMP->link;
     } 
     cout<<endl;
     delete TEMP;
   }
};

int main()
{
 cout<<"\n\tSTACK ";
 int MAXSTACK,terms,element,option,choice,key;
 do
 {
   cout<<"\n---------------------------------------------------------\n";
   cout<<"select the Data Structure to use : \n   1. ARRAY \n   2. LINKED LIST \n   3. Exit \n ::> "; 
   cin>>choice;
   switch(choice)
   {
     case 1:
       {  cout<<"\n\tSTACK using ARRAY \n";
          cout<<"__________________________________________________________\n";
          cout<<"\nEnter the space to be provided in the stack : ";
          cin>> MAXSTACK;
 
          STACKARRAY SA(MAXSTACK-1)  ;
 
          cout<<"Enter Number of elements in exsisting Stack : ";
          cin >> terms;
          cout<<"Enter the elements : ";
          for(int i=0;i<terms;i++)
          {
            cin>>element;
            SA.PUSH(element);
          }
          
          do
          {     cout<<"\n---------------------------------------------------------\n";
 		cout<<"\nOperation on STACK :\n  1. PUSH()\n  2. POP() \n  3. DISPLAY \n  4. Exit \n ==> ";
 		cin>>option;
		switch(option)
 		{
 		  case 1:
       		cout<<"\nEnter the number to PUSH : ";  
       		cin>>element;
       
       		key = SA.PUSH(element);
                       if(key != 1)
                       {
                         cout<<"\tElement PUSHED to the STACK\n";
                       }
       		break;
       		
 		  case 2: 
       		cout<<"\nPop off the element : ";
       		element = SA.POP();
       		if (element != (-1))
       		{
          		    cout<<element<<"\n";
       		}
       	       break;
  
                 case 3: 
                       cout<<"\nThe Elements in the Stack : \n"; 
                       
                       SA.DISPLAY();	
                      
                       break;
                 case 4:
        		break;
           
  		 default : cout<<"\nWrong Choice\n";
  	       }
         }while(option != 4);
         cout<<"\n---------------------------------------------------------\n";
         cout<<"\nDo you want to continue with STACK using LINKED LIST - 1 or EXIT the program - 0 : ";
         cin>>option;
         if (option == 0)
         {
           choice = 3;
         }
         break;
      }
     case 2:
      {    cout<<"\n\tSTACK USING lINKED LIST\n";
           cout<<"__________________________________________________________\n"; 	   
 	   STACKLINK SL;
 
 	   cout<<"\nEnter the Number of Elemnts to PUSH : ";
           cin>>terms;
           cout<<"Enter the elements : ";
           for (int i=0 ;i<terms;i++)
           {
              cin>>element;
              SL.PUSH(element);
           }
           
           do
           { cout<<"\n---------------------------------------------------------\n";
             cout<<"Choose the operation to perform : \n  1. PUSH\n  2. POP\n  3. DISPLAY ELEMENTS \n  4. EXIT \n => ";
             cin>>option;
             switch(option)
             {  
               case 1:
                {  cout<<"\nEnter the element to PUSH : ";
                   cin>>element;
                   
                   key = SL.PUSH(element);
                   if(key != 1)
                   {
                      cout<<"\n\tElement PUSHED to the STACK\n";
                   }
                   
                   break;
                } 
              case 2:
                {   cout<<"\nIt POP off the TOP element in the STACK : ";
                    element = SL.POP();
 		     if (element != 0)
                     {
  			cout<<element<<endl;
		      }
		      break;
		 }
	      case 3:
	         {   cout<<"\nThe Elements in the Stack : \n";
	              
	              SL.DISPLAY();
	              break;
	         }
	      case 4:
	              break;
	      default : cout<<"\nWrong Choice\n";
	     }
	   }while(option != 4);
           cout<<"\n---------------------------------------------------------\n";
	   cout<<"\nDo you want to continue with STACK using ARRAY - 1 or EXIT the program - 0 : ";
           cin>>option;
           if (option == 0)
           {
              choice = 3;
           }
	   break;
	}
       case 3: 
           break;
       default: cout<<"Wrong Choice\n";
    }
 
 }while(choice!=3);
 cout<<"\n\tEND\n";
 return 0;
}

