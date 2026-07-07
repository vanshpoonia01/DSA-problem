class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string perfix = strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(perfix)!=0){
                perfix.pop_back();
            }
        }
        return perfix;
    }
};