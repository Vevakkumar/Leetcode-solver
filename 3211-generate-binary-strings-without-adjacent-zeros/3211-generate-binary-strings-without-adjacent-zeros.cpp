class Solution {
public:

void sub(string &s, vector<string> &ans,int n){
    if(s.length()==n){
        ans.push_back(s);
        return;
    }
    s.push_back('1');
    sub(s,ans,n);
    s.pop_back();


    if(s.empty() || s.back()!='0'){
        s.push_back('0');
        sub(s,ans,n);
        s.pop_back();
    }
}

    vector<string> validStrings(int n) {
        string s = "";
        vector<string>ans;
        sub(s,ans,n);
        return ans;

    }
};