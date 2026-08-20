class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int a=0;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="--X"||operations[i]=="X--"){
                a--;
            }else{
                a++;
            }

        }
        return a;
    }
};