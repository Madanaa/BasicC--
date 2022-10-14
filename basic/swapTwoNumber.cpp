#include<iostream>
using namespace std;
int main() {
    cout<<"Swap two number with thrid variable:\n";
    cout<<"-------------------------------------\n";
    int a = 6, b = 8, temp;
    cout<<"Before swapping the first number is = " <<a<< "\n";
    cout<<"Before swapping the second number is = " <<b<< "\n";

    temp = b;
    b = a;
    a = temp;
    cout<<"After Swapping 1st number is "<<a<<endl;
    cout<<"After swapping 2nd number is "<<b<<endl;
    return 0;
}