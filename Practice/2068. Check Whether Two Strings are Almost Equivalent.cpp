// https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        
        int arr[26]={};
        bool ans = true;
        
        for (auto x: word1){
            
            arr[x-'a']++;
        }
        
        for (auto x: word2){
            
            arr[x-'a']--;
        }
        
        for (int i=0; i<26; i++){
            
            if (abs(arr[i])>3){
                ans = false;
                return ans;
            }
        }
        
        return ans;
        
    }
};
