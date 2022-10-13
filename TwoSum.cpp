class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //naya vector create kiya h indexes ko store krne ke liye
        vector<int>Num;
        vector<int> :: iterator it;//iterator create kiya h indexes ko new vector m enter krwane ke liye
        for(int i=0;i<nums.size();i++)
        {
          int dif = target - nums[i];
          it = find(nums.begin(),nums.end(),dif);
           if(it != nums.end())
           { // found
                if((it - nums.begin()) == i)
                    continue;
                Num.push_back(i);
                Num.push_back(it - nums.begin());
                return Num;
           }
        }
         return Num;

    }
};
