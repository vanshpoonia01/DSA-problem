class Solution {
public:
    bool judgeCircle(string s) {
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='U') a++;
         if(s[i]=='D') b++;
          if(s[i]=='L') c++;
           if(s[i]=='R') d++;
          

    }
     if(a==b&&c==d) return true;
    return false;
    }
    
};