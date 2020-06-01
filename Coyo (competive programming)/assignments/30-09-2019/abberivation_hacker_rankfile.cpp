#include <bits/stdc++.h>

using namespace std;

// Complete the abbreviation function below.
string abbreviation(string s1, string s2) {

    string capital;
    int hash1[26]={0},hash2[26]={0},flag=1;
    for(int i=0;i<s1.length();i++)
    {    char c=s1[i];
        if(65<=c && c<=90){
            hash1[c-'A']+=1;
            capital+=c;
        }
        else
            hash1[c-'a']+=1;
    }
    for(int i=0;i<s2.length();i++)
    {
        hash2[s2[i]-'A']+=1;
    }
    for(int i=0;i<capital.length();i++)
        if(hash2[capital[i]]==0)
            flag=0;
    for(int i=0;i<s2.length();i++)
         if(hash1[s2[i]-'A']==0)
                flag=0;
         
    if(flag==1)
        return "YES";
    else
        return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = abbreviation(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

