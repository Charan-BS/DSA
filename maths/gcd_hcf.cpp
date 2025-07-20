#include<iostream>
#include<list>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

/*
notes
n1=9 n2=12 gcd=1 small

if(n1>n2) small=n2 : small=n1
    for i=1 to i<=small
    if(n1%i==0 && n2%i==0)
    gcd= i;
*/

// optimal
int gcd(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }
    if (n1 == 0)
    {
        return n2;
    }
    return n1;
}

// better
int gcdBetter(int n1, int n2)
{
    for (int i = min(n1, n2); i > 0; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
    return 1;
}

// brute force
int gcdBF(int n1, int n2)
{
    int gcd = 1;
    int it = 0;

    for (int i = 1; i <= min(n1, n2); i++)
    {
        it++;
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    cout << "iteration:" << it << endl;
    return gcd;
}

int main(){
    int n1,n2=0;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    int res = gcd(n1, n2);
    cout<<"GCD: "<<res;
}