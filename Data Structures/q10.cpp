#include<iostream>
using namespace std;

/*tempList - List of numbers to store in the 'MERGEPASS' function
  upperLimit - Number of elements in the List
  NumSubList - Number of elements in the Sud List*/


void MERGE( int T_Array_A[] , int T_range , int  LB_A , int T_Array_B[] , int T_BalanceElement , int LB_B , int T_Array_C[] , int LB_C)
{
 cout<<"\n\tMERGE\n";
 int Number_A = LB_A , Number_B = LB_B , Pointer = LB_C ;
 int UB_A = LB_A + (T_range - 1) ;
 int UB_B = LB_B + (T_BalanceElement - 1);
 while (Number_A <= UB_A & Number_B <= UB_B)
 {
  if( T_Array_A[Number_A] < T_Array_B[Number_B])
  {
   T_Array_C[Pointer] = T_Array_A[Number_A];
   Number_A = Number_A+1;
   Pointer = Pointer+1;
  }
  else
  {
   T_Array_C[Pointer] = T_Array_B[Number_B];
   Number_B = Number_B + 1;
   Pointer = Pointer+1;
  }
 }
 if (Number_A > UB_A)
 {
  for(int loop=0; loop<(UB_B - Number_B) ; loop++)
  {
   T_Array_C[Pointer + loop] = T_Array_B[Number_B + loop];
  }
 }
 else
 {
 for(int loop = 0 ; loop < (T_range - Number_A) ; loop++)
 {
  T_Array_C[Pointer + loop] = T_Array_A[Number_A + loop];
 }
 }
 cout<<"\n\tMERGE\n";
}

void MERGE_PASS( int tempArray[] , int upperLimit , int upperLimitSubArray , int tempAuxillaryArray[])
{ 
 cout<<"\n\tMERGE_PASS\n";
 int factor = int(upperLimit/(2*upperLimitSubArray));
 int BalanceElement = 2*upperLimitSubArray*factor;
 int Range = upperLimit - BalanceElement;
 
 for(int loop=0; loop<factor; loop++)
 {
  int LowerBound = 1+(2*loop - 2)*upperLimitSubArray;
  
  MERGE(tempArray , upperLimitSubArray , LowerBound  , tempArray , upperLimitSubArray , (LowerBound +  upperLimitSubArray) , tempAuxillaryArray , LowerBound);
  
  }
  
  if (Range <= upperLimitSubArray)
  {
   for (int loop=0; loop<Range; loop++)
   {
    tempAuxillaryArray[BalanceElement + loop ] = tempArray[BalanceElement + loop];
   }
  }
  else
  { 
   MERGE(tempArray , upperLimitSubArray , (BalanceElement + 1)  , tempArray , (Range-upperLimitSubArray) , (upperLimitSubArray + BalanceElement + 1) , tempAuxillaryArray , (BalanceElement + 1));
  }
  cout<<"\n\tEND MERGE_PASS\n";
  for(int index = 0 ; index<upperLimit ; index++)
 {
  cout<<tempAuxillaryArray[index]<<" ";
 }
 cout<<endl;
 }
 


void MERGE_SORT( int Array[] , int NumberOfElement ,int AuxillaryArray[])
{
 cout<<"\n\tMERGE_SORT\n";
 //int AuxillaryArray[NumberOfElement];
 int SubArrayNumberOfElement = 1;
 while (SubArrayNumberOfElement < NumberOfElement )
 {
  MERGE_PASS( Array , NumberOfElement , SubArrayNumberOfElement , AuxillaryArray);
  MERGE_PASS(AuxillaryArray , NumberOfElement , (2*SubArrayNumberOfElement),Array);
  SubArrayNumberOfElement = 4*SubArrayNumberOfElement;
 }
 cout<<"\n\tEND MERGE_SORT\n";
}

int main()
{
 cout<<"\n\tMERGE_SORT\n";
 int terms,choice , index;
 cout<<"Enter the number of elements in the List : ";
 cin>>terms;
 int List[terms];
 cout<<"Enter the elements one by one in the List : ";
 for(index = 0 ; index < terms ; index++ )
 {
  cin>>List[index];
 }
 cout<<"The List of elements : ";
 for( index = 0 ; index<terms ; index++)
 {
  cout<<List[index]<<" ";
 }
 cout<<endl;
 int AuxillaryA[terms];
 MERGE_SORT( List , terms , AuxillaryA);
 cout<<"\n\tBack to Main\n";
 for( index = 0 ; index<terms ; index++)
 {
  cout<<AuxillaryA[index]<<" ";
 }
 cout<<endl;
 
 return 0;
}
