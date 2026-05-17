class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        checked = {}
        for i, num in enumerate(nums):
            result = target - num
            if result in checked:
                return [checked[result], i]
            checked[num] = i