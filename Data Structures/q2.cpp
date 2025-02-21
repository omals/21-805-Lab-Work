
/* This program executes the 'Linear Search' of a given List of numbers input by the user
 Function :
    MAIN() - the user input and the function call is accessed from this function
    LINEAR_SEARCH() - It search for the element throughout the List and output the message */

#include<iostream>
using namespace std;

void LINEAR_SEARCH(int List_Data[],int Terms,int search_key)
{
 /* Variables used in the 'LINEAR_SEARCH' function : 
    List_Data[] - The List of values stored in array
    Terms - Number of elements in the List
    search_key - The value to be searched in the List
    index - Loop Variable used to store the index of the List value
    Position  - control variable which defines whether the value is found or
                not ( -1 indicate not found in the List)*/
 
 int index = 0, Position = (-1);
 while (index < Terms & Position == (-1))
 {
 /* 'while' condition holds true untill the List end or search key is found in the List. 
     When the search key is found in the list 'Position' is set to index of the Value in List.*/
     
  if(List_Data[index] == search_key)
  {
   Position = index;
   break;
  }
  index++;
 }
  /*According to the value stored in the 'Position' the message is displayed.
    'index+1' - is used since the index starts with '0' and the position of starts from '1'.*/
  
 if(Position != -1)
     cout<<"\nThe search element is found at "<<index+1<<" position";
 else
     cout<<"\nThe search element not found in the list";
}

int main()
{

/*Variables used :
  Number_of_terms - The number of values in the List used to search
  search_element - stores the value input by the user to search in the List 
  choice -  Loop variable which helps to search for multiple elements in the same List 
             or different List
  List[] - The List of Values stored in the array*/

 cout<<"\n\tLINEAR SEARCH\n\n";
 int Number_of_terms,search_element,choice = 1;
 
 do{
 cout<<"Enter the Number of Elements  : ";
 cin>>Number_of_terms;
 int List[Number_of_terms];
 
 
 cout<<"Enter the elements one by one : ";
 for (int loop_variable = 0;loop_variable < Number_of_terms;loop_variable++)
 {
  cin>>List[loop_variable];
 }
 
 do {
 cout<<"Enter the Number to search    : ";
 cin>>search_element;
 cout<<"------------------------------------------------------";
 
 //call to 'LINEAR_SEARCH()' function
 LINEAR_SEARCH(List,Number_of_terms,search_element);
 
 cout<<"\n------------------------------------------------------";
 cout<<endl;
 cout<<"\nDo you continue search with same list - 1 ,another list - 2 or Exit - 3 \nMake your choice : ";
 cin>>choice;
 cout<<"\n";
 }while(choice == 1 ); //Loop to continue search in the same List
 }while(choice == 2);  //Loop to continue search in another List of number
 
 return 0;
}
