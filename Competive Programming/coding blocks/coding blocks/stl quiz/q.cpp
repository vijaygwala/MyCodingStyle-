#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = { 1,2,5,7,10,12 };
    cout<< lower_bound( arr, arr+5, 15)<<endl;
    cout<< lower_bound( arr, arr+5, 15 ) - arr <<endl;
    return 0;
}
