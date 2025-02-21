#include<iostream>
using namespace std;
int main()
{
 int A[3][3];
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
   cin>>A[i][j];
  }
 }
 cout<<"\n";
 
 cout<<"Search Begin\n";
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
   if (s==A[i][j])
     {
      cout<<"Search found\n";
      break;
     }
    else if (j==3)
     {
      
     }
  }
 }
 
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
   cout<<A[i][j]<<" ";
  }
   cout<<"\n";
 }

 return 0;
}



11
12
13
23
33
32
31
21
22
