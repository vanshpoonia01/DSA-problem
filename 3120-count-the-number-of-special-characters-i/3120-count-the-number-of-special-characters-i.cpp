class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>low(26,0);
        vector<int>up(26,0);
        for(int i=0;i<word.size();i++){
            if(word[i]>='a'&&word[i]<='z'){
                low[word[i]-'a']=1;
            }else{
                up[word[i]-'A']=1;
            }
        }
        int c=0;
        for(int i=0;i<26;i++){
            if(up[i]&&low[i])c++;
        }
        return c;
    }
};