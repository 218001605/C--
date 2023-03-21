#include <string>
#include <sstream>
#include <fstream>
using namespace std;
int main(){
ifstream entries("entries.txt");
ofstream names("names.txt");
ofstream numbers("numbers.txt");
string line;
while(getline(entries,line)){
stringstream ss(line);
string name("");
int number(0);
ss >> name >> number;
names<<name<<endl;
numbers<<number<<endl;
}
return 0;
}