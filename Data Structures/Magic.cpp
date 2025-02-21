#include<iostream>
using namespace std;


int main()
{
 int Square_Size,choice=1;
 cout<<"\n\tMAGIC SQUARE OF ODD ORDER\n---------------------------------------------------\n";
do
{
 cout<<"\nEnter the Size : ";
 cin>>Square_Size;

 int Magic_Square[Square_Size][Square_Size];

 for(int initial_row=0;initial_row<Square_Size;initial_row++)
 {
  for (int initial_column=0;initial_column<Square_Size;initial_column++)
  {
   Magic_Square[initial_row][initial_column]=0;
  }
 }

 int sum = Square_Size*(((Square_Size*Square_Size)+1)/2);
 cout<<"Magic Constant : "<<sum<<endl;
 cout<<endl;

 int Square_row=Square_Size/2;
 int Square_column=Square_Size-1;
 for(int value=0;value<Square_Size*Square_Size;value++)
 {
  if(Magic_Square[Square_row][Square_column]==0)
   { 
     Magic_Square[Square_row][Square_column]=value+1;
   }
  else
   {
     Square_row=Square_row+1;
     Square_column=Square_column-2;
     Magic_Square[Square_row][Square_column]=value+1;  
    }  
  Square_row=Square_row-1;
  Square_column=Square_column+1;
  if(Square_row==-1 & Square_column==Square_Size)
   { 
     Square_row=0;
     Square_column=Square_Size-2;
   }
  else
   {
    if(Square_row==-1)
      Square_row=Square_Size-1;
    if(Square_column==Square_Size)
      Square_column=0;
   }
 }
 for(int initial_row=0;initial_row<Square_Size;initial_row++)
 {
  for (int initial_column=0;initial_column<Square_Size;initial_column++)
  {
   cout<<Magic_Square[initial_row][initial_column]<<"   ";
  }
  cout<<endl;
 }
 cout<<endl;
cout<<"Do you want to continue (0-exit and 1-continue) : ";
cin>>choice; 
cout<<"\n---------------------------------------------------\n";
}while(choice!=0);
 return 0;
}

















