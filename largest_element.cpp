#include<iostream>
#include<algorithm>
using namespace std;

int largestelement(int arr[], int n){
    return *max_element(arr, arr+n);
}

int main(){
    //2 ways to do it 
    int arr[] = {3,23,5,44,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "largest element: "<< arr[n-1] << endl;
    cout << "or" << endl;
    cout << "largest element: "<< largestelement(arr,n);
    return 0;
}