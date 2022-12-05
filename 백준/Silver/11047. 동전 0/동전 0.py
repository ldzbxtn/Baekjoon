N, K = map(int, input().split())
coin = []
for i in range(N):
    c = int(input())
    coin.append(c)

answer = 0
for i in range(N-1,-1,-1):
    answer += K//coin[i]
    K = K%coin[i]

print(answer)