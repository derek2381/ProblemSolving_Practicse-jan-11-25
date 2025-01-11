// problem link
// https://leetcode.com/problems/construct-k-palindrome-strings/description/


// Source Code

class Solution {
public:
    bool canConstruct(string s, int k) {

        if(s.length() < k){
            return false;
        }

        int count = 0;

        map<char, int> mp;

        for(char c : s){
            mp[c]++;
        }

        for(auto i : mp){
            if(i.second % 2 == 1){
                count++;
            }
        }

        if(count > k){
            return false;
        }else{
            return true;
        }


    }
};