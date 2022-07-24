class Solution {
public:
    
    //Approach : A contiguous group of n zeroes(1 <= n < Infinite) contributes n(n+1)/2                  subarrays
    
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long answer=0;
        
        long long count = 0;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==0){
                count++;
                answer=answer + count;
            }
            else{
                count=0;
            }
        }
        return answer;
    }
};