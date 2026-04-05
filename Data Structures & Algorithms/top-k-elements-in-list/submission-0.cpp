class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>map_to_sort;
        for(auto x : nums ){
        map_to_sort[x]++;
        }
        vector<pair<int, int>> vec_of_pairs(map_to_sort.begin(), map_to_sort.end());
        sort(vec_of_pairs.begin(), vec_of_pairs.end(),
            [](const pair<int, int>& a, const pair<int, int>& b) {
                return a.second > b.second;
            }
        );
        vector<int>res(k);
        for(int i = 0 ; i<k ; i++){
            res[i]=vec_of_pairs[i].first;
        }
        return res;
    }
};
