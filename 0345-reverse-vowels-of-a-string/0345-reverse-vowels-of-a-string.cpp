class Solution {
public:
    string reverseVowels(string s) {
        int i= 0;
        int r= s.size()-1;
        while(i<r){
            if(s[i]!='A' && s[i]!='E' && s[i]!='I' &&  s[i]!='O' && s[i]!='U' && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            i++;
         }
        else if(s[r]!='A' && s[r]!='E' && s[r]!='I' && s[r]!='O' && s[r]!='U' && s[r]!='a' && s[r]!='e' && s[r]!='i' && s[r]!='o' && s[r]!='u'){
            r--;
         }
         else{
            swap(s[i],s[r]);
            i++;
            r--;
         }

        }
       return s;
    }
};