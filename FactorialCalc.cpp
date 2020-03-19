//This program shows the implementation of recursion.
//Factorial Calculator.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

auto factorial(auto a)
{
    if (a > 1)
        return (a * factorial (a-1));
    else
        return 1;
}


int main()
{
    long n;
    cout << "Enter Number you want to find the factorial of:";
    cin >> n;
    cout << endl;
    cout << n << "! = " << factorial (n);
}
