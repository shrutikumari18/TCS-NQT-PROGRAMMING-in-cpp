#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<int>frequencyInArr(vector<int>& arr){
        int n = arr.size();

        vector<int>freq(n, 0);

        for(int i = 0; i<n; i++){
            int key = arr[i];

            freq[key-1]++;

        }
        return freq;
    }
};
int main(){
    Solution solver;
    vector<int>arr = {2, 3, 5, 3, 4};
    solver.frequencyInArr(arr);
}