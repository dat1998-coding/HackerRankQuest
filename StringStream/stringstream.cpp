//#include <cmath>
//#include <cstdio>
#include <vector>
#include <iostream>
//#include <algorithm>
#include<sstream>
#include "string"
using namespace std;

vector<int> trimstring(string s)
{
    vector<int>v;
    //this is one way
    /*while (s.size() != 0)
    {
        int i = 0;
        string temp;
        while (s[i] != ','&&s[i]!=NULL)
        {
            temp = temp + s[i];
            i++;
        }
        s.erase(0, i+1);
        stringstream ss(temp);
        int t;
        ss >> t;
        v.push_back(t);
    }*/
    
	//another way optimize
    stringstream ss(s);
    int temp;
    char c;
    ss >> noskipws;//not skip white space when extracting data
    while (ss>>temp)
    {
        v.push_back(temp);
        ss >> c;
    }
    return v;
}

int main() {

    vector<int>v;
    string s;
    getline(cin, s);
    v=trimstring(s);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<endl;
    }
    return 0;
}
