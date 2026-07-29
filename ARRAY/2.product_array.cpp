#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
// 1 product
    int factorial(vector<int>& arr){
        int i;
        int prod = 1;
        for(i=0; i < arr.size(); i++) {
            prod = prod * arr[i];
        }
    return prod;
    } 




//  2. factorial

};
int main(){
    Solution solver;
    vector<int>arr = {2,4};
    cout<< "product  is: "<<solver.factorial(arr)<<endl;
    return 0;
}







