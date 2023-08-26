#include<iostream>
#include<algorithm>
using namespace std;

void most_occurring_element(int arr[], int n){

    for(int i=0; i < n; i++){
        int count = 0;
        int s = 0;
        for(int j=0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;                
        }
        
        
            

    }

}

int main(){
    int num[] =  {4,23,3,4,66,3,5,4,56,23,25};
    int n = sizeof(num)/sizeof(num[0]);
    most_occurring_element(num, n);

    return 0;
}