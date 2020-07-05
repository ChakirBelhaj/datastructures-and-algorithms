class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int high = nums.size();
        int low = 0;
        int mid = low + (high - low) / 2;
        int value = nums.at(mid); 
        
        while(value != target){
            if(value < target){
                low = mid + 1;
                mid = low + (high - low) / 2;
                value = nums.at(mid);
            }
            else if (value > target){
                high = mid -1;
                mid = low + (high - low) / 2;
                value = nums.at(mid);
            }
            else{ 
                mid = -1;
                break;
            }    
        }

            
            
        return mid;
    }
};