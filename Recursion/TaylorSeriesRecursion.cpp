//
//  TaylorSeriesRecursion.cpp
//  Essential Concepts
//  Created by Daniel Villacis on 2022-07-11.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Taylor series using recursion
double taylorSeries(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = taylorSeries(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

// Taylor series using horner's rule
double taylorSeriesHornerRule(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return taylorSeriesHornerRule(x, n - 1);
}

// Taylor series using iterative method
double taylorSeriesIterative(int x, int n)
{
    double s = 1;
    double numerator = 1;
    double denominator = 1;

    for (int i = 1; i <= n; i++)
    {
        numerator *= x;
        denominator *= i;
        s += numerator / denominator;
    }
    return s;
}

int main()
{
    cout << taylorSeries(1, 10);
    cout << taylorSeriesHornerRule(1, 10);
    cout << taylorSeriesIterative(1, 10);
    return 0;
}
