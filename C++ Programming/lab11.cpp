#include<iostream>
using namespace std;
class class_2;
class class_1
{
 int number1;
 public:
  class_1(int a)
  {
   number1=a;
   }
   void output(void)
   {
    cout<<number1<<endl;
   }
   friend void swap(class_1 &,class_2 &);
 };
 class class_2
 {
  int number2;
  public:
   class_2(int b)
   {
    number2=b;
   }
   void output(void)
   {
    cout<<number2<<endl;
   }
   friend void swap(class_1 &,class_2 &);
 };
 void swap(class_1 &a,class_2 &b)
 {
  int temp=a.number1;
  a.number1=b.number2;
  b.number2=temp;
 }
 int main()
 {int m,n;
  cout<<"Enter the values for Swapping between classes.\nClass_1: ";
  cin>>m;
  class_1 A(m);
  cout<<"Class_2: ";
  cin>>n;
  class_1 B(n);
  swap(A,B);
  cout<<"After Swapping the values.\n";
  cout<<"class_1:";
  A.output();
  cout<<"Class_2:";
  B.output();
  return 0;
 }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
  
