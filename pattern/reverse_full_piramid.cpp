#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of row: ";
    cin>>row;
    //  *   *   *   *
    //    *   *   *
    //      *   *
    //        *

    for(int i = row;i > 0; i--){
        for (int j = 0; j < row-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < i; k++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}