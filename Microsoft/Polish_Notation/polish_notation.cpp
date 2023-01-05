class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string a: tokens){
            if(a=="+"){
                int x=st.top();
                st.pop();
                int y= st.top();
                st.pop();
                st.push(x+y);
            }
            else if(a=="-"){
                int x=st.top();
                st.pop();
                int y= st.top();
                st.pop();
                st.push(y-x);
            }
            else if(a=="*"){
                int x=st.top();
                st.pop();
                int y= st.top();
                st.pop();
                st.push(x*y);
            }
            else if(a=="/"){
                int x=st.top();
                st.pop();
                int y= st.top();
                st.pop();
                st.push(y/x);
            }
            else st.push(stoi(a));
        }
        return st.top();
    }
};
