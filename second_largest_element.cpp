#include<iostream>
#include<limits.h>
using namespace std;

void second_largest(int arr[], int size){

    int first, second;
    first = second = INT_MIN;
    if(size < 2){
        cout << "INVALID INPUT";
    }

    for(int i=0; i < size; i++){

        if(arr[i] > first){
            
            second = first; 
            first = arr[i];
        }

        else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
        if(second == INT_MIN){
            cout << "no second largest element";
        }
        else{
            cout << "SECOND LARGEST ELEMENET: " << second;
        }
    

    

}

int main(){
    int arr[] = {23,4,12,55,3,22};
    int n = sizeof(arr)/sizeof(arr[0]);   
    second_largest(arr,n);
    return 0;
}