# n = int(input())
# so = list(map(int, input().split()))
# ti = list(map(int, input().split()))
# m = int(input())
# dp = [0]*(m+1)
# for i in range(0, n):
#     for j in range(m,-1,-1):
#         if j>=ti[i]:
#             dp[j] = max(dp[j], dp[j-m[i]]+so[i])
# print(dp[m])
# print(20**20+21**21+22**22+23**23+24**24+25**25)
# print(95/0.8)
# print(105/0.8-95)
# print(750/25.4)
import math
class Solution:
    def find_prime(self, nums):
        ans = []
        for i in nums: 
            flag = True        #
            for j in range(2,int(math.sqrt(i))+1):
                if i%j==0:
                    flag = False;
                    break
            if flag:     
                ans.append(i)
        return ans

if __name__ == "__main__":
    nums = [i for i in range(1000000)]
    so = Solution()
    print(so.find_prime(nums), '\t') # [1, 2, 3, 5, 7]