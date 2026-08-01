#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int secondLargest(vector<int>&arr){
        int max = arr[0];
        int s_max = -1;

        for(int i = 1; i< arr.size(); i++){
            if (arr[i] > max){
                s_max - max;
                max = arr[i];
            }else if (arr[i] > s_max && arr[i] < max){
                s_max = arr[i];
            }

        }
        return s_max;

    }
};
int main(){
    Solution finder;
    vector<int>arr = {2,3,4,5,6,1,9,8,7};
    cout<<"second largest number is:- "<<finder.secondLargest(arr)<<endl;
}