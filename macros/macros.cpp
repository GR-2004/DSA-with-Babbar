#include<iostream>
using namespace std;
#define AREA(l,b) l * b


int main(){
    int l1,l2;
    l1 = 12;
    l2 = 24;
    int area = AREA(l1,l2);
    cout<<"area is "<<area<<endl;
    return 0;
}