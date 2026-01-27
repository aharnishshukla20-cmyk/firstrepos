#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int main(){
    cout<<"enter a number whose factorial is to be found" <<endl;
    int x;
    cin>>x;
    int val=fact(x);
    cout<<"the factorial of the number " <<x <<" is : " <<val;
    cout<<endl;
    cout<<fact(6);
    return 0;
}