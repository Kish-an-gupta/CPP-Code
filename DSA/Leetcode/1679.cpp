#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int j = n-1;
        int i = 0;
        int cnt = 0;
        while(i < j){
            int m = nums[i]+nums[j];
            if(m == k){
                cnt++;
                i++;
                j--;
            } else if(m < k) i++;
            else j--;
        }
        return cnt;
    }
};