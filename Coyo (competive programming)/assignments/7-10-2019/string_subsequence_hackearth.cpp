class Solution {
public:
    bool isSubsequence(string s, string t) {
       int sIndex = 0;
    int tIndex = 0;
        
    while(sIndex < size(s) && tIndex < size(t))
    {
        if(s[sIndex] == t[tIndex])
        {
            ++sIndex;
            ++tIndex;
        }
        else if(s[sIndex] != t[tIndex])
        {
            ++tIndex;
        }
    }
        
    return sIndex == size(s);
    }
};
