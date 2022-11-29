class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answers;
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.find(target-nums[i])==m.end()){
                m.insert({nums[i],i});
            }
            else{
                answers.push_back(i);
                auto p = m.find(target-nums[i]);
                answers.push_back(p->second);
            }
        }
        return answers;
    }
};

