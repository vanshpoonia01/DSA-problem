class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
       int s=1;
       int e=10000000;
       int ans = -1;
        while(s<=e){
            int mid = s +(e-s)/2;
            double time = 0;
            for(int i=0;i<dist.size();i++){
                if(i == dist.size()-1){
                    time+= (double)dist[i]/mid;
                }else{
                    time+= (dist[i]+mid-1)/mid;
                }
            }
                if(time<=hour){
                    ans = mid;
                    e= mid-1;
                }
                else{
                    s=mid+1;
                }
            }
        
        return ans;
    }
};