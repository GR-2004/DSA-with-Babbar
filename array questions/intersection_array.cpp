#include<iostream>
using namespace std;

int main(){
    int arr1[] ={1,2,3,4,6,7,8,9},arr2[] = {2,4,6,8};
    int i=0,j=0;
    while (i<8&&j<4)
    {
        if (arr1[i]==arr2[j])
        {
            printf("%d ",arr1[i]);
            i++;j++;
        }
        else if (arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
        
    }
    
    return 0;
}