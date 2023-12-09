#include<iostream>
using namespace std;

int getSum(int *arr,int size){
    //base case
    if(size==0)return arr[0];
    else if(size==1)return arr[0];

    else {
        return arr[0] + getSum(arr+1,size-1);
    }
}

int main(){
    int arr[] = {2,4,9,9,9};
    int size = 5;
    int sum = getSum(arr,size);
    cout<<"Sum is "<<sum<<endl;
    return 0;
}