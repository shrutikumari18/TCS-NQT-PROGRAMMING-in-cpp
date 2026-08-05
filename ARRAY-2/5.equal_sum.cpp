#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    string equilibrium(vector<int>&arr){

        int n = arr.size();

        vector<int> prefix(n+1, 0);

        for(int i =1 ; i<=n; i++){
            prefix[i] = prefix[i-1] +  arr[i-1];
        }

        int sum = 0;

        for(int i = n-1; i>=0; i--){
            if(prefix[i] == sum) return "true";

            sum += arr[i];
        }
        return "false";
    }
};

int main(){
    Solution solver;
    vector<int> arr = {1,2,3,3};
    int prefix = 
}