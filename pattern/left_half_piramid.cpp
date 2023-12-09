#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of row:";
    cin>>row;
    //     *
    //   * *
    // * * *
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<row-i-1;j++){
            cout<<" ";
        }
        for (int k = 0; k <= i ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"reverse piramid as follows:"<<endl;
    // * * *
    //   * *
    //     *
    for (int i = row; i > 0; i--)
    {
        for(int j = 0;j<row-i;j++){
            cout<<" ";
        }
        for (int k = 0; k < i ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}