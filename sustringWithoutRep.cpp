/*
    Given a string s, find the length of the longest substring without duplicate characters.
*/


#include <iostream>
using namespace std;
#include <unordered_map>
#include "string"

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //int count=0;
        int longest = 0;
        int start =0;
        unordered_map<char, int> list;

        //abcabcbb

        for(int i =0; i <s.size(); ++i){
            char letter = s[i];
            if(list.find(letter) !=list.end() && list[letter] >= start){
                start = list[letter] + 1;
            }
            list[letter] = i;
            longest = max(longest, i - start + 1);

        }
        return longest;
    }
};


int main(){
    Solution sol;
    string str = "abcabcbb";
    int length = sol.lengthOfLongestSubstring(str);

    cout<<"length: "<<length<<endl;
}