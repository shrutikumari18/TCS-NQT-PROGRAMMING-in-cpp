#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int prefixArr(vector<int>& arr, int p  ){

        // here we will learn concept of prefix array.
        // which stands as-
        // if arr[2] - it will give  sum of elements till 2nd index.

        // vector<int>n_arr;
        int sum = 0;

        for(int i = 0; i< p; i++){
            sum = sum + arr[i];

        }
        // n_arr.push_back(sum);
        // return n_arr;
        return sum;
    }
};

int main(){
    Solution solver;
    vector<int> arr = {1,2,3,4,5};
    int p = 3;
    solver.prefixArr(arr);
    cout<< sum;
}