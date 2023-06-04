#include <iostream>
using namespace std;
bool isPrime(int n){
    bool valid=true;
    if(n>=2){
        for(int i=2;i<n;i++){
            if(n==2 || n==3){
                break;
            }if(n%i==0){
                valid=false;
                break;
            }
        }
    }else if(n<=1){
        valid=false;
    }
    return valid;
}
int cmdFact(int a, int b){
    int n=1;
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                if(isPrime(i)){
                    n=i;
                }
            }
        }
    }if(b>a){
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                if(isPrime(i)){
                    n=i;
                }
            }
        }
    }else{
        if(isPrime(a)){
            n=a;
        }
    }
    return n;
}
int main(){
    std::cout<<cmdFact(33,66)<<std::endl;
return 0;
}
