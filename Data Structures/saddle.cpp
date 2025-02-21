#include<iostream>

using namespace std;

class matrix
{
int **Matrix;
int dimX;
int dimY;
public:
 matrix(){};
 matrix(int x,int y)
 {
  dimX=x;
  dimY=y;
  Matrix=new int *[dimX];
  for(int i=0;i<dimX;i++)
    {
     Matrix[i]=new int [dimY];
    }
 }
 void input(int &i,int &j,int value=0)
  {
  Matrix[i][j]=value;
  }
int SADDLE_POINT()
{
 int m[dimX];
 int n[dimY];
 int i,j;
 int c = 1;
 for( i=0;i<dimX;i++)
 {
  m[i] = Matrix[i][0];
  n[i] = Matrix[0][i];
  
  for( j=0;j<dimY;j++)
  {
   if (m[i] > Matrix[i][j] )
   {
    m[i] = Matrix[i][j];
   }
   if(n[i] < Matrix[j][i])
   {
    n[i] = Matrix[j][i];
   }
  }
 }
 
 cout<<"\nThe Saddle Points are : ";
  
  for(i =0;i<dimX;i++)
  {
   for(j=0;j<dimY;j++)
   {
    if(m[i] == n[j])
    {
     cout<<m[i]<<"  ";
     c = 0;
    }
   }
  }
  cout<<endl;
  return c;
}
void Display()
{
 for(int i=0;i<dimX;i++)
 {
 for(int j=0;j<dimY;j++)
 {
  cout<<Matrix[i][j]<<" ";
 } 
 cout<<"\n";
 }
}

~matrix()
  {
    for(int i=0;i<dimX;i++)
    {delete Matrix[i];}
    delete Matrix;
  }
};
int main()
{
 cout<<"\n\tSADDLE POINT OF MATRIX\n";
 int dimX , dimY, element,choice;
 do{
 cout<<"\nEnter the dimension of the matrix : ";
 cin>>dimX>>dimY;

 matrix M(dimX,dimY);
 cout<<"Enter each elements in the matrix : \n";
 for(int i=0;i<dimX;i++)
 {
  for(int j = 0; j<dimY;j++)
  {
   cin>>element;
   M.input(i,j,element);
  }
 }
 cout<<"\n\tINPUT : \n\n";
 M.Display();
 cout<<"\n-----------------------------------------------------------------------";
 if ( M.SADDLE_POINT() == 1)
 {
  cout<<"\nThe matrix have no saddle point. \n";
 }
 cout<<"-----------------------------------------------------------------------\n";
 cout<<"\nDo you want to continue (1- continue or 0 - Exit) : ";
 cin>>choice;
 }while(choice != 0);
 cout<<"\n\tEND\n";
 return 0;
}
