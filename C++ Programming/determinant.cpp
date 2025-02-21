#include<iostream>
#include<cmath>
using namespace std;
class matrix
{
 
 int d=1;
 int d1,d2;
 public:
 int **m;
 matrix(){};
  matrix(int x,int y);
  void input(int &i,int &j,int &value)
   {
  m[i][j]=value;
    }
  friend int matrix_determinant(int,int );
  friend void submatrix (int n2,int **m2,int **temp, int p,int q);
 };
 matrix::matrix(int x,int y)
 {
  d1=x;
  d2=y;
  m=new int *[d1];
  for(int i=0;i<d1;i++)
    {m[i]=new int [d2];}
 }
 void submatrix(int n2,int **m2, int **temp,int p,int q)
 {
  int i=0,j=0;
  for(int row=0;row<n2;row++)
  {
   for(int col=0;col<n2;col++)
   {
    if(row!=p && col!=q)
    {
     temp[i][j++]=m2[row][col];
     if(j==((n2)-1))
     {
      j=0;
      i++;
     }
    }
   }
  }
 }
int matrix_determinant(int **m1 ,int n1)
{
 int D=0;
 if(n1==1)
 return m1[0][0];
 int temp[n1][n1];
 int sign=1;
 for(int f=0;f<n1;f++)
 {
  submatrix(n1,m1[n1][n1],temp[n1][n1],0,f);
  D=D+sign*m1[0][f]*matrix_determinant(temp[n1][n1],((n1)-1));
  sign=-sign;
  }
  return D;
 }
int main()
    {
     int r1,c1,r2,c2;
     cout<<"Enter the Rows and Columns of the 1st matrix: ";
     cin>>r1>>c1;
     matrix A(r1,c1);
     cout<<"Enter the elements in the matrix row by row.\n";
     int i1,j1,value1;
     for(i1=0;i1<r1;i1++)
      { for(j1=0;j1<c1;j1++)
         {
          cin>>value1;
          A.input(i1,j1,value1);
         }
         }
    
     if(r1==c1)
     { 
     cout<<"The determinant of 1st matrix is: ";
     int determinant=matrix_determinant(A.m[r1][r1],r1);
     cout<<determinant<<endl;
     }
     else
     cout<<"Determinant is not possible for 1st matrix.\n";
     
     return 0;
     }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 /* 
   */  
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     /*   int submatrix[n][n];
          int d=0;
     
     
        for(int x=0;x<n;x++)
        {int subi = 0;
        for(int i=1;i<n;i++)
        {int subj=0;
        for(int j=0;j<n;j++)
        {
        if(j==x)
         continue;
         submatrix[subi][subj]=m[i][j];
         subj++;
        }
        subi++;
        }
        d=d+(pow(-1,x)*m[0][x]*matrix_determinant(n-1));
        }
       */
