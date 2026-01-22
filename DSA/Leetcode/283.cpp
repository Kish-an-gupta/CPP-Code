#include<bits/stdc++.h>
using namespace std;


    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n==2){
        
            if(nums[0] == 0 && nums[1]!=0){
                swap(nums[0],nums[1]);
                
            }
        } else if(n>2) {
            for(int i=0; i<n-1; i++){
                for(int j=i+1; j<n; j++){
                    if(nums[i] == 0 && nums[j] !=0) swap(nums[i],nums[j]);
                }
            }
        }
    }
    int main(){
        vector<int> nums={0,1,0,3,12};
        moveZeroes(nums);
        for(auto x:nums){
            cout<<x<<" ";
        }
        return 0;
    }
