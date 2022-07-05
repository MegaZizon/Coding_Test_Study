def solution(x, n):
    answer = []
    hap=x

    for i in range (0,n):
        answer.append(hap)
        hap+=x
        
    return answer

