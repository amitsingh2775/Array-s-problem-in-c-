/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int getpivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        
        
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
             mid=s+(e-s)/2;
    }
    return arr[e];
}

int main()
{
    int arr[6]={6,7,9,1,3,4};
    cout<<"pivot is :"<<getpivot(arr,6);
    return 0;
}

