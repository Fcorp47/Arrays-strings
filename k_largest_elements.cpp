#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {25,46,744,6,35,73};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout << "enter k(range): ";
    cin >> k;
    sort(arr, arr+n, greater<int>());

    if(k > n){
        cout << "not within range!";
        return 0;
    }
        
    for(int i=0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}