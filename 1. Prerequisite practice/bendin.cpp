#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("bendin.txt","r",stdin);
    freopen("bendout.txt","w",stdout);
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int x3,y3,x4,y4;
    cin>>x3>>y3>>x4>>y4;
    int A1,A2,C;
    A1 = (x2-x1)*(y2-y1);
    A2 = (x4-x3)*(y4-y3);
    int left_inter = max(x1,x3);
    int right_inter = min(x2,x4);
    int bot_inter = max(y1,y3);
    int top_inter = min(y2,y4);
    C = (right_inter-left_inter)*(top_inter-bot_inter);
    //cout<<"A1: "<<A1<<" A2: "<<A2<<" C: "<<C<<endl;
    //condition for intersection
    if(left_inter<right_inter && bot_inter<top_inter){
        cout<<A1+A2-C<<endl;
    }
    else{
        cout<<A1+A2<<endl;
    }
    return 0;   
}