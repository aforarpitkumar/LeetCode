// link to the problem -> https://leetcode.com/problems/watering-plants-ii/

class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        
        int i = 0;
        int j = plants.size()-1;
        
        unordered_map<string,int> mp;
        
        mp["capA"] = capacityA;
        mp["capB"] = capacityB;
        
        int ans = 0;
        
        if (plants.size()==1){
                return 0;
        }
        
        while (i<=j){
            
            if (i==j){
                
                if (plants[i]<= mp["capA"]){
                    
                    mp["capA"] = mp["capA"]- plants[i]; 
                }
                
                else if (plants[j]<= mp["capB"]){
                    
                    mp["capA"] = mp["capA"]- plants[i]; 
                }
                
                else if (mp["capA"] > mp["capB"]){
                    
                    ans++;
                    mp["capA"] = mp["capA"] - plants[i];  
                }
                
                else if ( mp["capA"] < mp["capB"] ){
                    
                    ans++;
                    mp["capB"] = mp["capB"] - plants[i];
                }
                
                else if ( mp["capA"] == mp["capB"] ){
                    ans++;
                    mp["capB"] = mp["capB"] - plants[i];
                }
            }
            
            if (i != j){
                
                        bool ch1 = false;
                    if (plants[i]<= mp["capA"]){

                        mp["capA"] = mp["capA"] - plants[i];
                    }

                    else if (plants[i]>mp["capA"]){

                        mp["capA"] = capacityA;
                        ans++;
                        mp["capA"] = mp["capA"] - plants[i] ;
                    }
                
                    if (plants[j]<= mp["capB"]){

                        mp["capB"] = mp["capB"] - plants[j];
                        
                    }

                    else if ( plants[j] > mp["capB"] ){

                        mp["capB"] = capacityB;
                        ans++;
                        mp["capB"] = mp["capB"] - plants[j] ;
                    }
            }
            
            i++;
            j--;
        }
        
        return ans;
    }
};
