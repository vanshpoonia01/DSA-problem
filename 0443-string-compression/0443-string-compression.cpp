class Solution {
public:
    int compress(vector<char>& c) {
        string a = "";
        int s=1;
        for(int i=0;i<c.size()-1;i++){
             if(c[i]==c[i+1]){
                s++;
             }
             else if(s==1){
                a+=c[i];
             }else{
                a+=c[i];
                a+=to_string(s);
                s=1;
             }
        }
       if(s == 1) {
            a += c.back();
        }
        else {
            a += c.back();
            a += to_string(s);
        }
for(int i = 0; i < a.size(); i++){
    c[i] = a[i];
}

return a.size();
    }
};