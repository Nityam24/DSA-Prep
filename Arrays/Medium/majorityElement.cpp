//this problem can also be solved using unordered map with more space complexity.

//this is Moore Voting Algorithm approach to solve.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int candidate =0;
        for(int num: nums){
            if(count==0){
                candidate = num; 
            }           
       
        if(num==candidate){
            count++;
        }else
        {
            count--;
        }
        }
        return candidate;
    }
    

};