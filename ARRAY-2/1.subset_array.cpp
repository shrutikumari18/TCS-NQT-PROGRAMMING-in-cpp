#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    bool isSubset(vector<int> &a, vector<int> &b){

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int i=0;
        int j=0;

        while(i < a.size() && j < b.size()){
            if (a[i] == b[j]){
                i++;
                j++;
            }else{
                i++;
            }
        }
        if (j == b.size()) return true;
        return false;
    }
};
int main(){
    Solution solver;
    vector<int>a = {1,2,3,4,5,6};
    vector<int>b = {1,5,6};
    
    if(solver.isSubset(a,b))
        cout<<"b is subset of a";
    else
        cout<<"b is not subset of a";

    return 0;
}