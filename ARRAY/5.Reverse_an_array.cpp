#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int reverseArr(vector<int>& arr){
        int n = arr.size();
        int i=0;
        int j = n-1;

        while(i <= j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};

int main(){
    Solution reverser;
    vector<int>arr = {3,5,7,1,9};
    reverser.reverseArr(arr);
    cout<<"reverse of the array is: ";
    for(int num : arr){
        cout<< num << " ";
    }

}