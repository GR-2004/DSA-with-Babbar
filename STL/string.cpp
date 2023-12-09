#include<iostream>
using namespace std;

char getMaxOccCharc(string s){
    int arr[26] = {0};

    //create an array of character
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number =0;
        //lowercase
        // if(ch>='a' && ch<='z'){
            number = ch-'a';
        // }
        //uppercase
        // else
        // {
        //     number = ch-'A';
        // }
        arr[number]++;
    }
    int maxi=-1,ans = -1;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
        maxi = max(maxi,arr[i]);
    }
    char finalans = 'a' + ans;
    return finalans;
}

int main(){
    string s;
    cin>>s;
    cout<<"highest occuring character "<<getMaxOccCharc(s);
    return 0;
}