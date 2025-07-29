#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void pal(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    if(str == rev)
        cout<<"Palindrome";
    else
        cout<<"Nope";
}

int main(){
    string str = "racecar";
    pal(str);
}