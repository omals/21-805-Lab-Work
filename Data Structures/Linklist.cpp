#include <iostream>
using namespace std;

class Node
{
public:
 int info;
 Node *link; 
 
};

class LinkList
{
public:
Node *START ;
Node *LOCATE ;
LinkList()
{
 START = NULL;
 LOCATE = NULL;
}
void ADD( int DATA)
{
Node *TEMP = new Node;
TEMP->info = DATA;
TEMP->link = NULL;

if (START == NULL)
{
 START = TEMP;
 LOCATE = TEMP;
}
else
{
 LOCATE->link = TEMP;
 LOCATE = TEMP;
}
}
void TRAVERSE()
{
 Node *PTR = START;
 int i=1;
 while(PTR != NULL)
 {
  cout<<i<<" = "<<PTR->info<<"  ptr = "<<PTR->link<<"\n";
  PTR=PTR->link;  
  i=i+1;
 }
 cout<<"NULL\n";
 delete PTR;
}
void SEARCH( int KEY )
{{
 Node *PTR = START;
 Node *LOCATE = NULL;
 while( PTR != NULL)
 { 
   if (KEY == PTR->info)
   {
     LOCATE = PTR ;
     break;
   }
   PTR = PTR->link;
 }
 if( LOCATE != NULL)
 {
  cout<<"The Data is Located at "<<LOCATE->info<<"\n";
 }
 else
 {
  cout<<"The Date is not Located in the Linked List \n";
 }
 delete PTR;}
 delete LOCATE;
}
Node* FIND( int KEY )
{
 Node *PTR = new Node();
 Node *SAVE = new Node();
 Node *LOC = new Node();
 if (START == NULL)
 {
  LOC = NULL;
  return LOC;
 }
 if (KEY < START->info)
 {
  LOC = NULL;
  return LOC;
 }
 SAVE = START;
 PTR = START->link;
 while(PTR != NULL)
 {cout<<" LOC : "<<LOC->link<<"  PTR->info: "<<PTR->info<<" KEY : "<<KEY<<"\n";
  if( KEY < PTR->info)
  {
   LOC = SAVE;
   return LOC;
  }
  SAVE = PTR;
  PTR = PTR->link;
 }
 cout<<" LOC : "<<LOC->link<<"  PTR->info: "<<PTR->info<<" KEY : "<<KEY<<"\n";
 LOC = SAVE;
 return LOC;
 
 delete LOC;
 delete PTR;
 delete SAVE;
}
void INSERT( int ITEM)
{{
 Node *LOCATE = new Node();
 Node *NEW = new Node();
 LOCATE = FIND( ITEM );
 cout<<"Given1 : "<<LOCATE->info<<"  "<<LOCATE->link<<"\n";
 if (NEW == NULL)
 {
  cout<<"OVERFLOW HAPPENED \n";
 }
 NEW->info = ITEM;
 if (LOCATE == NULL)
 {
  NEW->link = START;
  START = NEW;
 }
 else
 {
  cout<<"Given2 : "<<LOCATE->info<<"  "<<LOCATE->link<<"\n";
  NEW->link = LOCATE->link;
  LOCATE->link = NEW;
  cout<<"Given3 : "<<LOCATE->info<<"  "<<LOCATE->link<<"\n";
  cout<<"Given4 : "<<NEW->info<<"  "<<NEW->link<<"\n";
 }
 delete NEW;  }
 delete LOCATE;
 
}
};

int main()
{
 LinkList L;
 int elements, ITEM;
 cout<<"Enter the number of elements in the Link List : ";
 cin>>elements;
 cout<<"Enter the data to be saved in each node : ";
 for (int i=0 ;i<elements;i++)
 {
  int INFO;
  cin>>INFO;
  L.ADD(INFO);
 }
 L.TRAVERSE(); 
 
 cout<<"Enter the Data or Number to Search in the LinkedList : ";
 cin>>ITEM;
 
 L.SEARCH(ITEM);
 
 cout<<"Enter the element to insert in the sorted List : ";
 cin>>ITEM;
 
 L.INSERT( ITEM );
 
 L.TRAVERSE(); 
 

 return 0;
 
}
