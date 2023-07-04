
//class Solution {
//public:
    /*
    int switchRoman(char c){
        int x = 0;
        switch(c){
            case 'I' : x = 1;
                break;
            case 'V' : x = 5;
                break;
            case 'X' : x = 10;
                break;
            case 'L' : x = 50;
                break;
            case 'C' : x = 100;
                break;
            case 'D' : x = 500;
                break;
            case 'M' : x = 1000;
                break;
        }
        return x;
    }
    int romanToInt(string s) {
        int num = 0;
        for(int i = 0;i<s.length();i++){
            
            if((s[i] == 'I') &&  (s[i+1] == 'V' || s[i+1] == 'X')) {
                
                num = num + (switchRoman(s[i+1]) - switchRoman(s[i]));
                i++;
            }
            else if((s[i] == 'X') && s[i+1] == 'L' || (s[i+1] == 'C')) {
                
                num = num + (switchRoman(s[i+1]) - switchRoman(s[i]));
                i++;
            }
            else if((s[i] == 'C') && (s[i+1] == 'D' || s[i+1] == 'M')){
                
                num = num + (switchRoman(s[i+1]) - switchRoman(s[i]));
                    i++;
                
            }
            else {
                num = num + switchRoman(s[i]);
            }
        }
        return num;
    }
    */
//};
    class Solution {
public:
    
     int switchRoman(char c)
     {
        int x = 0;      
        switch(c)
        {
            case 'I': x = 1;
                break;
            case 'V': x = 5;
                break;
            case 'X': x = 10;
                break;
            case 'L': x = 50;
                break;
            case 'C': x = 100;
                break;
            case 'D': x = 500;
                break;
            case 'M': x = 1000;
                break;
        }
        return x;
   }
    
    int romanToInt(string s) {
        
        int num = 0;
        
        for(int i=0;i<s.length();i++)
        {
            if((s[i] == 'I') && (s[i+1] == 'V' || s[i+1] == 'X')){
                num = num + (switchRoman(s[i+1]) - switchRoman(s[i]));
                i++;
            }
            else if((s[i] == 'X') && (s[i+1] == 'L' || s[i+1] == 'C')){
                num = num + switchRoman(s[i+1]) - switchRoman(s[i]);
                i++;
            }
            else if((s[i] == 'C') && (s[i+1] == 'D' || s[i+1] == 'M')){
                num = num + switchRoman(s[i+1]) - switchRoman(s[i]);
                i++;
            }
            else{
                num = num + switchRoman(s[i]);
            }
        }  
        
        return num;
    }
};
    
    