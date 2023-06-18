def conflict(state, nextX):    
    nextY = len(state)
    return any(abs(state[i] - nextX) in (0, nextY - i) for i in range(nextY))

def queens(n, state=()):
    if len(state) == n: 
        return [()]
    ans = []
    for pos in range(n):
        if not conflict(state, pos):
            ans += [(pos,)+ result for result in queens(n, state + (pos,))]
    return ans

print(queens(8))