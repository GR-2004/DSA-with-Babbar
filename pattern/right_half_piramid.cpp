#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter number of row: ";
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"reverse piramid as follows:"<<endl;
    //***
    //**
    //*
    for (int i = row; i > 0; i--)
    {
        for (int j = i; j > 0 ; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}