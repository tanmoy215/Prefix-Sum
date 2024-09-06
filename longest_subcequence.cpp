#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> nums{4,5,2,1};
     vector<int> queries{3,10,21};
     int n = nums.size();
     int m = queries.size();
      //sort using sorting algorithm 
       sort(nums.begin(),nums.end());
        //prefix sum 
         for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
         }
         //input final ans
         vector<int> ans(m);
         //queries check 
         for(int i=0;i<m;i++){
            int lo = 0;
            int hi = n-1;
            int len = 0;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]>queries[i]) hi = mid-1;
                else{
                    lo = mid+1;
                     len = mid+1;
                }
            }
            ans[i]=len;
         }
         //check the final output
         for(int i=0;i<m;i++){
            cout<<ans[i]<<" ";
         }
    return 0;
}