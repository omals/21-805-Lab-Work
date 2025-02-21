#include<iostream>
#include<cstring>
using namespace std;

void STRING_UPDATION(String T_STRING , int T_Length )
{
 String T_STR;
 for (int count = 0 , pos ;count < T_Length ; count++)
 {
  T_STR[count] = T_STRING[ pos + count - 1 ];
 }
 T_STR[count] = "\0";
 T_STRING = T_STR;
}

int main()
{
 int index, terms, choice;
 cout<<"\n\tSUB_STRING EXTRACTION\n";
 
 String STR;
 
 cout<<"Enter the String from which the substring to be extracted : ";
 cin>>STR;
 
 int Length = len(STR);
 
 String SUBSTR;
 
 cout<<"Enter the sub-string that is to be extracted from String : ";
 cin>>SUBSTR;
 
 STRING_UPDATION( STR , Length );
 
 cout<<"String : "<<STR<<endl;
 return 0;
 
}
