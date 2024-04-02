class Solution:

    def __init__(self, nums: list[int], target: int):
        self.nums = nums
        self.target = target
    def twoSum(self) -> list[int]:
        num_dict = {}

        for i, num in enumerate(self.nums):
            comp = self.target - num
            if comp in num_dict:
                return [num_dict[comp], i]

            num_dict[num] = i
        return []

new = Solution([2,7,11,15], 9)
new_2 = Solution([3,2,4], 6)
new_3 = Solution([3,3], 6)

print(new.twoSum())
print(new_2.twoSum())
print(new_3.twoSum())

