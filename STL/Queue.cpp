#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    cout<<"First Element: "<<q.front();
    return 0;
}