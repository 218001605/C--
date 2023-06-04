#include <iostream>
#include <string>
using namespace std;
int greatestCmd(int a, int b){
    int greatest=0;
    if(a==b){
        greatest=a;
    }if(a>b){
        if(a%b==0){
            greatest=b;
        }else{
            for(int i=1;i<b;i++){
                if(b%i==0 && a%i==0){
                    greatest=i;
                }
            }
        }
    }else{
        if(b%a==0){
            greatest=a;
        }else{
            for(int i=1;i<a;i++){
                if(b%i==0 && a%i==0){
                    greatest=i;
                }
            }
        }
    }
    return greatest;
}
int main(){
    std::cout<<greatestCmd(35,15)<<endl;
    return 0;
}
