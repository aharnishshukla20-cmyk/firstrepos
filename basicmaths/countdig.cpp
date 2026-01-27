#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int c=0;
    while(n!=0){
        int last=n%10;
        n=n/10;
        c=c+1;
    }
    return c;
}

int main(){
    cout<<"enter a number";
    cout<<endl;
    int x;
    cin>>x;
    int numofdig=count(x);
    cout<<"the number of digits in the number are:"<<" "<<numofdig;
}