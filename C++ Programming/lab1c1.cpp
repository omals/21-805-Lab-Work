#include<iostream>
using namespace std;

void insert(int A[],int count,int pos ,int number)
{
 int Temp = count;
 while(count>=pos)
 {
 int m=count+1;
 A[m]=A[count];
 count = count-1;
 }
 A[pos] = number;
 cout<<"Array : ";
 for (int i=0;i<Temp+1;i++)
 {
  cout<<A[i]<<" ";
 }
}
void deleteArray(int A[],int count,int pos)
{
 int j=1;
 int number=A[pos];
 for(int j=pos;j<count-1;j++)
 {
  A[j] = A[j+1];
 }
for (int i=0;i<count+1;i++)
 {
  cout<<A[i]<<" ";
 }
}
int main()
{
 int n,p,num1,num2;
 cout<<"Enter the number of elements in the array : ";
 cin>>n;
 int Array[n+1];
cout<<"Enter the elements in the array : ";
 for (int i=0;i<n;i++)
 {
  cin>>Array[i];
 }
 cout<<"Array : ";
 for (int i=0;i<n;i++)
 {
  cout<<Array[i]<<" ";
 }
 cout<<endl;
 cout<<"Enter the number to insert : ";
 cin>>num1;
 cout<<"Enter the position to insert : ";
 cin>>p;
 insert(Array,n,p-1,num1);
 cout<<endl;
 for (int i=0;i<n+1;i++)
 {
  cout<<Array[i]<<" ";
 }
 cout<<endl;
 cout<<"Enter the position to delete : ";
 cin>>num2;
 deleteArray(Array,n,num2);
return 0;
}












