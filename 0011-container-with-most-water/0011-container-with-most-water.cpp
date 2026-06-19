class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,v=0;;
        int e = height.size()-1;
        while(l<e){
            int w=e-l;
           int  h = min(height[l],height[e]);
           int a = h*w;
           if(height[l]<height[e]){
            l++;
           }else{
            e--;
           }
           v = max(v,a);
        }
            return v;
    }
   
};