#include <bits/stdc++.h>
using namespace std;

int armstrongSum(int n) {
    int digits = 0;
    int temp = n;

    // count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    // calculate power sum
    while (temp != 0) {
        int last = temp % 10;
        sum += pow(last, digits);
        temp /= 10;
    }

    return sum;
}

int main() {
    int x;
    cin >> x;

    if (armstrongSum(x) == x)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
