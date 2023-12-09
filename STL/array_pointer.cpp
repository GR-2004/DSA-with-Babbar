#include<iostream>
using namespace std;

int main(){
    int arr[10] = {0};
    /*
    arr[4] = 15;
    cout<<"1st "<<*arr<<endl;
    cout<<"4th "<<*(arr+4)<<endl;
    int i = 4;
    cout<<i[arr]<<endl;
    
   cout<<sizeof(arr)<<endl;
   cout<<sizeof(*arr)<<endl;
   cout<<sizeof(&arr)<<endl;
   int *ptr = &arr[0];
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;
   

    // arr = arr+1;
    int *ptr  = &arr[0];
    cout<<ptr<<endl;
    ptr = ptr +1;
    cout<<ptr<<endl;
    */
   char ch[6] = "abcde";
                                        //attention here
   cout<<arr<<endl;
   cout<<ch<<endl;

   char *c = &ch[0];
   cout<<c<<endl;

   char temp = 'z';
   char *p = &temp;
   cout<<p<<endl;
    return 0;
}