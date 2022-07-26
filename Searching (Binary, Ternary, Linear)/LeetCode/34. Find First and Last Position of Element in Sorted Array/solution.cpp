class Solution {
public:
    int firstOccurrence(vector<int>& nums,int low,int high,int target){
        
        if(low>high) return -1;
        
        int mid = (low + high)/2;
        
        if(target>nums[mid]){
            return firstOccurrence(nums,mid+1,high,target);
        }
        else{
            if(target<nums[mid]){
                return firstOccurrence(nums,low,mid-1,target);
            }
            else{
                if(mid==0 || nums[mid-1]!=nums[mid]){
                    return mid;
                }
                else return firstOccurrence(nums,low,mid-1,target);
            }
        }
        return 1;
    }
    
    int lastOccurrence(vector<int>& nums,int low,int high,int target){
        
        if(low>high) return -1;
        
        int mid = (low + high)/2;
        
        if(nums[mid]>target){
            return lastOccurrence(nums,low,mid-1   ,target);
        }
        else{
            if(nums[mid]<target){
                return lastOccurrence(nums,mid+1,high,target);
            }
            else{
                if(mid==nums.size()-1 || (nums[mid+1]!=nums[mid])){
                    return mid;
                }
                else return lastOccurrence(nums,mid+1,high,target);
            }
        }
        return 1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> answer;
        if(nums.size()==0){
            answer.push_back(-1);
            answer.push_back(-1);
            return answer;
        }
        answer.push_back(firstOccurrence(nums,0,nums.size()-1,target));
        answer.push_back(lastOccurrence(nums,0,nums.size()-1,target));
        return answer;
        
    }
};