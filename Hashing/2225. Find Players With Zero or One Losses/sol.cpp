class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> answer(2);
        int n;
        n = matches.size();
        unordered_set<int> winners;
        for(int i=0;i<n;i++){
            winners.insert(matches[i][0]);
        }

        unordered_map<int,int> loosers;
        for(int i=0;i<n;i++){
            if(loosers.find(matches[i][1])==loosers.end()){
                loosers.insert({matches[i][1],1});
            }
            else loosers[matches[i][1]]++;
        }

        for(auto e:loosers){
            if(e.second==1){
                answer[1].push_back(e.first);
            }
        }

        for(auto e:winners){
            if(loosers.find(e)==loosers.end()){
                answer[0].push_back(e);
            }
        }
        sort(answer[0].begin(),answer[0].end());
        sort(answer[1].begin(),answer[1].end());
        return answer;
    }
};