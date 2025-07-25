#include<iostream>
using namespace std;

void nSumFormula(int n){
    int res = n*(n+1)/2;
    cout<<res<<endl;
}

void nSum(int i,int sum){
    if (i==0){
        cout<<sum<<endl;
        return;
    }
    nSum(i-1, sum+i);
}

int rSum(int n){
    if(n==0)
        return 0;
    return n + rSum(n-1);
}

int main(){
    int n=5,sum=0;
    // nSum(n,sum);
    cout<<rSum(n)<<endl;
}