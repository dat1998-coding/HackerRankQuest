#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this 
    vector<int>v;
    while(str.size()!=0)
    {
        string temp;
        int i=0;
        while(str[i]!='\0' && str[i]!=',')
        {
            temp=temp+str[i];
            i++;
        }
        str.erase(0,i+1);
        stringstream ss(temp);
        int t;
        ss>>t;
        v.push_back(t);
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
