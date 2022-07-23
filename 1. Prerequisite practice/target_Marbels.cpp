#include<bits/stdc++.h>
using namespace std;
void targetMarbels(vector<int>arr, int n, int target){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        int sum = target-arr[i];
        if(s.find(sum)!=s.end()){
            cout<<sum<<" "<<arr[i];
            return;
        }
        s.insert(arr[i]);
    }
    if(s.size()==n-1){
        cout<<"false"<<endl;
    }
}
int main(){
    int n, target;
    cin>>n>>target;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    targetMarbels(arr,n,target);
    return 0;
}