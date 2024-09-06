#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{-7,-1,0,-7,5};
    int n = arr.size();
    //sort the array
    sort(arr.begin(),arr.end());
     int suf[n];
     //find sufix sum
     suf[n-1] = arr[n-1];
     for(int i = n-2;i>=0;i--){
        suf[i]=suf[i+1]+arr[i];
     }
       //find the positive integer
       int idx  =-1;
       for(int i=0;i<n;i++){
        if(suf[i]>=0){
            idx =i;
            break;
        }
       }
       bool flag = true;
       if(idx==-1) flag = false;
    int p=1;
    int max = 0;
    for(int i=idx;i<n;i++){
        max+=arr[i]*p;
        p++;
    }
    if(flag) cout<<"Final ans is : "<<max<<endl;
    else cout<<"Final ans is"<<0<<endl;
    return 0;
}