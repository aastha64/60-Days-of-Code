// LEETCODE PROBLEM 2028 - Find Missing Observations
class solution {
public:
     
     vector<int> missingRolls(vector<int> rolls, int mean, int n){
        int m = rolls.size();
        int givenSum = 0;
        for(int i = 0; i < m; i++){
            givenSum += rolls[i];
        }

        int totalSum = mean * (m+n);

        int remainingSum = totalSum - givenSum;

        if(remainingSum < n || remainingSum > 6*n){
            return{};
        }

        int q = remainingSum / n;
        int r = remainingSum % n;
        vector<int> res(n, q);
        for(int i = 0; i < r; i++){
            res[i]++;
        }
        return res;
     } 
};
