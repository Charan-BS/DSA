#include<iostream>
using namespace std;

// 0 1 1 2 3

int fib(int n){
     if (n<=1)
        return n;
    int last = fib(n-1);
    int sLast = fib(n-2);
    return last + sLast;
}

int main(){
    int n = 4;
    cout<<fib(n);
}