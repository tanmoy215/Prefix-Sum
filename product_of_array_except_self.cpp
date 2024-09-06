//leetcode - optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int  n = sizeof(arr)/sizeof(int);
     int pre[n];
     int suf[n];
     int j=1;  
     pre[0] = 1;
     suf[n-1] =1;
     for(int i =1;i<n;i++){
        j*=arr[i-1];           //prefix sum
        pre[i] = j;
     }
     int k = 1;
     for(int j=n-2;j>=0;j--){
        k*=arr[j+1];
        suf[j] = k;
     }
     //main ans 
      for(int i=0;i<n;i++){
        arr[i]=suf[i]*pre[i];
      }
     //check output
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }

    return 0;
}