#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int smallerMean(vector<int> vec,int length_l)
{
    int sum=0, mean, count=0;
    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        sum=sum+*i;
    }
    mean=sum/length_l;
    cout<< "The mean value: "<<mean;
    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        if (*i<mean)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> vec;
    double data_member, length_l;
    cout<<"Enter the no. of elements: ";
    cin >> length_l;
    for (int i = 0; i < length_l; i++)
    {
        cin >> data_member;
        vec.push_back(data_member);
    }
    int count=smallerMean(vec, length_l);
    cout<< "Count of numbers with the value smaller than mean: "<<count;
    return 0;
}