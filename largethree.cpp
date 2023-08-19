#include<iostream>
#include <limits.h>
using namespace std;

void largest_three(int arr[], int size){
    int i,first,second,third;
    if(size < 3){
        cout << "invalid input";
    }
    
    third = first = second = INT_MIN;
    for(i=0; i < size; i++){
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if( arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third)
            third = arr[i];

    }
}

int main(){

    int num[] = {7,2,5,3,56,44,76};
    int size = sizeof(num)/sizeof(num[0]);

    largest_three(num, size);

    return 0;
}