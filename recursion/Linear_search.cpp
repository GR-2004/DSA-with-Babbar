#include<iostream>
using namespace std;

bool linear_Search(int arr[],int size,int key){
    if(size==0)return 0;
    else if(key==arr[0])return 1;
    else{
        return linear_Search(arr+1,size-1,key);
    }
}

int main(){
    int arr[] = {3,5,1,2,6};
    int size = 5;
    int key;
    cout<<"enter the element: "<<endl;
    cin>>key;
    bool ans = linear_Search(arr,size,key);
    if(ans){
        cout<<"Element is Found"<<endl;
    }
    else{
        cout<<"Element not Present"<<endl;
    }
    return 0;
}