// class Solution {
// public:
//     int zcount=0, ocount=0, tcount=0;
//     void sortColors(vector<int>& nums) {
//         for(int i =0; i<nums.size(); i++){
//             if(nums[i]==0) zcount++;
//             else if(nums[i]==1) ocount++;
//             else tcount++;
//         }
//        int i = 0;
//        while(i<zcount){
//            nums[i]=0;
//            i++;
//        }
//        while(i<ocount+zcount){
//            nums[i]=1;
//            i++;
//        }
//        while(i<tcount+zcount+ocount){
//            nums[i]=2;
//            i++;
//        }
       
//     }
// };

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};