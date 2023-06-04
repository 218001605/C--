//return the diference between the biggest and smallest numbers in vec. Assume the vec is non empty.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int vectorRange(const vector<int>& vec){
    int smallest=vec[0]; int largest=vec[0];
    //vector<int> v;
    for(int i=0;i<vec.size();i++){
        if(smallest>vec[i]){// find smallest number from vector;
            smallest=vec[i];
        }else if(largest<vec[i]){//find largest number from vector;
            largest=vec[i];
        }
    }
    return (largest-smallest);// return the difference between the largest and smallest in the vector
}
int main(){
    vector<int> vect={556,89,32,90,234,55,4,1000,3,77};
    std::cout<<vectorRange(vect)<<endl;
    return 0;
}