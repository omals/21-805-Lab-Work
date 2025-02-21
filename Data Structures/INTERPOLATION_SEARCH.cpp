#include<iostream>
#include<iomanip>
using namespace std;

int INTERPOLATION_SEARCH(int tempList[] , int tempTerms, int search)
{
 cout<<"[The index of the List starts from '0' to '"<<tempTerms-1<<"' .]\n";
 int end = tempTerms-1 , begin = 0;
 
 cout<<"\nBEGIN"<<setw(11)<<"END"<<setw(13)<<"INDEX"<<setw(14)<<"VALUE \n";
 cout<<"-------------------------------------------\n";

 while(begin <= end & search >= tempList[begin] & search <= tempList[end])
 {
  float valuenum = search - tempList[begin];
  float valueden = tempList[end]-tempList[begin];
  float value1 = end-begin;
  float value2 = ((valuenum)/(valueden)) * value1;
  int position = begin+value2;

  cout<<setw(4)<<begin<<setw(12)<<end<<setw(12)<<position<<setw(12)<<tempList[position]<<endl;
  
  if (search == tempList[position])
  {
   return position+1;
  }
  else if (search > tempList[position])
  {
   begin = position+1;
  }
  else
  { 
   end = position - 1;
  }
 }
 return -1;
}

int main()
{
 cout<<"\n\tINTERPOLATION SEARCH\n";
 int terms,searchKey,position,choice;
 do{
 cout<<"\nEnter the number of terms in the List : ";
 cin>>terms;
 int List[terms];
 cout<<"Enter the sorted elements in the List : ";
 for(int elements=0; elements < terms; elements++)
 {
  cin>>List[elements];
 }
 do{
 cout<<"\nEnter the element to search : ";
 cin>>searchKey;
 
 position = INTERPOLATION_SEARCH(List, terms, searchKey);
 
 cout<<"-------------------------------------------\n";
 if(position != -1)
  cout<<"The search number found at position "<<position<<endl;
 else
  cout<<"The search number not found in the List \n";
 cout<<"-------------------------------------------\n";
 
 cout<<"\nDo you want to continue Enter \n(1 - Same_List , 2 - Another_List and 3 - Exit) : ";
 cin>>choice;
 }while(choice == 1);
 }while(choice == 2);
 cout<<"\n\tEND\n";
 return 0;
}
