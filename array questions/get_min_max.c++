#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,4,1,2,8};
    // int maxi = INT8_MIN;
    // int maxi = INT8_MAX;
    int mini = INT8_MIN;
    for (int i = 0; i < 5; i++)
    {
        mini =min(mini,arr[i]);
    }
    cout<<mini<<'\n';
    
    int maxi = INT16_MIN;
    for (int i = 0; i < 5; i++)
    {
        maxi = max(maxi,arr[i]);
    }
    
    cout<<maxi;
    return 0;
}