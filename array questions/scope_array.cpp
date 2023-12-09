#include<iostream>
using namespace std;

void update(int arr[],int size){
    cout<<endl<<"after the updation"<<endl;
    arr[0] = 120;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"before the updation"<<endl;
}

int main(){
    int arr[3] ={45,78,98};
    update(arr,3);
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}