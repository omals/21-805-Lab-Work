#include <iostream>
using namespace std;
class vector
{
 int *v;
 public:
   vector()
   {
      v = new int[3];
      for(int i=0;i<3;i++)
          {v[i]=0;}
   }
   friend float operator*(vector &,vector &);
   friend void operator<<(int ,vector );
   friend void operator>>(int , vector &);
};
void operator<<(int i,vector a)
   { 
     cout<<a.v[i]<<"i";
   if(a.v[1]<0)
     cout<<a.v[1]<<"j";
   else
     cout<<"+"<<a.v[1]<<"j";
   if(a.v[2]<0)
     cout<<a.v[2]<<"k";
   else
     cout<<"+"<<a.v[2]<<"k";
   }
void operator>>(int i,vector & a)
  {
   for(;i<3;i++)
   {
     cin>>a.v[i];
   }
  }
float operator*(vector & a,vector & b)
  { vector V;
    float dp=0,m;
    for(int i=0;i<3;i++)
    {m=a.v[i]*b.v[i];
     dp=dp+m;
     }
     return dp;
    }
int main()
{  int input=0,output=0,t=1;
   cout<<"\n\t 3D VECTOR MULTIPLICATION\n";
   vector A,B;
   float C;
   cout<<"\nEnter the first  vector: ";
   input>>A;
   cout<<"Enter the Second Vector: ";
   input>>B;
   cout<<"\nDot Product of ";
   C=A*B;
   cout<<"\tVector 1: ";
   output<<A;
   cout<<"\t and\tVector 2: ";
   output<<B;
   cout<<"\n----------------------------------------------------------------------";
   cout<<"\n\tProduct : ";
   cout<<C;
   cout<<"\n---------------------------------------------------------------------\n";
   cout<<endl;
  
   return 0;
 }
   
