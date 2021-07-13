#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <bits/stdc++.h>
using namespace std;

double average(vector<int> vec, int length_l)
{
    double sum=0;
    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        sum=sum+*i;
    }
    return sum/length_l;
}
int main()
{
    vector<int> vec;
    double data_member, length_l;
    cin >> length_l;
    for (int i = 0; i < length_l; i++)
    {
        cin >> data_member;
        vec.push_back(data_member);
    }
    double avg=average(vec, length_l);
    cout<<"Average speeds: "<<avg;
}