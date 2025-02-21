#include<iostream>
#include<iomanip>
using namespace std;

void LINEAR_SEARCH(int List_Data[],int Terms,int search_key)
{
 int index = 0, Position = (-1);
 while (index < Terms & Position == (-1))
 {
  if(List_Data[index] == search_key)
  {
   Position = index;
   break;
  }
  index++;
 }
 if(Position != -1)
     cout<<"\nThe search element is found at "<<index+1<<" position";
 else
     cout<<"\nThe search element not found in the list";
}

void BINARY_SEARCH(int tempList[] , int upperLimit, int Key)
{
 int begin=0,end=upperLimit;
 cout<<"\n[The index of the List starts from '0' to '"<<upperLimit<<"'.]\n";
 cout<<"\nMiddle_Index"<<setw(18)<<"Middle_Values\n";
 cout<<"-----------------------------------------------------------------------\n";
 
 int middle = ((begin+end)/2);  //calculate the middle index of the array
 
 while (tempList[middle] != Key && begin <= end)
 {
  cout<<setw(6)<<middle<<setw(18)<<tempList[middle]<<endl;
  if( Key < tempList[middle])  
    end = middle - 1;
  else
   begin = middle + 1;
   
  middle = (begin+end)/2; // seting the middle value 
 }

 if(tempList[middle] == Key)
 {
   cout<<setw(6)<<middle<<setw(18)<<tempList[middle]<<endl;
 cout<<"-----------------------------------------------------------------------\n";
   cout<<"The search element found at "<<middle+1<<" position ";
 }
 else
  {  cout<<"-----------------------------------------------------------------------\n";
  cout<<"The search element not found in the List";}
}

int TERTIARY_SEARCH(int tempList[] , int numberOfTerms , int searchKey)
{
 int begin=0 , end=numberOfTerms, middle1,middle2 ;
 cout<<"\n\t[The index of the List starts from '0' to '"<<numberOfTerms<<"'.]\n";
 cout<<"\nMiddle_Index-1"<<setw(20)<<"Middle_Values-1"<<setw(18)<<"Middle_Index-2"<<setw(18)<<"Middle_Values-2";
 cout<<"\n-----------------------------------------------------------------------\n";
 while(begin<=end)
 {
  middle1 = ((end - begin)/3)+begin;
  middle2 = ((2*(end-begin))/3)+begin;
  cout<<setw(7)<<middle1<<setw(20)<<tempList[middle1]<<setw(20)<<middle2<<setw(18)<<tempList[middle2]<<endl;
  if(searchKey == tempList[middle1])
     return (middle1+1);
  if (searchKey == tempList[middle2])
      return (middle2+1);
  if (searchKey < tempList[middle1])
     {
      end = middle1-1;
     } 
  else if (searchKey > tempList[middle2])
      {
       begin = middle2+1;
      }
  else
     {
      begin = middle1 +1;
      end = middle2 - 1;
     }
 }
 return -1;
}
 
int FIBONACCI_SEARCH(int tempList[] , int tempTerms ,  int Key)
{
 cout<<"\n[The index of the List starts from '0' to '"<<tempTerms-1<<"' .]\n";
 int firstElement = 0 , secondElement = 1 , thirdElement = firstElement+secondElement;
 int offSet = -1 , i;
 while (thirdElement < tempTerms)
 {
  firstElement = secondElement;
  secondElement = thirdElement;
  thirdElement = firstElement+secondElement;
 }

 cout<<"\n  F2"<<setw(6)<<"F1"<<setw(6)<<"Fb"<<setw(6)<<"i"<<setw(10)<<"offSet"<<setw(12)<<"element \n";
 cout<<"-----------------------------------------------------------------------\n";
 	
 while(thirdElement > 1)
 {
 
  i = offSet + firstElement;
  cout<<"  "<<firstElement<<setw(6)<<secondElement<<setw(7)<< thirdElement<<setw(6)<<i<<setw(9)<<offSet<<setw(10)<<tempList[i]<<"\n";

  if (tempList[i] < Key)
  {
   thirdElement = secondElement;
   secondElement = firstElement;
   firstElement = thirdElement - secondElement;
   offSet = i;
  }
  else if (tempList[i] > Key)
  {
   thirdElement = firstElement;
   secondElement = secondElement - firstElement;
   firstElement = thirdElement - secondElement;
  }
  else
  {  cout<<"-----------------------------------------------------------------------\n";
   return i+1;
  }
  
 }
 if (secondElement == 1 & (tempList[offSet+2]) == Key)
 { cout<<"-----------------------------------------------------------------------\n";
  return (offSet+2);
 }
 cout<<"-----------------------------------------------------------------------\n";
 return (-1);
}

 
int INTERPOLATION_SEARCH(int tempList[] , int tempTerms, int search)
{
 cout<<"\n[The index of the List starts from '0' to '"<<tempTerms-1<<"' .]\n";
 int end = tempTerms-1 , begin = 0;
 
 cout<<"\nBEGIN"<<setw(11)<<"END"<<setw(13)<<"INDEX"<<setw(14)<<"VALUE \n";
 cout<<"-----------------------------------------------------------------------\n";

 while(begin <= end & search >= tempList[begin] & search <= tempList[end])
 {
  float valuenum = search - tempList[begin];
  float valueden = tempList[end]-tempList[begin];
  float value1 = end-begin;
  float value2 = ((valuenum)/(valueden)) * value1;
  int position = begin+value2;

  cout<<setw(4)<<begin<<setw(12)<<end<<setw(12)<<position<<setw(12)<<tempList[position]<<endl;
  
  if (search == tempList[position])
  {  cout<<"-----------------------------------------------------------------------\n";
   return position+1;
  }
  else if (search > tempList[position])
  {
   begin = position+1;
  }
  else
  { 
   end = position - 1;
  }
 }
 cout<<"-----------------------------------------------------------------------\n";
 return -1;
}


int main()
{
 cout<<"\n\tSEARCHING IN AN ARRAY\n";
 int Number_of_terms,search_element,choice = 1,option=6, position;
 
 do{
 cout<<"\nEnter the Number of Elements  : ";
 cin>>Number_of_terms;
 int List[Number_of_terms];
 
 
 cout<<"Enter the elements one by one : ";
 for (int loop_variable = 0;loop_variable < Number_of_terms;loop_variable++)
 {
  cin>>List[loop_variable];
 }
 
 do {
 cout<<"\nEnter the Number to search    : ";
 cin>>search_element;
 
 cout<<"\nCHOICE THE SEARCH TECHNIQUE :\n 1. LINEAR SEARCH \n 2. BINARY SEARCH\n 3. TERTIARY SEARCH\n 4. FIBANNOCCI SEARCH \n 5. INTERPOLATION SEARCH\n 6.EXIT\n =>  ";
 cin>>option;
 cout<<"\n-----------------------------------------------------------------------";
  switch(option)
  {
   case 1:{LINEAR_SEARCH(List,Number_of_terms,search_element);
           break;}
   case 2:{BINARY_SEARCH(List,(Number_of_terms-1),search_element);
           break; }
   case 3:{position = TERTIARY_SEARCH( List , (Number_of_terms-1), search_element);
           if (position != -1)
  		 cout<<"\t\tThe element is found at position : "<<position;
	 else
  		 cout<<"\t\tThe element not found in the list ";
           break;}
   case 4: {position = FIBONACCI_SEARCH(List , Number_of_terms, search_element );
            if (position != -1)
 		{
  			cout<<"The search element found at position "<<position;
		 }
	    else
		 {
  			cout<<"The search element not found in the List. ";
		 }
            break; }
   case 5: {position = INTERPOLATION_SEARCH(List, Number_of_terms, search_element);
            if(position != -1)
  		cout<<"The search number found at position "<<position;
 	    else
 		 cout<<"The search number not found in the List ";
            break;  }
     case 6:{ cout<<"\n\t\tEXIT FROM SEARCHING IN ARRAY";
             break;}
  }
 
 
 cout<<"\n-----------------------------------------------------------------------";
 cout<<endl;
 if(option != 6){
 cout<<"\nDo you continue search with same list - 1 ,another list - 2 or Exit - 3 \nMake your choice : ";
 cin>>choice;
 cout<<"\n";}
 else
   choice = 3;
 }while(choice == 1 ); //Loop to continue search in the same List
 }while(choice == 2);  //Loop to continue search in another List of number
 cout<<"\n\tEND\n\n";
 return 0;
}
