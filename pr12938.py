def solution(n,s):
    if s< n:
        return [-1]

    answer=[]
    q, r= divmod(s,n)

    return [q] * (n-r) + [q+1] * r