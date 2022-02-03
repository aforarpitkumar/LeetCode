//https://leetcode.com/problems/reformat-date/

class Solution {
public:
    string reformatDate(string date) {

        unordered_map <string,string> M;
        
        M["Jan"] = "01";
        M["Feb"] = "02";
        M["Mar"] = "03";
        M["Apr"] = "04";
        M["May"] = "05";
        M["Jun"] = "06";
        M["Jul"] = "07";
        M["Aug"] = "08";
        M["Sep"] = "09";
        M["Oct"] = "10";
        M["Nov"] = "11";
        M["Dec"] = "12";
        
        M["1st"] = "01";
        M["2nd"] = "02";
        M["3rd"] = "03";
        M["4th"] = "04";
        M["5th"] = "05";
        M["6th"] = "06";
        M["7th"] = "07";
        M["8th"] = "08";
        M["9th"] = "09";
        M["10th"] = "10";
        M["11th"] = "11";
        M["12th"] = "12";
        M["13th"] = "13";
        M["14th"] = "14";
        M["15th"] = "15";
        M["16th"] = "16";
        M["17th"] = "17";
        M["18th"] = "18";
        M["19th"] = "19";
        M["20th"] = "20";
        M["21st"] = "21";
        M["22nd"] = "22";
        M["23rd"] = "23";
        M["24th"] = "24";
        M["25th"] = "25";
        M["26th"] = "26";
        M["27th"] = "27";
        M["28th"] = "28";
        M["29th"] = "29";
        M["30th"] = "30";
        M["31st"] = "31";
        
        
        vector<string> mp;
        
        string temp ="";
        
        for (int i=0; i<date.size(); i++){
            
            if (date[i] != ' '){
                
                temp = temp +date[i];
            }
            
            else{
                mp.push_back(temp);
                temp = "";
            }
            
            if (i==date.size()-1){
                mp.push_back(temp);
            }
        }
        
        string ans = "";
        
        ans = ans + mp[2] + "-";
        string month = M[mp[1]];
        ans = ans + month+"-";
        
        
        
        ans = ans + M[mp[0]];
        
        return ans;
        
    }
};
