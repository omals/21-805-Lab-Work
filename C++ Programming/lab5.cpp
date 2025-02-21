/*Dynamic initialisation of matrix with one function with appropriate 
 */
#include<iostream>
using namespace std;
int count=0;
class order
{
 public:
  order()
  {
   count++;
   cout<<"Object Created:"<<count<<"\n";
  }
 
  ~order()
  {
   cout<<"Object Destroyed: "<<count<<endl;
   count--;
  }
 
};
  int main()
  {
   cout<<"\tMain Constructors invoked\n";
   
   order c1,c2,c3;
    {
    cout<<"\tBlock 1:\n";
    order c4,c5;
    }
    {
    cout<<"\tBlock 2:\n";
    order c6,c7;
    }
     cout<<"\tMain Destructor invoked\n";
  return 0;
 }
