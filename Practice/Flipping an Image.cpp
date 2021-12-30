// link - https://leetcode.com/problems/flipping-an-image/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        vector<vector<int>> ans;
        int n = image.size();
        
        for (int i=0; i<n; i++){
            
            int m = (image[i]).size();
            
            reverse(image[i].begin(),image[i].end());
            
            
        }
        
        for (int i=0; i<n; i++){
            
            for (int j=0; j<n; j++){
                
                if (image[i][j]==0){
                    
                    image[i][j]=1;
                }
                
                else{
                    image[i][j]=0;
                }
            }
            
            
        }
        
        return image;
        
    }
};
