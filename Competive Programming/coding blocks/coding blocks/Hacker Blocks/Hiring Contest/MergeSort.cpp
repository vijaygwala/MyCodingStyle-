#include<bits/stdc++.h>
using namespace std;  
void mergeSort(int[],int,int);  
void merge(int[],int,int,int);  
int main ()  
{  	int n;
	cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
     
    mergeSort(a,0,n-1);  
    
    for(int i=0;i<n;i++)  
    {  
        cout<<a[i]<<endl;
    }  
      
}  
void mergeSort(int a[], int beg, int end)  
{  
    int mid;  
    if(beg<end)  
    {  
        mid = (beg+end)/2;  
        mergeSort(a,beg,mid);  
        mergeSort(a,mid+1,end);  
        merge(a,beg,mid,end);  
    }  
}  
void merge(int a[], int beg, int mid, int end)  
{  
    int i=beg,j=mid+1,k,index = beg;  
    int temp[10];  
    while(i<=mid && j<=end)  
    {  
        if(a[i]<a[j])  
        {  
            temp[index] = a[i];  
            i = i+1;  
        }  
        else   
        {  
            temp[index] = a[j];  
            j = j+1;   
        }  
        index++;  
    }  
    if(i>mid)  
    {  
        while(j<=end)  
        {  
            temp[index] = a[j];  
            index++;  
            j++;  
        }  
    }  
    else   
    {  
        while(i<=mid)  
        {  
            temp[index] = a[i];  
            index++;  
            i++;  
        }  
    }  
    k = beg;  
    while(k<index)  
    {  
        a[k]=temp[k];  
        k++;  
    }  
}  
