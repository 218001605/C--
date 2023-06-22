#include <iostream>
using namespace std;
int main(){
int array[] = {1,2,3,4,5};
int* p = array;
cout << *array << endl;
cout << p[2] << endl;
cout << *(array + 3) << endl;
for(int i=0;i<5;i++){//array length has to be remembered by the programmer
cout << array[i] << " ";
}
}
