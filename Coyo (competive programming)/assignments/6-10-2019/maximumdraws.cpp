#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the maximumDraws function below.
 */
int maximumDraws(int n) {
   int socks=n*2,r;
   if(n==1)
        return 2;
else if(socks>2)
    {
         r=socks/2;
    }
 return r+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = maximumDraws(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

