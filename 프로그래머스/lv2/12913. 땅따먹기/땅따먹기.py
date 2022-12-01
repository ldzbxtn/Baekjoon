def solution(land):
    answer = 0
    for i in range(1, len(land)):
        for j in range(4):
            a, b, c = [jj for jj in range(4) if jj != j]
            land[i][j] += max(land[i-1][a], land[i-1][b], land[i-1][c])
    return max(land[-1])