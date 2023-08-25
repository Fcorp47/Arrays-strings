#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

void largest_three(int arr[], int size){
    int first,second,third;
    first = second = third = INT_MIN;
    
    for(int i=0; i < size; i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];            
        }
        else if(arr[i] > second)
        {
            second = arr[i];
            third = second;
        }
        else if(arr[i] > third){
            third = arr[i];

        }
    }

    cout << first << " " << second << " " << third;
    
}

int main(){

    int arr[] = {
        32,
        54,
        3,
        15,
        43,
        55
    };

    int n = sizeof(arr)/sizeof(arr[0]);
    largest_three(arr, n);
    return 0;
}