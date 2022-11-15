N = int(input())
score = list(map(int, input().split()))

maxval = max(score)
print(sum(score)/maxval*100/N)