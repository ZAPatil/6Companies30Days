class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
       long sum=0, sum1=0, maxi;
       for(int i=0; i <nums.size(); i++){
           sum+=nums[i];
           sum1+= i*nums[i];
       } 
        maxi=sum1;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            sum1+=sum-(nums[i]*n);
            maxi=max(sum1,maxi);
        }
        return maxi;
    }
};
