#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("mixin.txt","r",stdin);
    freopen("mixout.txt","w",stdout);
    int n,d;
    cin>>n>>d;
    int a = n/d;
    int b = n%d;
    if(b!=0){
        cout<<a<<" "<<b<<"/"<<d<<endl;
    }
    else
    cout<<a<<endl;
    return 0;
}