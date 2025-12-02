class Solution {
public:
void backtrack(string &digits, vector<string> &res,string &current, int index, map<char,string> &mp) {
        if (current.size() == digits.size()) {
            res.push_back(current);
            return;
        }
        string letters = mp[digits[index]];
        for (char c : letters) {
            current.push_back(c);
            backtrack(digits, res, current, index + 1, mp);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
     vector<string>  res;
     string combi="";
     map<char,string> mp={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};  
     backtrack(digits,res,combi,0,mp);
     return res;
    }
};