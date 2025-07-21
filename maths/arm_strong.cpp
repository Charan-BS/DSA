#include<iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool armstrong(int n){
    int sum=0;
    int num=n;
    int power = log10(n)+1;
    while(n>0){
        int lD = n % 10;
        sum += pow(lD,power);
        n = n / 10;
    }
    
    cout<<sum<<endl;
    if (sum==num)
        return true;
    return false;
}

int main(){
    int n = 153;
    bool res = armstrong(n);
    cout<<res;
}