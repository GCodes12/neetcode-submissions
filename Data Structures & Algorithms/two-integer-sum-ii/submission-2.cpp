class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int n = numbers.size();

        // int i=0;
        // int j = n-1;

        // while(i<j){
        //     if(numbers[i] + numbers[j] == target) return {i+1, j+1};
        //     else if(numbers[i] + numbers[j] < target) i++;
        //     else j--;
        // }
        // return {};


        int n = numbers.size();
        int i=0; 
        int j = n-1;

        vector<int>ans;
        while(i<j){
                
            int sum = numbers[i] + numbers[j];

            if(sum > target){
                j--;
            }
            else if(sum < target){
                i++;
            }
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }
        return ans;
    }
};
