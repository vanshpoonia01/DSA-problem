class Solution {
public:
    string reversePrefix(string word, char ch) {
        int a=0;
        for(int i=0;i<word.size();i++){
            if(ch ==word[i]){
              a=i;
              break;
            }
        }
        if(a==0)return word;
        a+=1;
        reverse(word.begin(),word.begin()+a);
        return word;
    }
};