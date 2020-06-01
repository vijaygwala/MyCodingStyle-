#include <bits/stdc++.h>
using namespace std;
int a[100][100]={0},n;
bool safe(int i,int j)
{
    for(int q=i;q>=0;q--)
    {
        if(a[q][j]==1)
        return false;
    }
    int q=j;
    for(int p=i;p>=0 && q<n;p--,q++){
        if(a[p][q]==1)
        return false;
    }
    q=j;
    for(int p=i;p>=0 && q>=0;p--,q--){
        if(a[p][q]==1)
        return false;
    }
    return true;


}
bool fun(int i)
{
    if(i==n)
        return true;
    for(int j=0;j<n;j++)
    {
        if(safe(i,j))
        {
            a[i][j]=1;
            if(fun(i+1))
               return true;
            a[i][j]=0;
        }

    }
    return false;

}

int main() {
    cin>>n;
	if(fun(0))
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
                cout<<a[j][k]<<"\t";
            cout<<endl;
        }
    }

	return 0;
}

