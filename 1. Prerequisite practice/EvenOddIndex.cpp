#include<bits/stdc++.h>
using namespace std;
vector<int>EvenOdd(vector<int>arr, int n){
    int temp1 = 0;
    int temp2 = 0;
    vector<int>result;
    for(int i=0;i<n;i++){
        if(i%2==0 && arr[i]%2==0){
            temp1 += arr[i];
        }
        if(i%2==1 && arr[i]%2==1){
            temp2 += arr[i];
        }
    }
    result.push_back(temp1);
    result.push_back(temp2);
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>ans = EvenOdd(arr,n);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}