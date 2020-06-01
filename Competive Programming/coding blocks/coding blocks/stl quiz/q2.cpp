#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  v[]={20, 40, 30, 10 , 50, 30};
    sort(v, v+6);
    cout<<(upper_bound(v, v+6, 30)-v);
    return 0;
}
