class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int n : nums){
            freq[n]++;
        }
        priority_queue<pair<int,int>> maxHeap;
        for(auto& [num, count] : freq){
            maxHeap.push({count, num});
        }
        vector<int> result;
        for(int i=0; i<k; i++){
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
        }
    return result;

    }
};
