#include <iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5};
    int* p = array;
    std::cout << *array << endl;
    std::cout << p[2] << endl;
    std::cout << *(array + 3) << endl;
    std::cout<<"(*(&array)) \t"<<*(&array)<<"\tdereferencing an ampersant(&) pointer it gives the address not value,(maybe address of address) ."<<endl;
    std::cout<<*(&p)<<"\t"<<*(p+1)<<"\t"<<(*(&array+1))<<endl; //get address() + move to adject index and dereferrencing.
    for(int i=0;i<5;i++){//array length has to be remembered by the programmer
        std::cout << array[i] << " ";
    }
}