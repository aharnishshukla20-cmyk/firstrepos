#include<bits/stdc++.h>
using namespace std;

int changearr(int arr[],int size){
    cout<<"enter the target you want to check"<<" ";
    int target;
    cin>>target;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
         
    }
    return -1;  
}

int main(){
    cout<<"enter the size of array";
    int x;
    cin>>x;
    cout<<endl;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int targetcheck=changearr(arr,x);
    cout<<targetcheck;
    return 0;
}

