class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(
            remove_if(s.begin(),s.end(),
            [](unsigned char c){
                return !isalnum(c);
            }),
            s.end()
        );

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string c = s;
        
        reverse(s.begin(), s.end());

        return c == s;
    }
};