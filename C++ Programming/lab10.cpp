#include<iostream>
using namespace std;
const int m=100;
class item
{
 int code_no[m];
 float itemprice[m];
 int count;
 public: 
  void setcount(void)
  {
   count=0;
  }
  void additem(void);
  void displaysum(void);
  void deleteitem(void);
  void display(void);
 };
 void item:: additem(void)
 {
   cout<<"Enter the item code :";
   cin>>code_no[count];
   cout<<"Enter the item price:";
   cin>>itemprice[count];
   cout<<endl;
   count++;
  }
  void item:: displaysum(void)
  {
   float sum=0;
   for(int i=0;i<count;i++)
   {sum=sum+itemprice[i];}
   cout<<"   Total sum : Rs."<<sum<<"\n";
  }
  void item:: deleteitem(void)
  {
   int a,j=0;
   cout<<"Enter the item code: ";
   cin>>a;
   for(int i=0;i<count;i++)
   {
    if(code_no[i]==a)
      { itemprice[i]=0;
       j=1;
       cout<<"The price is zero for item.\n";}
   }
   if(j==0)
   {cout<<"The item code does not match with the list.\n";
   }
   }
   void item:: display(void)
  {
   cout<<"\tSHOPPING LIST\n";
   cout<<"   code\t\tprice\n";
   for(int i=0;i<count;i++)
   {
    cout<<"   "<<code_no[i]<<"\t\t"<<itemprice[i]<<"\n";
   }
   displaysum();
  }
  
 int main()
   {
    cout<<"The maximum number of items in the list is 100.\n";
    item order;
    order.setcount();
    int choice;
    do
    {
     cout<<"\tChoose the  option to be performed.\n";
     cout<<"1.Add items to the list.\n"<<"2.Delete an item.\n"<<"3.Display the total value.\n"<<"4.Display the shopping list and details.\n"<<"5.Exit\n";
     cin>>choice;
       switch(choice)
       {
       case 1: order.additem();
        break;
       case 2: order.deleteitem(); 
        break;
       case 3:order.displaysum();
        break;
        case 4: order.display();
                
        break;
       case 5: break;
       default:cout<<"You have enter the wrong choice number.\n";
       }
      }while(choice!=5);
      return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
