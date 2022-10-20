#include<iostream>
using namespace std;
int getSum(int n) {
    if(n == 0)
    return n;
    return n + getSum(n-1);
}
int main() {
int n;
cin >> n;
int sum = getSum(n);
cout<<sum;
    return 0;
}