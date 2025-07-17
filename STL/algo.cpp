#include<iostream>
#include <algorithm>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //same
    if(p1.first>p2.first) return true;
    return false;
}

int main(){
    // pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    // sort(a,a+3,comp);
    // for(auto it:a){
    //     cout<<"{"<<it.first<<","<<it.second<<"}";
    // }
    // int num = 10;
    // int cnt = __builtin_popcount(num);

    // long long lnum = 38578397483;
    // int lcnt = __builtin_popcountll(lnum);
    // cout<<lcnt;

    // string s = "123";
    // sort(s.begin(),s.end());
    // do{
    //     cout<<s<<endl;
    // }while(next_permutation(s.begin(),s.end()));

    int a[] = {1,33,4};
    int mx = *min_element(a,a+3);
    cout<<mx;
}