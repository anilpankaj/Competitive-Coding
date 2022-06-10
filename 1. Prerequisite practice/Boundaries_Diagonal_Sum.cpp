#include<bits/stdc++.h>
using namespace std;
int Boud_Dig_Sum(int** arr, int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0) || (j==0) || (i==n-1) || (j==n-1)){
                s.insert(arr[i][j]);
            }
            if(i==j){
                if(s.find(arr[i][j])==s.end()){
                    s.insert(arr[i][j]);
                }
            }
        }
    }
    int r=n-1;
    for(int l=0;l<n;l++){
        if(s.find(arr[l][r])==s.end()){
            s.insert(arr[l][r]);
            r--;
        }
    }
    int sum = 0;
    for(auto x: s){
        sum += x;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        //create 2d array on heap
        int** arr = new int*[n];
        for(int i=0;i<n;i++){
            arr[i] = new int[n];
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        cout<<Boud_Dig_Sum(arr,n)<<endl;
    }
    return 0;
}