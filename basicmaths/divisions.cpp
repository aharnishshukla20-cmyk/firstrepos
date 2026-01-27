#include<bits/stdc++.h>
using namespace std;

int alldiv(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    cout<<"enter the number";
    cout<<endl;
    int x;
    cin>>x;
    alldiv(x);
    return 0;
}