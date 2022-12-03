S, P = map(int, input().split())
pw = input()
A, C, G, T = map(int, input().split())
answer = 0
K = [0]*4
for i in range(P):
    if(pw[i]=='A'):
        K[0] += 1
    elif(pw[i]=='C'):
        K[1] += 1
    elif(pw[i]=='G'):
        K[2] += 1
    elif(pw[i]=='T'):
        K[3] += 1
        
if(K[0]>=A and K[1]>=C and K[2]>=G and K[3]>=T):
    answer += 1
    
for i in range(P,S):
    if(pw[i]=='A'):
        K[0] += 1
    elif(pw[i]=='C'):
        K[1] += 1
    elif(pw[i]=='G'):
        K[2] += 1
    elif(pw[i]=='T'):
        K[3] += 1
    if(pw[i-P] == 'A'):
        K[0] -= 1
    elif(pw[i-P]=='C'):
        K[1] -= 1
    elif(pw[i-P]=='G'):
        K[2] -= 1
    elif(pw[i-P]=='T'):
        K[3] -= 1
    if(K[0]>=A and K[1]>=C and K[2]>=G and K[3]>=T):
        answer += 1
print(answer)        