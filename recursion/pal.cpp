#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int palind(string str){
    int size = str.length();
    for(int i=0;i<str.length()/2;i++){
        if(str[i]!=str[size-i-1])
            return 0;
    }
    return 1;
}

//my mind
void pal(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    if(str == rev)
        cout<<"Palindrome";
    else
        cout<<"Nope";
}

int main(){
    string str = "A man, a plan, a canal: Panama";
    int res = palind(str);
    if(res==0)
        cout<<"Nope";
    else
        cout<<"Yes";
}