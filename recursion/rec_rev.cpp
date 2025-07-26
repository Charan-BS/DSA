#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

//recursive my way
int rec_rev(int a[],int n,int p1, int p2){
     if(p1>=n/2){
        printArray(a,n);
        return 1;
     }
     swap(a[p1],a[p2]);
     return rec_rev(a,n,++p1,--p2);
}

//recursive way
void reverseArray(int a[], int start, int end){
    if(start<end){
        swap(a[start],a[end]);
        reverseArray(a,start+1,end-1);
    }
}

//library func
void reverseUsingLib(int arr[], int n) {
   reverse(arr, arr + n);
}

int main(){
    int n=4;
    int arr[] = {1,2,3,4};
    // reverseArray(arr,0,n-1);
    reverseUsingLib(arr,n);
    printArray(arr,n);
}
