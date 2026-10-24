class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        int n = s.length();

        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                p.push(ch);
            }
            else{
                if(p.empty()){
                    return false;
                }
                if(ch == ')'&& p.top() == '(' || ch == '}' && p.top() == '{' || ch == ']' && p.top() == '['){
                    p.pop();
                }
                else{
                    return false;
                }
            }
        }

        return p.empty();
    }
};