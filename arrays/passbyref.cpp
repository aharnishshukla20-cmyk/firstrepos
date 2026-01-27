#include<bits/stdc++.h>
using namespace std;

void changearray(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=3*arr[i];
    }
    cout<<"the increased array is";
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int x;
    cout<<"enter the size of array";
    cout<<endl;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"the array formed is:";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    changearray(arr,x);
}