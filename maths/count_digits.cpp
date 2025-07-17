#include<iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

//optimal approach
int cntDigitOA(int n){
    int cnt = log10(n)+1;
    return cnt;
}

//brute force approach
int cntDigitBF(int n){
    int cnt=0;
    while(n>0){
        n = n / 10;
        cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    // int cnt = cntDigitBF(n);
    int cnt = cntDigitOA(n);
    cout<<endl<<cnt<<" digits are there";
}