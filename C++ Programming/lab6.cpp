#include<iostream>
using namespace std;
class TIME
{
 int hours=0;
 int minutes=0;
 int seconds=0;
 public:
  void input(void);
  void add(TIME a,TIME b);
  void display(void);
 };
 void TIME::input(void)
 {
  cout<<"Enter hours  : ";
  cin>>hours;
  cout<<"Enter minutes: ";
  cin>>minutes;
  cout<<"Enter seconds: ";
  cin>>seconds;
 }
 void TIME::add(TIME a,TIME b)
 {
  seconds=a.seconds+b.seconds;
  minutes=seconds/60;
  seconds=seconds%60;
  minutes=minutes+a.minutes+b.minutes;
  hours=minutes/60;
  minutes=minutes%60;
  hours=hours+a.hours+b.hours;
 }
 void TIME::display(void)
 {
  cout<<hours<<" hours : "<<minutes<<" minutes : "<<seconds<<" seconds \n";
 }
 int main()
 {
  TIME T1,T2,T3;
  cout<<"\tEnter the 1st TIME details.\n";
  T1.input();
  cout<<"\tEnter the 2nd TIME details.\n";
  T2.input();
  T3.add(T1,T2);
  cout<<"\tInputed Time details :\n 1st -\t";
  T1.display();
  cout<<" 2nd -\t";
  T2.display();
  cout<<"Result: ";
  T3.display();
  return 0;
  }
