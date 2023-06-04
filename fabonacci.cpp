/**
 * Fibonacci numbers are a well known simple series of numbers that are formulated as follows: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ..., etc.
 * Write a function that takes a number n and computes the first n fibonacci numbers without using recursion. The function should return an int array pointer to dynamic memory where the elements of the
 * returned sequence are stored.
 *
 * i.e if the formal parameter n is 4, the a pointer to this array is returned: [0, 1, 1, 2]
*/
#include <iostream>
#include <array>
using namespace std;
int* fibonacci(int n)
{
    int* arr= new int[n];
    int pre=0; int next=1;
   /* if(n==0){
           arr[0]=0;
    }
    if(n==1){
        arr[1]=1;
    }*/
    for(int i=0;i<n;i++){
        if(i==0){
            arr[i]=0;
            cout<<arr[i]<<" ";
        }
        if(i==1){
            arr[i]=1;
             cout<<arr[i]<<" ";
        }
        else{
            arr[i]=pre+next;
            cout<<arr[i]<<" ";
            pre=next;
            next=arr[i];
        }
    }
    return arr;
}
int main(){
    int n=4;
    int * arr=fibonacci(n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
