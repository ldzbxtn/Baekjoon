import sys
input = sys.stdin.readline

N, M = map(int, input().split())
nums = list(map(int, input().split()))
sumlist = [0]
s = 0
for k in nums:
    s += k
    sumlist.append(s)

for k in range(M):
    i, j = map(int, input().split())
    print(int(sumlist[j]-sumlist[i-1]))