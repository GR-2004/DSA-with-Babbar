#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {1,3,4,3,1};
    cout<<"Unique Element is "<<unique(arr,5);
    return 0;
}