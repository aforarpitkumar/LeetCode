// link = https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/submissions/
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        unordered_map <char,int> mp;
        bool ans = true;
        string text="";
        
       
        
        for (auto x: words){
            
            text = text+x;
        }
        
        for (auto y: text){
                
                mp[y]++;
        }
        
        int n = words.size();
        
        for (auto x: mp){
            
            if (x.second % n !=0){
                
                ans = false;
                
                return ans;
            }
        }
        
        return ans;
        
    }
};


// class Solution {
// public:
//     bool makeEqual(vector<string>& words) {
        
//         unordered_map <char,int> mp;
//         bool ans = true;
        
//         for (auto x: words){
            
//             for (auto y: x){
                
//                 mp[y]++;
//             }
            
//         }
        
//         int n = words.size();
        
//         for (auto x: mp){
            
//             if (x.second % n !=0){
                
//                 ans = false;
                
//                 return ans;
//             }
//         }
        
//         return ans;
        
//     }
// };
