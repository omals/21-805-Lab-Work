#include<iostream>
using namespace std;
class matrix
{
 int **m;
 int d1,d2;
 public:
 matrix(){}
 matrix(matrix &a)
 {
  for(int i=0;i<d1;i++)
      { for(int j=0;j<d2;j++)
         {
       m[i][j]=a.m[i][j];
         }}
         }
  matrix(int x,int y);
  void input(int &i,int &j,int &value)
   {
  m[i][j]=value;
    }
  void get(void);
  matrix operator+(matrix );
  matrix operator*(matrix );
  ~matrix()
  {for(int i=0;i<d1;i++)
  {delete m[i];
   delete m;
   cout<<"Destructor\n";}}
 };
  matrix::matrix(int x,int y)
 {
  d1=x;
  d2=y;
  m=new int *[d1];
  for(int i=0;i<d1;i++)
    {m[i]=new int [d2];}
 }
 void matrix::get(void)
 {
  for(int i=0;i<d1;i++)
      { for(int j=0;j<d2;j++)
         {
        cout<<m[i][j]<<" ";
         }
      cout<<endl;}
 }
 matrix matrix:: operator+(matrix a)
 {
  matrix s(a.d1,a.d2);
  for(int i=0;i<d1;i++)
      { for(int j=0;j<d2;j++)
         {
          s.m[i][j]=m[i][j]+a.m[i][j];
         }
      }
  return s;
  }  
  matrix matrix::operator*(matrix a)
  {matrix c;
 c.d1=d1;
 c.d2=a.d2;
 {int i,j,k;
   for(i=0;i<d1;i++)
   {
    for(j=0;j<a.d2;j++)
    {
     for(k=0;k<a.d1;k++)
     {
     c.m[i][j]=c.m[i][j]+m[i][k]*a.m[k][j];
     }
    }
   }
   return c;}
   }


 int main()
    {cout<<"\n\tMATIRX OPERATIONS\n";
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
     cout<<"\nEnter the Rows and Columns of the 2nd matrix: ";
     cin>>r2>>c2;
     matrix B(r2,c2);
     
     cout<<"Enter the elements in the matrix row by row.\n";
     int i,j,value;
     for(i=0;i<r2;i++)
      { for(j=0;j<c2;j++)
         {
          cin>>value;
          B.input(i,j,value);
         }
         }
     
     
     int ch;
     cout<<"\n\tMATRIX OPERATION\n";
    
   do{
    cout<<"\nChoose the operation to be performed with the matrices.\n1.Addition\n2.Multiplication\n3.Exit\n";
    cin>>ch;
    cout<<"---------------------------------------------------------\n";
 switch(ch)
    {
    case 1:
      if(r1==r2 && c1==c2)
      {matrix C1(r1,c1);
       cout<<"Sum of the two matrix: \n";
       C1=A+B;
       C1.get();
     }
     else{cout<<"Computing Sum of the two matrices are no possible.\nThey are with different dimensions.\n";}
     break;
     
    case 2:
     if(c1==r2)
      {matrix C2(r1,c2);
       cout<<"Product of the two matrix: \n";
       C2=A*B;
       C2.get();
       }
     else{cout<<"Computing Product of the matrices is not possible.\n";}
     break;

    case 3:
      break;
    default:
      cout<<"Wrong choice.\n";
      break;
     }
     int t;
     if(ch!=3)
      { cout<<"---------------------------------------------------------\n";
        cout<<"\nDo you want to continue ('1'-continue or '0'-exit).\t";
       cin>>t;
       if(t==0)
          ch=3;}
   }while(ch!=3);
   cout<<"\tEND\n";
      return 0;
     }
