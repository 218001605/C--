#include <iostream>
/*
* practice program :@218001605
*
* the size of an array need to be constant / rvalue. like 4, 5, literals numbers.
* int n=5 is not applicable since is the lvalue.
* e.g int array[7] / declare a constant variable and pass it as parameter. e.g const int n=5;
*
* the last case is to use dynamic memory to make array to accomodate unknown size of an array;
* if the argument is a reference const passed as argument on funtion can work only if is rvalue reference;
*/
using namespace std;
int main(){
   // int v =5; const int n=v also not applicable, throws it error since v is lvalue not constant;
   const int n=5; // the size of an array need to be constant / rvalue.
    int array[n]; // = {1,2,3,4,5}; // // int n=5 is not applicable since is the lvalue.
    int* p = array;
    std::cout << *array << endl;
    std::cout << p[2] << endl;
    std::cout << *(array + 3) << endl;
    for(int i=0;i<5;i++){//array length has to be remembered by the programmer
        array[i]=(i+1);

    }
        // let's try to create array dynamically;
        int siz=2;
        int *arr= new int[siz];// you cane name variable when it is a dynamically array;
        delete [] arr; // recycle memory;
        arr=nullptr;// make not point to recycle memory;
}