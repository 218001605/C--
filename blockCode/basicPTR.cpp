#include <iostream>
/*
* practice program writte
* @Aother: 218001605
*/
using namespace std;
int main(){
    const int a = 2; // a cannot be modified after initialization
    int b = a; // b can be modified after initialization
    const int* pa = &a; // pa is not constant but its dereferenced variable cannot be modified
    pa = &b; // pa can be modified but b cannot be modified via pa
    int* const pb = &b; // pb is unmodifiable but its dereferenced variable can be modified
    *pb += 2; // the value of b has been increased by 2, even though pb is constant
    const int* const pc = &a; //pa is constant and its dereferenced variable is unmodifiable
    std::cout<<*pb;
}
