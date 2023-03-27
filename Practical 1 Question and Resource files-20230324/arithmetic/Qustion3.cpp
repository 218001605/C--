#include <iostream>
#include <string>
#include <sstream>
using namespace std;
void display(string token);
int main(void){
    cout<<"please enter the arirhmetic expression as follows"<<endl;
    cout<<"Each token should be seperated by space"<<endl;
    cout<<"Press enter after seperating bby the expression."<<endl;
    cout<<"Type 0 then press enter to exit"<<endl;
    string token;
    do{
        cin>>token;
        display(token);
    }while(!(token=="0"));
}
void display(string token){
    stringstream ss(token);
    string oper;
    int num1, num2;
    ss>>num1>>oper>>num2;
    if(oper=="+")
        cout<<num1<<" "<<num2<<" = "<<(num1+num2)<<endl; 
    if(oper=="-")
        cout<<num1<<" "<<num2<<" = "<<(num1-num2)<<endl;
    if(oper=="*")
        cout<<num1<<" "<<num2<<" = "<<(num1*num2)<<endl;
    if(oper=="/")
        cout<<num1<<" "<<num2<<" = "<<(num1/num2)<<endl;
   if(oper=="%")
        cout<<num1<<" "<<num2<<" = "<<(num1-num2)<<endl; 
    
}