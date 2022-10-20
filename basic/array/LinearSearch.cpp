#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // linear search logic here
    int value;
    cin>>value;
    int index = -1;
    for(int i = 0;i < n; i++) {
            if(arr[i] == value) {
                index = i;
                break;
            }
    }
    if(index == -1){
        cout<<-1;
    }
    else {
        cout<<index;
    }
}