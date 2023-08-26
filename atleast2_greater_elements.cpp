#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
void find_greater_elements(int arr[], int size)
{
    
    for(int i=0; i < size; i++)
    {
        int count = 0;
        for(int j=0; j<size; j++)
        {
            
            if(arr[j] > arr[i]){
                count++;
            }

        }  

        if(count >= 2)  
            cout << arr[i] << " ";            
    }
}


int main(){
    int arr[] = {6,12,3,66,72,33,26};
    int size = sizeof(arr)/sizeof(arr[0]);
    find_greater_elements(arr, size);
    return 0;
}
