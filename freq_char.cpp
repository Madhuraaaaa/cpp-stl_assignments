#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
map<char, int> frequency(string s)
{
    vector<int> freq_alpha(26, 0);
    map<char, int> freq;
    for (auto i = s.begin(); i != s.end(); ++i)
    {   
        int k = 0, j;
        if (*i >= 'a' && *i <= 'z')
        {
            j = *i - 'a';
            ++freq_alpha[j];
        }
    }
    for (auto i = freq_alpha.begin(); i != freq_alpha.end(); ++i)
    {
        if (*i>0)
        {
            freq.insert(pair<char, int>(char(i-freq_alpha.begin()+'a'),freq_alpha[i-freq_alpha.begin()]));
        }
    }
    return freq;
}

int main()
{
    string s;
    cin >> s;
    map<char, int>::iterator itr;
    map<char, int> freq = frequency(s);
    for (itr = freq.begin(); itr != freq.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    return 0;
}