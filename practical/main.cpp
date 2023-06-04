/*

* Created on: 20 Feb 2023

* Author: Mangaliso

* to run: 1. Change your working directory to this project using cd, in Windows use the 'command prompt', in linux use the 'terminal'
*         2. List the files in the current directory: 'dir' (Windows) 'ls'  (Linux)
*         3. compile and run: 'g++ main.cpp -o main.exe && .\main.exe'  (Windows)
*                              'g++ main.cpp -o main.exe && ./main.exe' (Linux)
*         4. List the files in the directory again to see if the solutions.txt file exists
*/

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

double result(double n1, char op, double n2){

	if(op == '-')
		return n1-n2;
	else if(op == '+')
		return n1+n2;
	else if(op == '*')
		return n1*n2;
	else if(op == '/')
		return n1/n2;

	else throw invalid_argument("Unexpected operator exception");

}

int main(){

	ifstream nums("nums.txt");
	ifstream operators("operators.txt");
	ofstream solutions("solutions.txt");

	double num1, num2, soln;
	char op;

	string numsline, opsline; int count=0; int countln=0;

	while(getline(nums, numsline) && getline(operators, opsline)){

		stringstream ssNums(numsline);
		stringstream ssOps(opsline);

		 ssOps>>op;
		 countln++;
        while(ssNums>>num1){
		// ssNums>>num1>>num2;
		 count++;
		 while(ssNums>>num2){
			count++;
		 }
		}
		soln = result(num1,op,num2);
		solutions<<soln<<endl;

	}
	solutions.close();
	std::cout<<"number of lines: "<<countln<<endl;
	std::cout<<"numbers are : "<<count<<endl;
	return 0;

}




