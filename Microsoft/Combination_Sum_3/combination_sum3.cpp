class Solution {
public:
    vector<vector<int>> ans; //store cmplt ans
    void answ(vector<int>& v, int cnum, int k, int n){
        if(n<0 || v.size()>k) return;
        if(n==0 && v.size()==k){//store in final ans
            ans.push_back(v);
            return;
        }
        for(int i=cnum; i<=9; i++){//calculating individual combination
            v.push_back(i);
            answ(v, i+1,k,n-i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v; //store individual combination
        answ(v, 1, k, n);
        return ans;
    }
};
