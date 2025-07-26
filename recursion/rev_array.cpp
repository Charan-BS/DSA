#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
}

//brute force
void rev_arr(int arr[], int n){
    int a[10];
    for(int i=n-1;i>=0;i--){
        a[n-i-1] = arr[i];   
    }
    
    printArray(a,n);
}

//space optimized, using p1 & p2
void rev_a(int a[], int n){
    int p1=0, p2=n-1;
    while(p1<=n/2){
        //swap
        swap(a[p1],a[p2]);
        p1++;p2--;
    }

    printArray(a,n);
}

int main(){
    int n = 4;
    int arr[] = {4,3,2,1};
}