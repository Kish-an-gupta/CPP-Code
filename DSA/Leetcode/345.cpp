#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     bool isVowel(char c){
            unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
            return vowels.count(c) > 0;
        }
    string reverseVowels(string s) {
       int i=0;
       int j=s.size()-1;
       while(i < j){
            while(i < j && !isVowel(s[i])) i++;
            while(i < j && !isVowel(s[j])) j--;

            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
       }
       return s;
    }
};
