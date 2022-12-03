N, K = map(int, input().split())
T = list(input().rstrip())
answer = 0
for i in range(N):
    if(T[i]=='P'):
        for j in range(i-K, i+K+1):
            if(0<=j<N and T[j]=='H'):
                answer+=1
                T[j]='N'
                break
print(answer)