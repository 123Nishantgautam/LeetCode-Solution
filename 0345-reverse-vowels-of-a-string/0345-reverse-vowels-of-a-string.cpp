class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right  = s.length()-1;
        
        while(left < right){
            if(!(s[left] == 'a' || s[left] == 'A' || 
            s[left] == 'e' || s[left] == 'E' || 
            s[left] == 'i' || s[left] == 'I' || 
            s[left] == 'o' || s[left] == 'O' ||
            s[left] == 'u' || s[left] == 'U')){
                left++;
            }
            else if(!(s[right] == 'a' || s[right] == 'A' || 
            s[right] == 'e' || s[right] == 'E' || 
            s[right] == 'i' || s[right] == 'I' || 
            s[right] == 'o' || s[right] == 'O' || 
            s[right] == 'u' || s[right] == 'U')){
                right--;
            }
            else{
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};