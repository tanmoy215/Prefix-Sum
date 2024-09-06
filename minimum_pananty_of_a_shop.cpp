#include<bits/stdc++.h>
using namespace std;
//Y--sufix
//N--prefix
int main(){
    string str = "YNYY";
    int n = str.size();
    int m = n+1;
    vector<int> pre(m),suf(m);
    //prefix sum 
    pre[0] = 0;
    for(int i=0;i<n;i++){
       int count =0;
       if(str[i]=='N') count++;
       pre[i+1] = pre[i] + count;
    }
    //sufix sum
    suf[m-1] = 0;
    for(int i=n-1;i>=0;i--){
        suf[i] = suf[i+1]+((str[i]=='Y') ? 1 : 0); //tarnary operator
    }
    //addition operation
    int minpen = n;
    for(int i=0;i<m;i++){
        pre[i]+=suf[i];
        int pen = pre[i];
        minpen = min(pen,minpen);
    }
    int idx = -1;
    for(int i=0;i<m;i++){
        if(pre[i] == minpen) {
            idx = i;
            break;
        }
    }
    cout<<"Minimum Panalty : "<<idx<<endl;
    return 0;
}