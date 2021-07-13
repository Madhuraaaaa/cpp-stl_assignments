#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
using namespace std;
void wordpair(string s)
{
    
    map<string, int>::iterator itr;
    map<string, int> len_str;
    string word = "";
    for (auto i=s.begin();i!=s.end();++i) 
    {
        if (*i == ' ')
        {
            len_str.insert(pair<string, int>(word,word.length()));
            word = "";
        }
        else {
            word = word + *i;
        }
    }
    len_str.insert(pair<string, int>(word,word.length()));
    for (itr = len_str.begin(); itr != len_str.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
}
int main()
{
    string s;
    getline (cin, s);
    wordpair(s);
    return 0;
}