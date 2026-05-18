class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        vector<pair<int,int>> element;
        for(int i = 0 ; i < nums.size() ; i++){
            element.push_back({nums[i],i});
        }
//first of all we need an element to store pair as we need to return indexes ..in elemnt we gonna sort ascendingg order..we gonna use comparator here

//here [](const pair<int,int> &a , const pair<int,int> &b) [] --> capture outside value which might we neeed for comparator..const pair is baically parameter which we ususaully pass in func..

//we need to pass pair<int,int> not vector<pair<int,int>> (remember that cuz we are just passing two values )
     
    //here we use comparator when we need complex sorting like descending or when we wanna sort array by its second value if it has etc.. otherwise for basic sorting use just sort().
        sort(element.begin(), element.end(),
    [](const pair<int,int> &a , const pair<int,int> &b){
        return a.first < b.first;
    }
);

// sort(element.begin(),element.end());

        int left = 0; 
        int right = nums.size()-1;

        while(left < right){
            int sum = element[left].first + element[right].first;

            if(sum == target) {
                ans.push_back(element[left].second);
                ans.push_back(element[right].second);

                return ans;
            } 
            else if (sum < target){
                left ++;
            }
            else {
                right--;
            }

        }

        return {-1,-1};
    }
};