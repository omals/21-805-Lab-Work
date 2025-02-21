#include<iostream>
#include<iomanip>
using namespace std;

int FIBONACCI_SEARCH(int tempList[] , int tempTerms ,  int Key)
{
 cout<<"[The index of the List starts from '0' to '"<<tempTerms-1<<"' .]\n";
 int firstElement = 0 , secondElement = 1 , thirdElement = firstElement+secondElement;
 int offSet = -1 , i;
 while (thirdElement < tempTerms)
 {
  firstElement = secondElement;
  secondElement = thirdElement;
  thirdElement = firstElement+secondElement;
 }

 cout<<"\n  F2"<<setw(6)<<"F1"<<setw(6)<<"Fb"<<setw(6)<<"i"<<setw(10)<<"offSet"<<setw(12)<<"element \n";
 cout<<"-------------------------------------------\n";
 	
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
  {
   return i+1;
  }
  
 }
 if (secondElement == 1 & (tempList[offSet+2]) == Key)
 {
  return (offSet+2);
 }
 return (-1);
}

int main()
{
 cout<<"\n\tFIBONACCI SEARCH\n";
 int terms , searchKey , position , choice;
 do {
 cout<<"\nEnter the number of terms in the List : ";
 cin>>terms;
 int List[terms];
 cout<<"Enter the sorted elements in the List : ";
 for(int element =0 ; element < terms ; element++)
 {
  cin>>List[element];
 }
 //cout<<"\n";
 do{
 cout<<"\nEnter the element to search : ";
 cin>>searchKey;
 //cout<<"\n";
 
 position = FIBONACCI_SEARCH(List , terms, searchKey );
 
 cout<<"-------------------------------------------\n";
 if (position != -1)
 {
  cout<<"The search element found at position "<<position<<"\n";
 }
 else
 {
  cout<<"The search element not found in the List. \n";
 }
 cout<<"-------------------------------------------\n";
 cout<<"\nDo you want to continue \nEnter ( 1 - Same_List, 2 - Another_List and 3 - Exit) : ";
 cin>>choice;
 }while(choice == 1);
 }while(choice == 2);
 cout<<"\n\tEND\n";
 return 0;
 }
