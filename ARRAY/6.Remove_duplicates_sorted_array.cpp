#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int removeDuplicateSortedArr(vector<int>&arr){
        if(arr.empty()) return 0;

        int i;
        int n = arr.size();
        vector<int>arr2;

        for(i=0; i<n; i++){
            if (i == 0){
                arr2.push_back(arr[i]);
            }else if(arr[i] != arr[i-1]){
                arr2.push_back(arr[i]);
            }
        }
       arr = arr2;
    }
};

int main(){
    Solution remover;
    vector<int> arr = {1,2,2,3,4,4,4};
    cout<<"new array is:";
    remover.removeDuplicateSortedArr(arr);
    for(int num  : arr){
        cout<<num <<" ";
    }
}