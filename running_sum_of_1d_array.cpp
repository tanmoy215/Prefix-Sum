#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,1,3,4,5,2,1,4};
    int n = sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}