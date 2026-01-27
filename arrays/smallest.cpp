#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int small=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    cout<<endl<<"the smallest element of the array is: "<<small;
    return 0;
}