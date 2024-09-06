// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,3,4,5,7,2,1};
//     int  n = sizeof(arr)/sizeof(int);


//     //sorting process
//       for(int i=1;i<n;i++){
//         arr[i]+=arr[i-1];
//       }

//  int a=3;

//       //output
//         for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int aa = arr[a]-arr[0];
//     int bb = arr[n]-arr[a-1];
//     if(aa==bb) cout<<"Yes"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }
                          //another optimal solution
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int arr[] = {1,2,3,3,3};
    int n = sizeof(arr)/sizeof(int);
    //prefix sum
     for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
     }
     //array pertition
     int idx =-1;
     bool flag = false;
     for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx = i;
            flag = true;
            break;
        }
     }
     if(flag) cout<<"yes it can be pertition at : "<<idx<<endl;
     else cout<<"it does not pertition"<<endl;
    return 0;
 }