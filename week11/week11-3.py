class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans,total=0,0 #最大的total 和 目前的total
        counter=Counter()
        for i in range(k): #取出前面k個數字
            num=nums[i]
            counter[num]+=1
            total+=num #把現在的數，加到total
        if len(counter)==k: 
            ans=max(ans,total)

        for i in range(k,len(nums)): #從中間走到最右邊
            left,right=nums[i-k],nums[i]
            counter[left]-=1 #減左邊(舊)
            counter[right]+=1 #加右邊(新)
            total=total-left+right
            if counter[left]==0: del counter[left] #減成0，就刪掉
            if len(counter)==k: ans=max(ans,total)

        return ans