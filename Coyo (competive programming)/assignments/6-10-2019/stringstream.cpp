#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream s(str);  
    int word; 
    vector<int> v;
    char ch;
    while(s>>word){
        v.push_back(word);
        s>>ch;
    }
    return v;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


