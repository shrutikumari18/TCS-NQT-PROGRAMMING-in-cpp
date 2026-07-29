#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int findLargest(vector<int>& arr){
        int i; 
        int n = arr.size();
        int max =0;
        
        for(i=0; i<n; i++){
            if (arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
};
int main(){
    Solution finder;
    vector<int>arr = {23, 56, 33, 12, 00, 96};
    cout<<"largest number is: "<< finder.findLargest(arr);
    
}