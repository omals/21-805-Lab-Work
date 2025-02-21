#include<iostream>
using namespace std;

void INSERTION_SORT(int tempList[] , int upperLimit)
{
 
 int temp , TEMP;
 int    k = 1;
 while (k!= upperLimit)
 {  
  temp = k;
  while( tempList[k] < tempList[k-1] & k != 0)
  {
   TEMP = tempList[k-1];
   tempList[k-1] = tempList[k];
   tempList[k] =  TEMP;
   k = k-1;
  }
  k = temp;
  cout<<"PASS : "<<k<<" - ";
  for(int element = 0 ; element < upperLimit ; element++)
  {
   cout<<tempList[element]<<"  ";
   temp = temp+1;
  }
  cout<<endl;
  k = k+1;
 }
 
}

int main()
{
 int terms,choice;
 cout<<"\n\tINSERTION SORT\n";
 do{
 cout<<"\nEnter the number of terms in the List : ";
 cin>>terms;
 int List[terms];
 cout<<"Enter Unsorted List elements to sort  : ";
 for(int element = 0;element<terms;element++)
 {
  cin>>List[element];
 } 
 cout<<endl;
 
 cout<<"\n\tSORTING PASS\n\n";
 
 INSERTION_SORT(List , terms);
 
 cout<<"\n\tSORTED LIST\n\n";
 for(int element = 0 ; element < terms ; element++)
 {
  cout<<List[element]<<"  ";
 }
 cout<<"\n\nDo you want to continue ( 1 - continue or 0 - Exit) : ";
 cin>>choice;
 }while( choice == 1);
 cout<<"\n\tEND\n\n";
 return 0;
} 
