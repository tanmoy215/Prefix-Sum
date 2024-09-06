#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,2,1,3,5,6,8};
    int n = sizeof(arr)/sizeof(int);
    int i=0;
    int j = 0;;
    int pre[n];
    while(i<n){
        j+=arr[i];
        pre[i++]=j;
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    return 0;
}