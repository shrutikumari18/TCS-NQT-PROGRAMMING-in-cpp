#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:

    int arraysum(vector<int>& arr){
        int i;
        int sum = 0;
        for(i=0; i<arr.size(); i++){

            sum = sum + arr[i];
        }
    return sum;

    }
};

int main(){
    Solution solver;
    vector<int>arr = {1,2,3,4,5};
    cout<< "sum: " << solver.arraysum(arr)<<endl;
    return 0;
}


// factorial


