#include<iostream>
using namespace std;


int sum(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    return ans;
}

int main(){
    char *ch = new char;
    // cout<<sizeof(ch)<<endl;
    // int *arr = new int[5];
    // cout<<sizeof(arr)<<endl;

    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum of array is: "<<sum(arr,n);
    
    return 0;
}