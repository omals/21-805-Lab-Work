#include<iostream>
using namespace std;
int n;
class student
{
 char name[20];
 int rollno;
 float m[3];
 public: 
    void input();
    void calcGrade();
    void display();
};
void student::calcGrade()
{
 float mark=m[0]+m[1]+m[2];
 float grade=(mark/300)*100;
 if(grade>=95)
    cout<<"A+\n";
 else if(grade>=90&&grade<95)
    cout<<"A\n";
 else if(grade>=85&&grade<90)
    cout<<"B+\n";
 else if(grade>=80&&grade<85)
    cout<<"B\n";
 else if(grade>=75&&grade<80)
    cout<<"C+\n";
 else if(grade>=70&&grade<75)
    cout<<"c\n";
 else if(grade>=60&&grade<70)
    cout<<"D+\n";
 else if(grade>=50&&grade<60)
    cout<<"D\n";
 else
     cout<<"F\n";
}

void student:: input()
{
 cout<<"Roll no.= ";
 cin>>rollno;
 cout<<"Name    = ";
 cin>>name;
  cout<<"Mark of Subject 1 out of 100: ";
  cin>>m[0];
  cout<<"Mark of Subject 2 out of 100: ";
  cin>>m[1];
  cout<<"Mark of Subject 3 out of 100: ";
  cin>>m[2];
}


void student:: display()
{
  cout<<"Roll no.:"<<rollno<<"\tName:"<<name<<"\tSubject 1 :"<<m[0]<<"\tSubject 2 :"<<m[1]<<"\tSubject 3 :"<<m[2]<<"\tGrade:";
   calcGrade() ;
}


int main()
{
 int n;
 cout<<"Enter the number of Student in the list: ";
 cin>>n;
 student s[n];
 
 for(int i=0;i<n;i++)
 {s[i].input();}
 cout<<"The list of student with the Name,rollno., Marks with the Grade.\n";
 for(int i=0;i<n;i++)
 {s[i].display();}
 return 0;
}

