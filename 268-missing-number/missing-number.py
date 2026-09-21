class Solution:
    def missingNumber(self, nums):
        n = len(nums)
        
        # Step 2: Calculate the expected sum using the formula
        expected_sum = (n * (n + 1)) // 2
        
        # Step 3: Calculate the actual sum of the array
        actual_sum = sum(nums)
        
        # Step 4: The difference is the missing number
        return expected_sum - actual_sum
