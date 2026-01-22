#include<bits/stdc++.h>
using namespace std;


    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        int cnt = 0;
        if(n == 0) return true;
        if(m==1 && flowerbed[0]==1 && n==1) return false;
        if(m==1 && flowerbed[0]==0 && n==1) return true;
        if(flowerbed[0] == 0 && flowerbed[1]==0){
            cnt++;
            flowerbed[0] = 1;
        }
        if(m>=3){
            for(int i=1; i<m-1; i++ ){
                if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    cnt++;
                    flowerbed[i]=1;
                }
            }
        }
        if(flowerbed[m-1] == 0 && flowerbed[m-2] == 0){
            cnt++;
            flowerbed[m-1]=1;
        }
        if(cnt >= n) return true;
        return false;
    }
    int main(){
        vector<int> flowerbed = {1,0,0,0,1};
        int n=1;
        cout<<canPlaceFlowers(flowerbed,n);
        return 0;
    }