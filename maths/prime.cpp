#include<iostream>
#include<list>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

void checkP(int n){
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
            if(i != n/i){
                cnt++;
            }
        }
    }
    if (cnt==2) 
        cout<<"prime";
    else 
        cout<<"not prime";
}

int main(){
    int n=19;
    checkP(n);
}