#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

if (s.length ()<=2) return "YES";

    map<char, long> char_freq;
    map<long, long> freq_freq;

    for (int i = 0; i < s.length(); i++){
        if (char_freq[s[i]]!=0) {
            freq_freq[char_freq[s[i]]]--;
            if (freq_freq[char_freq[s[i]]]==0){
                freq_freq.erase(char_freq[s[i]]);
            }
        }
        char_freq[s[i]]++; 
        freq_freq[char_freq[s[i]]]++;
    }

    if (freq_freq.size()>2) {
        return "NO";
    }
    if (freq_freq.size()==1) {
        return "YES";
    }  

    long min_freq = std::numeric_limits<long>::max();
    long max_freq = 0;
    for (const auto & any : freq_freq) {
        if (any.first < min_freq) {
            min_freq = any.first;
        }
        if (any.first > max_freq) {
            max_freq = any.first;
        }
    }

    if (min_freq == 1 && freq_freq[1]==1) {
        return "YES";
    }

    if ((max_freq == min_freq + 1) && (freq_freq[max_freq]==1)){
        return "YES";
    }

    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

