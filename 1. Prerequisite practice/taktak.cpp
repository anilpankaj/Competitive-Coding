#include<bits/stdc++.h>
using namespace std;
bool CanDistributeEqually(int fruits){
    if((fruits%11)==1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    freopen("taktakin.txt","r",stdin);
    freopen("taktakout.txt","w",stdout);
    int n;
    cin>>n;
    int fullMoons=0;
    while(!CanDistributeEqually(n)){
        n = 2*n;
        fullMoons++;
    }
    cout<<fullMoons<<" "<<n<<endl;
    return 0;
}