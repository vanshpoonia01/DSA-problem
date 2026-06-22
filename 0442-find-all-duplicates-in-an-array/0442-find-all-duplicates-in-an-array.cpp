class Solution {
public:
    vector<int> findDuplicates(vector<int>& num) {
        int n= num.size();
        unordered_map<int,int>mp;
        vector<int>a;
        for(int i=0;i<n;i++){
            if(mp.find(num[i])!=mp.end()){
                a.push_back(num[i]);
            }
            mp[num[i]]++;
        }
        return a;
    }
};