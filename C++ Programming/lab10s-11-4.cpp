#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int count=0;
class list;
class deptstore
{
 float price=0.0;
 int tempa=0;
 int tempr=0;
 public:  
 string name;
 int code=0;
 string note;
 int quantity=0;
  float total;
  void input(void);
  void display(void);
  void totalprice(int);
  //void sumprice(int);
  friend class list;
};
void deptstore:: input(void)
{ 
  cout<<"Code\t\t   : ";
  cin>>code;
  cout<<"\tName\t\t   : ";
  cin>>name;
  cout<<"\tPrice of one item  : ";
  cin>>price;
  cout<<"\tAvailable quantity : ";
  cin>>quantity;
}
void deptstore:: totalprice(int q)
{total=0;
 tempr=q;
 if(quantity>=q)
    { total=q*price; 
      tempa=quantity;
      quantity=quantity-q; 
     // tempr=q;      
      }
 else if(q>quantity)
    {  
       //tempr=q;
       q=q-quantity;
       tempa=quantity;
       total=q*price;
       quantity=0;
    }
 else
    {   cout<<"Stocks not found\n";   }
 }
 
void deptstore:: display(void)
{    
   cout<<"   "<<code<<"\t\t"<<note<<"\t\t"<<name<<"\t\t\t"<<tempr<<"\t\t\t"<<tempa<<"\t\t\t"<<price<<"\t\t\t"<<total<<endl;
}

class list
{ public:
   int quantity=0;
   int code;
   string name;
   void input(void)
   {
      cout<<"Code\t : ";
      cin>>code;
      //cout<<"Name\t : ";
      //cin>>name;
      cout<<"\tQuantity : ";
      cin>>quantity;
    }
    
};

int main()
{
  int n1,n2;
  cout<<"\tDEPARTMENT STORE\n\nNumber Available items : ";
  cin>>n1; 
  deptstore stoke[n1+10];
  cout<<"Enter the details of the items\n";
  for(int i=0;i<n1;i++)
  {  cout<<i+1<<".\t";
     //cout<<"Item Code  : "<<i<<endl;
     stoke[i].input();
  } 
  
  cout<<"\nPurchasing list \nNumber of items : ";
  cin>>n2;
  list item[n2];
  cout<<"\nEnter the details \n";
  for(int i=0;i<n2;i++)
  {  
     cout<<i+1<<".\t";
     item[i].input();
     //cout<<"item quantity1 "<<item[0].quantity<<endl;
  } 
  //cout<<"item quantity2 "<<item[0].quantity<<endl;
  int stokecount=0,t=0; 
   cout<<"  "<<"code"<<setw(20)<<right<<"status"<<setw(18)<<right<<"Name"<<setw(25)<<right<<"Required Quantity"<<setw(28)<<right<<"Available Quantity"<<setw(20)<<right<<"per Price"<<setw(25)<<right<<"Total price"<<endl;
  float s=0;
  //cout<<"item quantity3 "<<item[0].quantity<<endl;
  for(int j=0;j<n2;j++)
  {
    for(int i=0;i<n1;i++)
    { 
      //cout<<"Item "<<j<<" stock "<<i<<endl;
      if(item[j].code==stoke[i].code)
      { //cout<<"i "<<i<<endl;
        //cout<<"item quantity "<<item[i].quantity<<endl;
      	 int m=item[j].quantity;
         //cout<<"Item "<<item[i].quantity;
         stoke[i].totalprice(m);
         stoke[i].note="available";
         stoke[i].display();
         s=s+stoke[i].total;
         stokecount=1;
         t=item[j].code;
         }
     
     }
     if(stokecount==0)
       cout<<"Item : "<<t<<" not in stoke";
  }
  cout<<"\tThe toal Amount : "<<s<<endl;
  }
  
