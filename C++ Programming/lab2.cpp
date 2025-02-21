#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float area(int a)
{
float area=1;
area=a*a;
return area;
}
float area(int a,int b)
{
 float area= a*b;
 return area;
}
float area(float a,float b,float c)
{
 float s=(a+b+c)/2;
 float s1=s*(s-a)*(s-b)*(s-c);
 s=sqrt(s1);
 float area=s;
 return area;
}
float area(float a)
{
 float area=3.14*a*a;
 return area;
}
float area(float a,float b)
{
 float area=(a*b)/2;
 return area;
}
int main()
{
 int side1,side2;
 float side3,side4,side5;
float
 int ch;
  do{
  cout<<"Make the shape to area of different shapes.:\n1.Square\n2.Rectangle\n3.Triangle\n4.Circle\n5.Rhombus\n6.Exit\n";
 cin>>ch;
 switch(ch)
 {case 1:
 cout<<"Square: Enter the side: ";
 cin>>side1;
 cout<<"\tThe area of square: "<<area(side1)<<"\n";
  break;
 case 2:
   cout<<"Rectangle: Enter the breadth: ";
   cin>>side1;
   cout<<"\t   Enter the Height : ";
   cin>>side2;
   cout<<"\t   The area of Rectangle: "<<area(side1,side2)<<"\n";
    break;
 case 3:
  cout<<"Triangle: Enter the Side 1: ";
  cin>>side3;
  cout<<"\t  Enter the Side 2: ";
  cin>>side4;
  cout<<"\t  Enter the Side 3: ";
  cin>>side5;
  cout<<"\t  The area of Triangle: "<<area(side3,side4,side5)<<"\n";
  break;
 case 4:
   cout<<"Cricle: Enter the Radius: ";
   cin>>side3;
   cout<<"\tThe area of Circle: "<<area(side3)<<"\n";
   break;
 case 5:
  cout<<"Rhombus: Enter the diagonal 1: ";
  cin>>side4;
  cout<<"\t Enter the diagonal 2: ";
  cin>>side5;
  cout<<"\t The area of Rhombus: "<<area(side4,side5)<<"\n";
  break;
 case 6:
      break;
  default:cout<<"Made the wrong choice\n";
}
    }while(ch!=6);
 return 0;
}
