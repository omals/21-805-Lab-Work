#include<iostream>
using namespace std;
class complexno
{
 int real;
 int imag;
 public:
  complexno()
  {real=0;
   imag=0;
  }
  complexno(int a)
  {
   real=a;
   imag=a;
  }
  complexno(int a,int b)
  {
   real=a;
   imag=b;
  }
  void add(complexno,complexno);
  void display(void);
 };
 void complexno::add(complexno a, complexno b)
 {
  real=a.real+b.real;
  imag=a.imag+b.imag;
 }
 void complexno::display(void)
 { 
  cout<<" "<<real<<" ";
  if(imag<0)
   cout<<imag<<"i"<<endl;
  else
   cout<<"+ "<<imag<<"i"<<endl;
 }
 int main()
 {
  int r1,r2,m2;
  cout<<"Enter the complex number value with same real and imaginary part.\n";
  cin>>r1;
  complexno c1(r1);
  cout<<"Enter the real and imaginary part of 2nd complex number.\n";
  cin>>r2>>m2;
  complexno c2(r2,m2);
  complexno c3;
  c3.add(c1,c2);
  cout<<"Input numbers\n\t1st-";
  c1.display();
  cout<<"\t2nd-";
  c2.display();
  cout<<"   Result : ";
  c3.display();
  return 0;
  }
