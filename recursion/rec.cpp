#include<iostream>
using namespace std;

//1-N front tracking
void fTrack(int i, int n){
    if (i>n) return;
    cout<<i<<endl;
    fTrack(i+1, n);
}

//1-N back tracking
void bTrack(int i, int n){
    if (i<1) return;
    bTrack(i-1, n);
    cout<<i<<endl;
}

//N-1 front tracking 
void fTracking(int i, int n){
    if(i<1) return;
    cout<<i<<endl;
    fTracking(i-1,n);
}

void bTracking(int i, int n){
    if(i>n) return;
    bTracking(i+1,n);
    cout<<i<<endl;
}

//N-1 back tracking

int main(){
    int n=5;
    // fTrack(1,n);
    // bTrack(n,n);
    // fTracking(n,n);
    bTracking(1,n);
}