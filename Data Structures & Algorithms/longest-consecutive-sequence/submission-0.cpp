class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>u;
        for(int x:nums){
            u.insert(x);
        }
        int ct=0;
        int mx=0;

        if (!u.empty()) {
            auto it = u.begin();
            int prev = *it;
            ct = 1;      
            ++it;           
            
            for (; it != u.end(); ++it) {
                if (*it - prev == 1) {
                    ct++; 
                } else {
                    mx = max(mx, ct); 
                    ct = 1;           
                }
                prev = *it; 
            }
            mx = max(mx, ct); 
        }
        return mx;
    }
};
