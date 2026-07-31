#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int secondLargest(vector<int>&arr){
        sort(arr.begin(), arr.end());

        return arr[n-2];
    }
}