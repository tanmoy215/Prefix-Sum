#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = {2,1,3,4,5,2,1,4};
    int n = sizeof(arr)/sizeof(int);
    //prefix sum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    //output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int a,b;
    cout<<"enter a to b range : ";
    cin>>a>>b;
     cout<<"Final ans is : "<<arr[b]-arr[a]<<endl;
    return 0;
}