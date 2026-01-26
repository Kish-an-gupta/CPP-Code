#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        int diff = INT_MAX;

        for(int i = 0; i < arr.size() - 1; i++) {
            int nd = arr[i+1] - arr[i];

            if(nd < diff) {
                diff = nd;
                ans.clear();
                ans.push_back({arr[i], arr[i+1]});
            }
            else if(nd == diff) {
                ans.push_back({arr[i], arr[i+1]});
            }
        }
        return ans;
    }
};
