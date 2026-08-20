class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    vector<int> num(arr.size());
    for(int i=0;i<arr.size();i++){
        num[i]=arr[i];
    }
    sort(num.begin(),num.end());
    map<int,int>mp;
    int rank =1;
    for(int i=0;i<num.size();i++){
        if(mp.find(num[i])==mp.end()){
            mp[num[i]]=rank;
            rank++;
        }
    }
    for(int i=0;i<arr.size();i++){
        arr[i]= mp[arr[i]];
    }
return arr;

    }
};