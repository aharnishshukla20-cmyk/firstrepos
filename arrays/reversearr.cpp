#include<bits/stdc++.h>
using namespace std;

void revarr(int arr[], int size){
    int i = 0;
    int j = size - 1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main(){
    cout<<"enter the size of array you want"<<endl;
    int x;
    cin>>x;

    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }

    cout<<"the original array is:"<<endl;
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"the reversed array is:"<<endl;
    revarr(arr, x);
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
