N = int(input())
P = list(map(int, input().split()))

P.sort()
result = 0
time = 0
for i in range (N):
    time += P[i] 
    result += time 

print(result)