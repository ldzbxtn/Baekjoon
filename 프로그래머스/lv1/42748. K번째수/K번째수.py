def solution(array, commands):
    answer = []
    for i in range(len(commands)):
        c = commands[i]
        a = array[c[0]-1:c[1]]
        a.sort()
        answer.append(a[c[2]-1])
    return answer