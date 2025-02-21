#include<iostream>
using namespace std;

void RADIX_SORT(int List_Data[] , int tempindex)
{
 cout<<"Radix Sort\n";
 for(int index = 0;index < tempindex;index++)
 {
  if( List_Data[index] != 0)
  { 
   while(List_Data[index] != 0)
   {
    List_Data[index]
   }   
  }
    
 }
 
}

int main()
{
 cout<<"\n\tRADIX SORT\n";
 int terms;
 cout<<"Enter the numbers of elements in the List : ";
 cin>>terms;
 int List[terms];
 cout<<"Enter the values of the List : ";
 for(int numbers=0;numbers<terms;numbers++)
 {
  cin>>List[numbers];
 }
 
 RADIX_SORT(List , terms);
 
}
