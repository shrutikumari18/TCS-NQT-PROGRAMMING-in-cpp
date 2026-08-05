#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void rotateArr(vector<int>& arr, int d){

        int n = arr.size();
        d = d % n;

        // Reverse first d elements
        int i = 0;
        int j = d - 1;

        while(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        // Reverse remaining elements
        i = d;
        j = n - 1;

        while(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        // Reverse whole array
        i = 0;
        j = n - 1;

        while(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};

int main(){

    Solution rotater;
    vector<int> arr = {1,2,3,4,5};
    int d = 2;
    rotater.rotateArr(arr, d);
    for(int x : arr)
        cout << x << " ";

    return 0;
}