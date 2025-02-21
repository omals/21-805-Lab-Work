#include<iostream>
using namespace std;

class staticcount
{
 int objnum;
 static int count;
 public:
  static void showcount()
  {
    cout<<"\tNumber of objects created: "<<count<<endl;
  }
  void input()
  {
   objnum= ++count;
  }
  void display()
  {
   cout<<"Object number: "<<objnum<<endl;
  }
 };
 
 int staticcount :: count;
 
 int main()
 {
  int n;
 cout<<"Before object creation statement.\n";
  staticcount :: showcount();
   cout<<"Enter the number of objects to be created:";
   cin>>n;
  staticcount obj[n];
 
  
  for( int i=0;i<n;i++)
  {
  cout<<"Object created\n";
   obj[i].input();
  }
  cout<<"After object creation statement.\n";
  staticcount :: showcount();
  
  cout<<"Ordered list of 5 objets created.\n";
   for( int i=0;i<n;i++)
  {
   obj[i].display();
  }
  return 0;
 }
