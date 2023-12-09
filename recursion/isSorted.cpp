#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //base case
    if(size==0||size==1)return 1;
    if (arr[0] > arr[1])
    {
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {1,2,4,5,40};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans)cout<<"array is ssorted "<<endl;
    else cout<<"array is not sorted "<<endl;
    return 0;
}