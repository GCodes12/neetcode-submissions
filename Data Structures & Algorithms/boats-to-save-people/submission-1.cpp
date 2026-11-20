class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
    //     int n = people.size();
    //     sort(people.begin(), people.end());
    //     int i=0, j = n-1;

    //     int ans = 0;
    //     while(i<=j){

    //         if(people[i] + people[j] > limit){
    //             ans++;
    //             j--;
    //         }
    //         else{
    //             ans++;
    //             i++;
    //             j--;
    //         }
    //     }
    //     return ans;


        int n = people.size();
        sort(people.begin(), people.end());

        int i=0, j=n-1;
        int boatCount = 0;
        while(i<=j){
            if(people[i] + people[j] <= limit){
                i++;
            }
            j--;
            boatCount++;
        }
        return boatCount;

    }
};