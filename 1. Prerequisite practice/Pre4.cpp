#include<bits/stdc++.h>
using namespace std;
int village_cricket_group(vector<int>arr, int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        int comb = arr[s] + arr[(n-s-1)];
        int res1 = comb/10;
        int res2 = comb%10;
        cout<<res1<<" "<<res2<<endl;
        s++;
        e--;
    }
   return 0; 
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
    village_cricket_group(arr,n);
    return 0;
}