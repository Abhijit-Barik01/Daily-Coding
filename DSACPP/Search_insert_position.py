from typing import List
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        start=0
        end=len(nums)
        ans=-1

        while(start < end):
            mid = start +(end-start)//2
            if(nums[mid]==target):
                return mid
            elif(nums[mid] < target):
                start=mid+1
                
            else:
                end=mid-1
                ans=mid
        return ans
obj=Solution()
list=[1,3,5,6,11]
target=2
print(obj.searchInsert(list,target))

    