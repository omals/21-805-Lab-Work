#include<iostream>
using namespace std;
class complex
{
 int real;
 int imag;
 public:
  complex()
  {real=0;
   imag=0;
  }
  complex(int a,int b)
  {
   real=a;
   imag=b;
  }
  friend complex add(complex &,complex &);
  void display(void);
 };
 void complex::display(void)
 { 
  cout<<real;
  if(imag<0)
   cout<<imag<<"i"<<endl;
  else
   cout<<" +"<<imag<<"i"<<endl;
 }
 complex add(complex &a, complex &b)
 {
  complex c;
  c.real=a.real+b.real;
  c.imag=a.imag+b.imag;
  return c;
 }
 
 int main()
 {
  int r1,m1,r2,m2;
  cout<<"Enter the real and imaginary part of 1st complex number.\n";
  cin>>r1>>m1;
  complex c1(r1,m1);
  cout<<"Enter the real and imaginary part of 2nd complex number.\n";
  cin>>r2>>m2;
  complex c2(r2,m2);
  complex c3;
  c3=add(c1,c2);
  cout<<"Input numbers\n\t1st-  ";
  c1.display();
  cout<<"\t2nd-  ";
  c2.display();
  cout<<"    Result :  ";
  c3.display();
  return 0;
  }
