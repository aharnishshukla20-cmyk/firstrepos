// #include<bits/stdc++.h>
// using namespace std;

// void printHello(){
//     cout<<"hello";
//     cout<<" "<<"hi";
//     cout<<endl;
    
// }

// int main(){
//     for(int i=1;i<=10;i++){
//         printHello();
//     }
//     return 0;
// } 

// #include<bits/stdc++.h>
// using namespace std;

// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//    int val= sum(1,2);
//    cout<<"the value returned is:" <<val;
// }



#include<bits/stdc++.h>
using namespace std;

int minOfNum(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<x<<endl<<y;
    int min=minOfNum(x,y);
    cout<<endl<<"the min number among the two is :"<<min;
}