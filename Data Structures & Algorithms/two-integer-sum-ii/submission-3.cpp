class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0 ;
        int j = numbers.size()-1;
        vector<int>res(2);
        while(i<j){
            int sum = numbers[i]+numbers[j];
            if(sum == target ){
                res = {i+1 , j+1};
                break;
            }
            if(sum < target )i++;
            else j--;
        }
        return res;

    }
};
