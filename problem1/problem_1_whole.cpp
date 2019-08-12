#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result(2);
            for(int i=0;i < nums.size() - 1; i++)
            {
                for(int j = i + 1; j < nums.size(); j++)
                {
                        if ((nums[i] + nums[j]) == target)
                        {
                                result[0] = i;
                                result[1] = j;
                                return result;
                        }
                }
            }
            return result;   
    }
};

int main()
{
    vector<int> nums(4);
    nums[0] = 2;
    nums[1] = 7;
    nums[2] = 11;
    nums[3] = 15;
    int target = 9;
    Solution s;
    vector<int> result = s.twoSum(nums, target);
    cout << result[0] << result[1] << endl;
}