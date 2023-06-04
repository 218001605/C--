#include <iostream>
#include <cstring>
#include <string>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;
char* discendOdert(char arr[] , int siz){
    vector<char> ch;
    char* ar= new char[siz];
    for(int i=0;i<siz;i++){
      ch.push_back(arr[i]);
    }
    sort(ch.begin(),ch.end(), greater<int>());
    for(int i=0;i<ch.size();i++){
        ar[i]=ch[i];
    }
    return ar;
}
int main(){
    char arr[]={'a','v','d','c'};
    char* v=discendOdert(arr,4);
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
return 0;
}
