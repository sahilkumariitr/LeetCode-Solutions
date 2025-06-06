class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int a=0;
         for(int i=0;i<nums.size();i++)
         {if(nums[i]==0) a+=1;}

         int x = accumulate(nums.begin(), nums.end(), 1, [](int c, int d) {
    return d==0? c : c*d;});

         vector<int>y(nums.size(),x);

         if(a==0){
         for(int i=0;i<nums.size();i++)
         {y[i] = x/nums[i];}}

         else if(a==1)
         {for(int i=0;i<nums.size();i++)
         {if(nums[i]==0) y[i]=x;
         else y[i]=0;}}
         
         else {
            vector<int>v(nums.size(),0);
            return v;}

         return y;

    }
};
