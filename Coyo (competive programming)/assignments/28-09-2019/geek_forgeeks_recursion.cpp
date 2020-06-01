#include<iostream>
using namespace std;
void printArrayForward(int arr[],int size)
{
   if(size==1)
   cout<<arr[0]<<" ";
   else
   {
      printArrayForward(arr,size-1);
      cout<<arr[size-1]<<" ";
   }
}

int main()
{	int t;
cin>>t;
while(t--){
   int size;
   cin>>size;
   int arr[size];
   
   for(int i=0;i<size;i++)
   {
   cin>>arr[i];
   }   
   printArrayForward(arr,size);
   cout<<endl;
}
return 0;
}
