#include <iostream>
#include <string>
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
int main(){
    if(isPrime(101)){
     std::cout<<"is prime number"<<endl;
    }else{
        std::cout<<"is not prime number"<<endl;
    }
    return 0;
    }