#include<iostream>
#include<algorithm>
using namespace std;

void most_occurring_element(int arr[], int n){

    int prev=0,element=0;
    for(int i=0; i < n; i++)
    {
        int count = 0;
        for(int j=0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;  
            
        }//for j

        if(count>prev){         
            prev = count;   
            element = arr[i];
        }

    }//for i
    cout <<"most occurring element: "<< element << " ";
}

int main(){
    int num[] = {2,5,3,2,5,5,7,87,4,5};
    int n = sizeof(num)/sizeof(num[0]);
    most_occurring_element(num, n);
    return 0;
}