
/*The Program performs 'BINARY SEARCH' on the List of numbers input by the user.
  Functions : 
     MAIN() - Input by the user and the output corresponding to the users choice are executed 
               from this function
     BINARY_SEARCH() - the binary search of the number and returns the position back to the
                      'MAIN()' function */

#include<iostream>
#include<iomanip>
using namespace std;

int BINARY_SEARCH(int tempList[] , int upperLimit, int Key)
{
 /*Variable used in the 'BINARY_SEARCH function : 
   tempList - stores the input List passed from the 'MAIN' function
   upperLimit - number of elements inn the List
   Key - the number to search in the List
   begin - stores the beginning index of the array as per array is divided into two
   end - store the ending index of the array as per the array is divided into two
   middle - the middle index of the array is stored */
   
 int begin=0,end=upperLimit;
 cout<<"[The index of the List starts from '0' to '"<<upperLimit<<"'.]\n";
 cout<<"\nMiddle_Index"<<setw(18)<<"Middle_Values\n";
 cout<<"--------------------------------------------\n";
 
 int middle = ((begin+end)/2);  //calculate the middle index of the array
 
 while (tempList[middle] != Key & begin <= end)
 {
 // Loops through the list untill the Key is found  or the List end 
 
  cout<<setw(6)<<middle<<setw(18)<<tempList[middle]<<endl;
  
  /*if else condition checks whether the key is smaller or larger than the middle elements
    and set the begin and end as per the condition.*/
  
  if( Key < tempList[middle])  
    end = middle - 1;
  else
   begin = middle + 1;
   
  middle = (begin+end)/2; // seting the middle value 
 }

 if(tempList[middle] == Key)
 {
   cout<<setw(6)<<middle<<setw(18)<<tempList[middle]<<endl;
   return (middle+1);
 }
 else
   return -1;
}

int main()
{
 int terms, position, searchKey,choice;
 cout<<"\n\tBINARY SEARCH\n";
 do {
 cout<<"\nEnter the number of terms in the List : ";
 cin>>terms;
 int List[terms];
 cout<<"Enter the sorted elements in the List : ";
 for(int elements = 0 ; elements<terms ; elements++)
 {
  cin>>List[elements];
 }
 do{
 cout<<"\nEnter the number to search : ";
 cin>>searchKey;
 
 position = BINARY_SEARCH(List,(terms-1),searchKey);

 cout<<"--------------------------------------------\n";
 if(position != -1 )
  cout<<"The search element found at "<<position<<" position \n";
 else
  cout<<"The search element not found in the List\n";
 cout<<"--------------------------------------------\n";
 
 cout<<"\nDo you want to continue search \nEnter (1-same List, 2-Another List and 3-Exit) : ";
 cin>>choice;
 }while(choice == 1);
 }while(choice == 2);
 cout<<"\n\tEND\n\n";
 return 0;
 }
