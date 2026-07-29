#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int findMean(vector<int>& arr){
        int i;
        int n = arr.size();
        int sum =0;
        
        for(i=0; i<n; i++){
            sum = sum + arr[i];
        }
        return sum/n;
    }
};
int main(){
    Solution finder;
    vector<int>arr = {1,2,3,4,5};
    cout<<"mean of the elements is:"<<finder.findMean(arr)<<endl;

}