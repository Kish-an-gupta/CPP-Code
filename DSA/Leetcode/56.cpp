#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if( n==1 ) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        
        int i = 0;
        while(i < n){
            int start = intervals[i][0];
            int end = intervals[i][1];
            i++;
            while( i < n && end >= intervals[i][0]){
                end = max(end, intervals[i][1]);
                i++;
            }
            vector<int> temp;
            temp.push_back(start);
            temp.push_back(end);
            ans.push_back(temp);
        }
        return ans;
    }
};