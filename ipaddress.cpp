#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
vector<string> separateOctate(string s, char delim)
{
    int start = 0;
    int end = s.find(delim);
    vector<string> vec;
    while (end != -1) {
        vec.push_back(s.substr(start, end - start));
        start = end + 1;
        end = s.find(delim, start);
    }
    vec.push_back(s.substr(start, end - start));
    return vec;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    char delim = ':';
    vector<string> vec=separateOctate(s, delim);
    for(auto i=vec.begin();i!=vec.end();++i)
    {
        cout<<*i<<"\t";
    }
}