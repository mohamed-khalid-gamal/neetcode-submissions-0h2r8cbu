class Solution {
public:
map<int,string>nums{make_pair(2,"abc"),make_pair(3,"def"),make_pair(4,"ghi"),make_pair(5,"jkl"),make_pair(6,"mno"),make_pair(7,"pqrs"),make_pair(8,"tuv"),make_pair(9,"wxyz")};

   void helper( int i  ,string x , string digits , vector<string>& y){
        if (x.size() == digits.size()) { 
            y.push_back(x);
            return;
        }
        
        if (i >= digits.size()) return; 
        
        for (char c : nums[digits[i] - '0']) {  
            helper(i + 1, x + c, digits, y);
        }
        
    }
    vector<string> letterCombinations(string digits) {
       
        vector<string> y;
         if(digits.size() == 0){
            return y;
        }
        helper(0,"",digits,y);
        return y;
    }
};