#include<iostream>
using namespace std;

void BUBBLE_SORT(int tempList[], int upperLimit)
{
 cout<<"\n\tSORTING PASS\n\n";
 for (int i = 0 ; i < upperLimit ; i++)
 {
  for (int j = 0 ; j < upperLimit - i ; j++)
  {
   if (tempList[j] > tempList[j+1])
   {
    int temp = tempList[j+1];
    tempList[j+1] = tempList[j];
    tempList[j] = temp;	
   }
  }
  cout<<"PASS : "<<i+1<<"  [ ";
  for(int index = 0;index<upperLimit+1;index++)
 {
  cout<<tempList[index]<<" ";
 }
 cout<<"]\n";
 }
}

int main()
{
 cout<<"\n\tBUBBLE SORT\n";
 int terms , index , choice;
 do {
 cout<<"\nEnter the number of terms in the List : ";
 cin>>terms; 
 int List[terms];
 cout<<"Enter Unsorted List elements to sort  : ";

 for(index = 0;index<terms;index++)
 {
  cin>>List[index];
 }
 
 BUBBLE_SORT(List, terms-1);
 
 cout<<"\n\tSORTED LIST\n\n";
 
 for(index = 0;index<terms;index++)
 {
  cout<<List[index]<<" ";
 }
 cout<<"\n\nDo you want to sort another List ( 1 - continue or 0 - Exit) : ";
 cin>>choice;
 }while(choice!=0);
 cout<<"\n\t   END\n\n";
 return 0;
}

