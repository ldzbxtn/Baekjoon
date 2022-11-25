def solution(k, m, score):
    score.sort(reverse = True)
    answer = 0
    for i in range(len(score)//m):
        arr = score[i*m:i*m+m]
        answer += arr[-1]*m
    return answer