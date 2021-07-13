#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <bits/stdc++.h>
using namespace std;

string strayword(vector<string> vec)
{
    int count=1;
    string s="";
    for (auto i = vec.begin()+1; i != vec.end()-1; ++i)
    {
        if(*i!=*(i+1) && *(i-1)!=*i)
        {
            return *i;
        }
    }
    return s;
}

int main()

{
    vector<string> vec{"mango", "mango", "mango", "cashew", "mango"};
    cout << "Stray word is: " << strayword(vec);
    return 0;
}