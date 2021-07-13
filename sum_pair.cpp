#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> sum(vector<int> vec, int total)
{
    int id1, id2;
    for (auto i = vec.begin(); i != vec.end() - 1; ++i)
    {
        for (auto j = i + 1; j != vec.end(); ++j)
        {
            if ((*i + *j) == total)
            {
                id1 = i-vec.begin();
                id2 = j-vec.begin();
                pair<int, int> p = make_pair(id1, id2);
                return p;
            }
        }
    }
    pair<int, int> p = make_pair(-1, -1);
    return p;
}
int main()
{
    vector<int> vec;
    pair<int, int> pair_sum;
    int data_member, length_l, total;
    cin >> length_l;
    cout << "Enter the target sum: ";
    cin >> total;
    for (int i = 0; i < length_l; i++)
    {
        cin >> data_member;
        vec.push_back(data_member);
    }
    pair_sum = sum(vec, total);
    cout << "pair of indices: " << pair_sum.first << ", " << pair_sum.second;
    return 0;
}