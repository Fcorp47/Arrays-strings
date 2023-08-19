#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){
    int first, second;
    first = second = INT_MIN;
   
    int arr[] = {23,12,5,22,63,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);

    for(int i : arr){
        cout << i << endl;
    }

    cout << arr[n-1] << "is the largest";
    return 0;
}