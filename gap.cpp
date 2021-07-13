#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int largerMean(vector<int> vec,int length_l)
{
    int sum=0, mean, count=0;
    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        sum=sum+*i;
    }
    mean=sum/length_l;
    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        if (*i>mean)
        {
            count++;
        }
    }
    return count;
}
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
    int count_s=smallerMean(vec, length_l);
    int count_l=largerMean(vec, length_l);
    cout<< "Gap of count: "<<abs(count_s-count_l);
    return 0;
}