#include<iomanip>
#include<iostream>
using namespace std;

void SIEVE_METHOD(int tempList[] , int extent)
{
 cout<<"\tPRIME NUMBERS\n\n";
 tempList[0]=0;
 for(int traversal=1 ; traversal < extent ; traversal++)
 { 
   if (tempList[traversal] !=0)
   {
    int p = tempList[traversal]*tempList[traversal];
    p=p-1;
    for(int i=p;i>=p & i<extent;i=i+tempList[traversal])
    {
     if(tempList[i]%tempList[traversal] == 0)
     {
      tempList[i] = 0;
     }
    }
   }
 }
}

int main()
{
 cout<<"\n\tPRIME NUMBERS USING SIEVE METHOD\n";
 int upperLimit;
 cout<<"\nPrint Prime number upto : ";
 cin>>upperLimit;
 int List[upperLimit];
 for(int number = 0 ; number < upperLimit ; number++ )
 {
  List[number] = number+1;
 }
 cout<<endl;
 for(int n = 0;n<upperLimit;n++)
 {
  cout<<List[n]<<" ";
  if((n+1)%10 == 0)
     cout<<endl;
 }
 cout<<endl;
 
 SIEVE_METHOD(List,upperLimit);
 
 for(int n = 0;n<upperLimit;n++)
 {
  cout<<List[n]<<setw(4);
  if((n+1)%10 == 0)
     cout<<endl;
 }
 cout<<endl;
 return 0;
}
