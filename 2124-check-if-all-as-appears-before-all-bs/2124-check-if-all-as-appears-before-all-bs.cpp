class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        int i=0;
        int count = 0;

        while(i < n){
            if(s[i] == 'b' && s[i+1] == 'a' ){
                count++;
            }
            i++;
        }
        if(count == 0){
            return true;
        }
        else{
            return false;
        }
    }
};