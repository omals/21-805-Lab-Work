#include<iostream>
using namespace std;
int count=0;
class bankacc
{
 char cust_name[50];
 char acc_type[30];
 float acc_no;
 float balance=0.0;
 public:
  void new_acc(void);
  void withdraw(void);
  void deposit(void);
  void balance_en(void);
  void acc_statement(void);
};
void bankacc::new_acc()
{
 acc_no=count;
 cout<<"Enter the name    : ";
 cin>>cust_name;
 cout<<"Enter account type: ";
 cin>>acc_type;
 cout<<"Enter the balance : ";
  cin>>balance;
cout<<"Your Bank Account is created successfully.\n";
 cout<<"Your Account number is : "<<acc_no<<"\nYour current balance is: "<<balance<<endl;

}
void bankacc:: acc_statement()
{
 cout<<"The Bank Details "<<endl;
 cout<<"Account number : "<<acc_no<<endl;
 cout<<"Holder name    : "<<cust_name<<endl;
 cout<<"Account type   : "<<acc_type <<endl;
 cout<<"Account balance: "<<balance<<endl;
}
void bankacc::balance_en()
{
 cout<<"Your current Balance in the account number "<<acc_no<<" is "<<balance<<endl;
}
void bankacc::deposit()
{
 float d;
 cout<<"Enter the amount to deposit: ";
 cin>>d;
 balance=balance+d;
 cout<<"Your balance is "<<balance<<endl;
}
void bankacc::withdraw()
{
 float w,temp;
  cout<<"Account Balance: "<<balance<<endl;
 cout<<"Enter the amount to withdraw: ";
 cin>>w;

 temp=balance-w;
 if(temp>500)
 {
  balance=temp;
  cout<<"Your Curent balance is "<<balance<<endl;
 }
 else
 {cout<<"Your current balance is not sufficient to withdraw Rs."<<w<<" with a minimum balance of Rs.500. \n";
 }
}

int main()
{
bankacc customer[100];  
int ch,accn;
do
{
 cout<<"\t WELCOME TO THE BANK SERVICES \n"<<"1.New account.\n2.Deposit Amount.\n3.Withdraw Amount.\n4.Balance enquiry.\n5.Account Statement.\n6.Exit.\nEnter your choice: ";
 cin>>ch;
 if(ch==1)
 {
  customer[count].new_acc();
  count=count+1;
  bankacc customer[count];
 }
 else if(ch>1&&ch<6)
 {
  cout<<"Enter the Account number :";
  cin>>accn;
  if(accn>(count-1))
    cout<<"Account number does not matches.\n";
  else
  {
   cout<<"Account number matches.\n";
   switch(ch)
   { 
    case 2:customer[accn].deposit();
     break;
    case 3:customer[accn].withdraw();
     break;
    case 4:customer[accn].balance_en();
     break;
    case 5:customer[accn].acc_statement();
     break;
    }
   }
  }
 else if(ch==6)
{   cout<<"\tEND\n";
    break;
}
 else
    cout<<"Your choice is wrong.\n";
    
}while(ch!=6);
return 0;
}











        
 
 
