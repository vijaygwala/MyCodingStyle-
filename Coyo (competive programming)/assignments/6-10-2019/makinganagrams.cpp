#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int hash1[26]={0},hash2[26]={0},acount=0,bcount=0;
    for(int i=0;i<a.length();i++)
        hash1[a[i]-'a']+=1;
    for(int i=0;i<b.length();i++)
        hash2[b[i]-'a']+=1;
        for(int i=0;i<26;i++)
        {
            
            if(hash1[i]==0 && hash2[i]!=0)
                    acount=acount+hash2[i];
            else if(hash2[i]==0 && hash1[i]!=0)
                    acount=acount+hash1[i];
            else if(hash1[i]!=0 && hash2[i]!=0){
                if(hash1[i]>hash2[i])
                    acount=acount+hash1[i]-hash2[i];
                else
                    acount=acount+hash2[i]-hash1[i];
                }
    
                
                
                
            
        }
        
    

    return acount;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

