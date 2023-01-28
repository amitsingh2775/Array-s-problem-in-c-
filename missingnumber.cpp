/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
        
int miss(int arr[],int size){
    int a=0;
    int b=0;
    
    for(int i=0;i<size;i++)
        a=a ^ arr[i];
        
        for(int i=1;i<=size;i++)
            b=b ^ i;
        
             return a^b;
        
}
            
       
    



int main()
{
int arr[10]={1,2,3,4,5,6,7,8,10};

    cout<<"mising number :"<<miss(arr,10);
    return 0;
}

