#include<iostream>

#include<climits>

using namespace std;

int findSecondLargest(int arr[], int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int s_max = INT_MIN;
    for(int i=0;i<n;i++){
       if(arr[i]!=max){
           if(arr[i]>s_max){
               s_max=arr[i];
           }
       }
    }
    return s_max;
}


int main() {
    // Your code here;
    return 0;
}