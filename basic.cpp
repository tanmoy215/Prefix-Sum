#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{-1,-8,0,5,-9};
    int n = nums.size();
    sort(nums.begin(),nums.end());
    //sufix sum
    for(int i=n-2;i>=0;i--){
        nums[i]=nums[i+1]+nums[i];
    }

    int idx = -1;
    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            idx= i;
            break;
        }
    }
  int p = 1;
  int ans = 0;
  for(int i=idx;i<n;i++){
     ans+=nums[i]*p;
     p++;
  }
  cout<<"Final ans is : "<<ans<<endl;
    return 0;
}