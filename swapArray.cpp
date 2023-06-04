#include <iostream>
#include <array>
#include <string>
using namespace std;
void swap(int* array1,int array1size, int* array2,int array2size){
    int temp=0;
    if(array1size==array2size){
            for(int i=0;i<array1size;i++){
                temp=array1[i];
                array1[i]=array2[i];
                array2[i]=temp;
            }
    }

}
int main(){
    int array1[]={1,2,3,4,5};
    int array2[]={5,4,3,2,1};
    cout<<"Arrays before swapping array elements"<<endl;
    cout<<endl<<"array1 :";
    for(int i=0;i<5;i++){
        cout<<array1[i]<<",";
    }
    cout<<endl<<"array2 :";
    for(int i=0;i<5;i++){
        cout<<array2[i]<<",";
    }
    cout<<endl<<"Arrays after swapping array elements"<<endl;
    swap(array1,5,array2,5);
    cout<<endl<<"array1 :";
    for(int i=0;i<5;i++){
        cout<<array1[i]<<",";
    }
    cout<<endl<<"array2 :";
    for(int i=0;i<5;i++){
        cout<<array2[i]<<",";
    }
return 0;
}
