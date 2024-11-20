#week11-1 Hash Map, Hash Set
table = {} #Python 用大括號代表字典 也就是 Hash Table(Hash Map, Hash Set)
table[9977341] = 9
table[4433997] = 4

print(table[9977341]) #會印出9
print(table[4433997]) #會印出4
#print(table[0]) #糟! 沒有這key，爆炸
if 0 not in table:
  print("table[0]不存在")