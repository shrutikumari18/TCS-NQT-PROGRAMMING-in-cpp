#include<iostream>
#include<vector>
using namespace std;

class Solution{
    int subsetArr(vector<int>&arr){
        int i=0;
        int j=0;

        while(i < arr.size()){
            if(arr[i] != arr[j]){
                j++;
                arr[j] = arr[i];
            }
            i++;
        }
        return j + 1;
    }
};