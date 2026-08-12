class Solution {
public:

void sub(string &s, vector<string>&ans,int n,int open,int close){
    if(s.length()==2*n){
        ans.push_back(s);
        return ;
    }
    if(open<n){
        s.push_back('(');
        sub(s,ans,n,open+1,close);
        s.pop_back();
    }
    if(close<open){
        s.push_back(')');
        sub(s,ans,n,open,close+1);
        s.pop_back();
    }



}
    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string>ans;
        sub(s,ans,n,0,0); 
        return ans;       
    }
};