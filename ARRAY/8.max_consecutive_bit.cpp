#include<stdio.h>
#include<vector>
using namespace std;

class Solution{
    public:
    int maxConsecBit(vector<int>&arr){

        int ans = 1;
        int cnt = 1;

        for(int i=1; i< arr.size(); i++){
            if(arr[i] == arr[i-1]){
                cnt++;
            }else{
                cnt = 1;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};

int main(){
    Solution solver;
    vector<int>arr = {0,0,1,2,3,3,4,2,2,2};
    // cout<<"maximum consecutive is"<<solver.maxConsecBit(arr); 
}