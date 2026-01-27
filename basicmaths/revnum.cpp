#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int revnum=0;
    while(n!=0){
        int last=n%10;
        n=n/10;
        revnum=(revnum*10)+last;
    }
    return revnum; 
} 
int main(){
    cout<<"enter a number";
    cout<<endl;
    int x;
    cin>>x;
    int rev=count(x);
    cout<<rev; 
} 