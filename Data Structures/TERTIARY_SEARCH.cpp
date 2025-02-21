#include<iostream>
#include<iomanip>
using namespace std;

int TERTIARY_SEARCH(int tempList[] , int numberOfTerms , int searchKey)
{
 int begin=0 , end=numberOfTerms, middle1,middle2 ;
 cout<<"[The index of the List starts from '0' to '"<<numberOfTerms<<"'.]\n";
 cout<<"\nMiddle_Index-1"<<setw(20)<<"Middle_Values-1"<<setw(18)<<"Middle_Index-2"<<setw(18)<<"Middle_Values-2";
 cout<<"\n-----------------------------------------------------------------------\n";
 while(begin<=end)
 {
  middle1 = ((end - begin)/3)+begin;
  middle2 = ((2*(end-begin))/3)+begin;
  cout<<setw(7)<<middle1<<setw(20)<<tempList[middle1]<<setw(20)<<middle2<<setw(18)<<tempList[middle2]<<endl;
  if(searchKey == tempList[middle1])
     return (middle1+1);
  if (searchKey == tempList[middle2])
      return (middle2+1);
  if (searchKey < tempList[middle1])
     {
      end = middle1-1;
     } 
  else if (searchKey > tempList[middle2])
      {
       begin = middle2+1;
      }
  else
     {
      begin = middle1 +1;
      end = middle2 - 1;
     }
 }
 return -1;
}

int main()
{
 cout<<"\n\tTERTIARY SEARCH\n";
 int terms,search, position,choice;
 do {
 cout<<"\nEnter the number of terms in the List : ";
 cin>>terms;
 int List[terms];
 cout<<"Enter the sorted elements in the List : ";
 for(int elements = 0;elements<terms;elements++)
 {
  cin>>List[elements];
 }
 do{
 cout<<"\nEnter the number to search : ";
 cin>>search;
 
 position = TERTIARY_SEARCH( List , (terms-1), search);
 
 cout<<"-----------------------------------------------------------------------\n";
 if (position != -1)
   cout<<"\t\tThe element is found at position : "<<position<<"\n";
 else
   cout<<"\t\tThe element not found in the list \n";
 cout<<"-----------------------------------------------------------------------\n";
 
 cout<<"\nDo you want to continue search \nEnter (1- Same_List, 2-Another_List and 3-Exit) : ";
 cin>>choice;
 }while (choice == 1);
 }while (choice == 2);
 cout<<"\n\tEND\n\n";
 return 0;
} 
