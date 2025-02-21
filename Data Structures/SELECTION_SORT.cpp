#include<iostream>
using namespace std;

void SELECTION_SORT(int tempList[] , int upperLimit)
{
int temp,min;

 cout<<"\n\tSORTING PASS\n\n";
 

for (int i=0;i<upperLimit-1;i++)
{ 
 min = i ;
 for( int j=i+1;j<upperLimit;j++)
 { 
  if (tempList[j]<tempList[min])
  {
   min = j;
  }
 }
 temp = tempList[i];
 tempList[i] = tempList[min];
 tempList[min] = temp;

 cout<<"PASS : "<<i+1<<"  [ ";
 for(int index =0;index<upperLimit;index++)
 {
  cout<<tempList[index] << " ";
 }
 cout<<"]"<<endl;
}
}

int main()
{
 int terms , index , choice;
 cout<<"\n\tSELECTION SORT\n";
 do{
 cout<<"\nEnter the number of terms in the List : ";
 cin>>terms;
 int List[terms];
 cout<<"Enter Unsorted List elements to sort  : ";
 for ( index = 0;index < terms ; index++)
 {
  cin>>List[index];
 }
 
 SELECTION_SORT(List,terms);
 
 cout<<"\n\tSORTED LIST\n\n";
 for ( index = 0;index < terms ; index++)
 {
  cout<<List[index]<<" ";
 }
 cout<<endl;
 cout<<"\nDo you want to continue (1 - continue or 0 - Exit ) : ";
 cin>>choice;
 }while(choice == 1);
 cout<<"\n\t   END\n\n";
 return 0;
}
