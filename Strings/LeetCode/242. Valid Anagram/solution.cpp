#include<iostream>
using namespace std;
#include<string.h>
#include<vector>
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> hash(26,0);
        
        if(s.length() != t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            
            hash[s[i] - 'a']++;
            
        }
        
        for(int i=0;i<t.length();i++){
            
            hash[t[i]- 'a']--;
        }
        
        for(int j=0;j<26;j++){
            
            if(hash[j]!=0){
                return false;
            }
        }
        return true;
    }
};