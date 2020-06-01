#include <bits/stdc++.h>

using namespace std;

// Complete the powerSum function below.
int powerSum(int X, int N,int i,int sum) {
    
    if(sum==X)
        return 1;
    if(sum>X || X<pow(i,N))
        return 0;
    return powerSum(X,N,i+1,sum+pow(i,N))+powerSum(X,N,i+1,sum);


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int X;
    cin >> X;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = powerSum(X, N,1,0);

    fout << result << "\n";

    fout.close();

    return 0;
}

