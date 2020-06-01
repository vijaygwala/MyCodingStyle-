#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> grades(n);

for(int i=0;i<n;i++)
{
    cin>>grades[i];
}
for(int i=0;i<n;i++)
{
    int a=grades[i];
    int b=grades[i];
    if(b>=38)
    {
        while(true)
        {
            b=b+1;
            if(b%5==0 && b-a<3)
            {
                grades[i]=b;
                break;

            }
            if(b%5==0 && b-a>=3)
                break;
        }
    }
    
}

 for(int j=0;j<n;j++)
 	cout<<grades[j]<<endl;  




}

