//Reverse the element of array;

#include <iostream>

using namespace std;

int main()
{
   int arr[]={10,20,30,40,50,60};
   
   int len=sizeof(arr)/sizeof(arr[0]);
   
   for(int i=len-1;i>=0;i--)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}
