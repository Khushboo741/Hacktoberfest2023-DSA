class Solution {
public:
    bool isValid(string s) {
        int x=s.size();
        stack<char>st;
        for(int i=0;i<x;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);
            }

            else if(st.empty())
            {
                return false;
            }

            else if((s[i]==')' && st.top()=='(') 
                    || (s[i]==']'&&st.top()=='[') || 
                    (s[i]=='}' && st.top()=='{'))
            {
                st.pop();
            }
            else
            return false;
        }
        return st.empty();
        
    }
};
