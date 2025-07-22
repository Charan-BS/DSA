#include<iostream>
#include<list>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

vector<int> Odivisors(int n){
    vector<int> vc;
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i==0){
            vc.push_back(i);
        }
        if(i != n/i){
            vc.push_back(n/i);
        }
    }
    return vc;
}

int divisors(int n){
    list <int> ls;
    for (int i=1;i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
        }
    }

    for(int i : ls){
        cout<<i<<endl;
    }
}

int  main(){
    int n=36;
    vector<int> divisors = Odivisors(n);
    sort(divisors.begin(), divisors.end());
    for(int i : divisors){
        cout<<i<<" ";
    }
} 
