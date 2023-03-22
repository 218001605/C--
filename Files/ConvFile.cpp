#include <fstream>
#include <iostream>
#include <string>
//#include <sstream>

using namespace std;
int main(){
    ifstream convfile ("covtype.data");
    int count(0), max(0),secondC(0);
    double avarage=0;
    string linestr(""), line(""), maxs(""), eachM(""), avs(""), eachA("");
    while(getline(convfile, line)){
        count++;
        linestr=line;
        string eachDigit("");

        while(getline(linestr,eachDigit,",")){
            secondC++;
            avarage+=double(eachDigit);
            if(max<(int) eachDigit){
                max=int(eachDigit);
            }
        }
        avarage=avarage/secondC;
        avs=(string) average +"\n";
        maxs= (string) max + "\n";
    }
    cout<<"The number of lines in the file is "<<count<<endl;
    cout<<"The maximum first number on each line \t"<<"The average first number on each line"<<endl;
    while(getline(maxs,eachM) && getline(avs,eachA))
        cout<<eachM +"\t \t \t \t \t \t \t"<<eachA<<endl;
}
