#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class country
{ 
 string cname;
 string sname;
 public:
 country(){}
 country(string t1,string t2)
 { sname=t1;
   cname=t2;}
  void getc(void)
  { cout<<sname<<"\n"<<setw(25)<<right<<cname<<"\n"<<setw(25)<<right; }
};
class district:public country
{
 string dname;
 string poname;
 public:
  district(){}
  district(string t1,string t2,string t3,string t4):country(t3,t4)
  {dname=t2;
  poname=t1;
  }
  void getd(void)
  { cout<<poname<<"\n"<<setw(25)<<right<<dname<<"\n"<<setw(25)<<right; }
};
class contact
{
 long int n;
 public:
   contact(){}
   contact(long int t)
   {n=t; }
  void getcon(void)
  { cout<<n<<"\n\n";	}
};
class address:public district , public contact
{string name;
 string hname;
 string pname;
 public:
 address(){}
  address(string t1,string t2,string t3,string t4,string t5, string t6,string t7,long int num):contact(num),district(t4,t5,t6,t7)
  {name=t1;
   hname=t2;
   pname=t3;
    }
  void print(void)
  {	cout<<name<<"\t\t";
  	cout<<hname<<"\n"<<setw(25)<<right<<pname<<"\n"<<setw(25)<<right;
  	getd();
  	getc();
  	getcon();
 }
};
int main()
{int n;
string s1,s2,s3,s4,s5,s6,s7;
long int num;
cout<<"\nNumber of Address Details to be stored: ";
cin>>n;
address a[n];
for(int i=0;i<n;i++)
{cout<<"\nName        : ";
 cin>>s1;
 cout<<"House Name  : ";
 cin>>s2;
 cout<<"Place       : ";
 cin>>s3;
 cout<<"Post Office : ";
 cin>>s4;
 cout<<"District    : ";
 cin>>s5;
 cout<<"State       : ";
 cin>>s6;
 cout<<"Country     : ";
 cin>>s7;
 cout<<"Phone Number: ";
 cin>>num;
 a[i]=address(s1,s2,s3,s4,s5,s6,s7,num);
 }
 cout<<endl;
 cout<<"_________________________________________\n";
 cout<<"\tDATA STORED\n";
 cout<<"_________________________________________\n";
 cout<<"Name\t\tAddress"<<endl;
  cout<<"----------------------------------------\n";
 for(int i=0;i<n;i++)
 {a[i].print();}
 cout<<endl;
 return 0;
 }
 
 
 
 
 
 
 
