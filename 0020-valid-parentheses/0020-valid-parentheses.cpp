#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (int i = 0; i < s.length(); i++) 
        {
            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[') 
            {
                myStack.push(ch);
            } 
            else 
            {
                if (myStack.empty()) 
                {
                    return false;
                }
                char x = myStack.top();
                myStack.pop();
                if ((ch == ')' && x != '(') ||
                    (ch == '}' && x != '{') ||
                    (ch == ']' && x != '[')) 
                {
                    return false;
                }
            }
        }

        return myStack.empty();
    }
};