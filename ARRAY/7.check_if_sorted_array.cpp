#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    bool isSorted(vector<int>&arr){
        int i;
        int n = arr.size();

        for(i=1; i<n;  i++){
            if (arr[i] < arr[i-1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution checker;
    vector<int>arr = {1,25,45,32};
    if(checker.isSorted(arr)){
        cout<<"array is sorted."<< endl;
    }else{
        cout<<"array is not sorted."<< endl;
    }
    return 0;
}