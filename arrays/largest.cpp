#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter the size of array you want"<<endl;
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<endl<<"the max element of array is:"<<max;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int reverse(int x) {
    int rev = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;
        rev = rev * 10 + digit;
    }
    return rev;
}
int main() {
    int x;
    cin >> x;
    cout << reverse(x);
    return 0;
}


