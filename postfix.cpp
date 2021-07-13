#include <string>
#include <list>
#include <iterator>
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
float getNum(char ch)
{
    int value;
    value = ch;
    return float(value - '0');
}
int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        return 1; //character is an operator
    return -1;    //not an operator
}
int Operand(char ch)
{
    if (ch >= '0' && ch <= '9')
        return 1; //character is an operand
    return -1;    //not an operand
}
float operation(int a, int b, char op)
{
    //Perform operation
    if (op == '+')
        return b + a;
    else if (op == '-')
        return b - a;
    else if (op == '*')
        return b * a;
    else if (op == '/')
        return b / a;
    else if (op == '^')
        return pow(b, a); //find b^a
    else
        return INT_MIN; //return negative infinity
}
float postfix(string post)
{
    int a, b;
    stack<float> s;
    string::iterator it;
    for (it = post.begin(); it != post.end(); it++)
    {
        //read elements and perform postfix evaluation
        if (isOperator(*it) != -1)
        {
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(operation(a, b, *it));
        }
        else if (Operand(*it) > 0)
        {
            s.push(getNum(*it));
        }
    }
    return s.top();
}
int main()
{
    string post;
    cout << "Enter the expression: ";
    cin >> post;
    cout << "Output: " << postfix(post);
}