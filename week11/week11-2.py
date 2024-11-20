#weej11-2.py
nums = [1,1,1,2,3] #輸入資料

from collections import Counter #進階資料結構Hash Map 用來計算出現幾次
counter = Counter()
for num in nums:
  counter[num] += 1

print(counter) #印出統計的結果