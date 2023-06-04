#include <iostream>
#include <string>
#include <cstring>
#include <array>
using namespace std;

int countVowels(const string& s){
   // string vowels="AaEeIiOoUu";
   
    int count=0;
   // string v=s;
   // char str[]=s.c_str();
    for(int i=0;i<s.length();i++){
        //char ch=s[i];
        if(s[i]=='A' || s[i]=='i' ||s[i]=='e'||s[i]=='E'|| s[i]=='I' || s[i]=='a' || s[i]=='o' || s[i]=='O' || s[i]=='u' ||s[i]=='U'){
            count++; 
        }
    }
    return count;
}
int main(){
    string s="Melusi Mkhize";
    std::cout<<"there are "<<countVowels(s)<< " vowels in a string"<<endl;
    return 0;
}