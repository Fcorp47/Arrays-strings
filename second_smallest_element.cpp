#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

int second_smallest(int arr[], int size)
{
    int first_sml, second_sml;

    // if(arr[0] < arr[1]){
    //     first_sml = arr[0];
    //     second_sml =  arr[1];
    // }
    // else{
    //     first_sml = arr[1];
    //     second_sml = arr[0];
    // }
    first_sml = second_sml = INT_MAX;
    cout << first_sml;
    for(int i=0; i < size; i++){
        if(arr[i] < first_sml){
            second_sml = first_sml;
            first_sml = arr[i];
        }
        else if(arr[i] < second_sml){
            second_sml = arr[i];
        }
    }
    return second_sml;
}

int main(){
    int arr[] = {23,5,7,444,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "second smallest element: " << second_smallest(arr,n);
    return 0;
}