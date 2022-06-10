#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("countin.txt","r",stdin);
    freopen("countout.txt","w",stdout);
    int n;
    cin>>n;
    if(n>=1 && n<=10000){
        for(int i=1;i<=n;i++){
        cout<<i<<endl;
        }
    }
    return 0;
}