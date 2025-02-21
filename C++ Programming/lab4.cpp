#include<iostream>
#include<cstring>
using namespace std;
class String
{
 char *name;
 int length;
 public:
  String()
  { 
   length=0;
   name=new char[length+1];
  }
  void input(void);
  void display(void);
  void concatenate(String a,String b);
  void compare( String &t);
  void stlength(void);
 };
 void String::input(void)
 {
  cout<<"Enter String: ";
  cin>>name;
  length=strlen(name);
 }
void String::display(void)
{
 cout<<name;
}
void String::concatenate(String a,String b)
{
 length=a.length+b.length;
 delete name;
 name=new char[length+1];
 strcpy(name,a.name);
 strcat(name," ");
 strcat(name,b.name);
}
void String::stlength(void)
{

 cout<<"The length: "<<strlen(name)<<"\n";
}
void String::compare( String &s)
{
 int m=strlen(s.name);
 int n=length;
 if(m>n)
 {cout<<"\n\t'";
  display();
  cout<<"' Smaller than '";
  s.display();
  cout<<"'\n";}                                            
 else if(m<n)
 {
  cout<<"\n\t'";
  s.display();
  cout<<"' Smaller than '";
  display();
  cout<<"'\n";
 }
else
 cout<<"\n\tThe two strings are of same size.\n";                                       
}
int main()
{
 String s1, s2,s3;
 s1.input();
 s2.input();
 /*cout<<"Please enter the required action to be performed with inputed string.\n1.Comparison \n2.Concatenation \n3.Length of the string \4Exit";
 */
 cout<<"The comparison of the String objects";
 s1.compare(s2) ;    
cout<<"The Concatenation of String: \n\t\t";
 s3.concatenate(s1,s2);
 s3.display();
 cout<<"\nThe Length of the String objects: \n\tString 1 :";
 s1.stlength();
 cout<<"\tString 2 :";
 s2.stlength();
 cout<<"\tString 3 :";
 s3.stlength();
 
 return 0;
}
 
 
  
  
  
  
  
  
  
  
  
 
 
 
 
 
