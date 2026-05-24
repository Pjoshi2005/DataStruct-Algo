class Solution {
public:
    int countStudent(vector<int>nums,int range){
        int student = 1;
        int pageStudentHold = 0;

        for(int i = 0; i < nums.size() ; i++){
            if(pageStudentHold + nums[i] <= range){
                pageStudentHold += nums[i];
            }
            else{
            student++;
            pageStudentHold = nums[i];
            }
        }
        return student;

    }

public:
    int findPages(vector<int> &nums, int m)  {
        int n = nums.size();
        if(m > n) return -1;
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low <= high){
            int mid = (low+high)/2;

            int student = countStudent(nums,mid);

            if(student > m){
                low = mid+1;
            }
            else 
                high = mid-1;

        } 
        return low;
    }
};