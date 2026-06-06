#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> checked;

        for (int i = 0; i < nums.size(); i++) {
            int result = target - nums[i];

            if (checked.count(result)) {
                return {checked[result], i};
            }
            checked[nums[i]] = i;
        }
        return {};
    }
};
