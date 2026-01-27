#include<bits/stdc++.h>
using namespace std;


int sumofnum(int N){
    int sum=0;
    for(int i=1;i<=N;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    cout<<"enter a number"<<endl;
    int x;
    cin>>x;
    int val=sumofnum(x);
    cout<<"the sum till n is: "<<val;
    return 0;  
}