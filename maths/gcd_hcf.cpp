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


int gcd(int n1, int n2){
    int gcd=1, small;
    small = (n1<n2)? n1 : n2;

    for(int i=1;i<=small;i++){
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    return gcd;
}

int main(){
    int n1,n2=0;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    int res = gcd(n1,n2);
    cout<<"GCD: "<<res;
}