class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string ans;
        for(int j = 0; j < strs[0].size(); j++)
        {
            char temp = strs[0][j];
            for(int i = 0; i < strs.size(); i++)
            {
                if(strs[i][j] != temp)
                    return ans;
            }
            ans += strs[0][j];
        }
        return ans;       

    }
};