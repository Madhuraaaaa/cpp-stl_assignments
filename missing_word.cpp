#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
string missingword(vector<string> org_vec, vector<string> vec)
{
    vector<string>::iterator it;
    string s = "a";
    for (auto i = org_vec.begin(); i != org_vec.end(); ++i)
    {
        it = std::find(vec.begin(), vec.end(), *i);

        if (it != vec.end())
        {
        }
        else
            return *i;
    }
    return s;
}
int main()
{
    vector<string> org_vec, vec;
    org_vec = {"My", "Name", "is", "Madhura", "Khedekar"};
    vec = {"My", "Name","is", "Madhura"};
    cout << "Missing word is: " << missingword(org_vec, vec);
    return 0;
}
