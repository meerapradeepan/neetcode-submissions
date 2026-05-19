class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int numfive = 0;
        int numten = 0; 
        // int num20s = 0; 

        for (auto x : bills){
            if (x == 5) { numfive++; }
            else if (x == 10) {
                if (numfive > 0) {
                    numfive--; 
                    numten++; 
                } else {return false;}
            }
            else{
                if (numfive > 0 && numten > 0){
                    numfive--;
                    numten--; 
                    // num20s++; 
                } else if (numfive > 2) {
                    numfive-=3; } 
                else {return false; }
            }
        }
        return true; 
    }
};