#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    
    cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);
    cout << sum;
    
    return 0;
}
