#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        int j=0;
        for(int i=0; i<n && j<m; i++){
            if(t[i] ==  s[j]){
                j++;
            } 
        }
        if(j == m) return true;
        return false;
    }
};