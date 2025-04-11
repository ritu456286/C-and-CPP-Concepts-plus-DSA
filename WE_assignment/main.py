# def solve(total: int) -> int:
#     original = total
#     total = total + 1
#     step = 1
#     count = 0

#     while total >= step:
#         count += 1
#         total -= step
#         step += 1

#     return original + 1 - count
# print(solve(4))

from typing import List

def can_spend_time(M: int, A: List[List[int]], index: int, current_time: int, used: List[bool]) -> bool:
    if current_time >= M:
        return True
    
    for i in range(len(A)):
        if not used[i]:
            for j in range(1, 4):
                start_time = A[i][j]
                end_time = start_time + A[i][0]
                if start_time <= current_time < end_time:
                    used[i] = True
                    if can_spend_time(M, A, i, end_time, used):
                        return True
                    used[i] = False
    return False

def solve(N: int, M: int, A: List[List[int]]) -> str:
    used = [False] * N
    return "YES" if can_spend_time(M, A, 0, 0, used) else "NO"

# print(solve(4, 120, [[60, 10, 60, 100], [30, 0, 50, 90], [20, 0, 20, 40], [50, 50, 70, 110]]))

# print(solve(4, 120, [[50, 30, 60, 100]]))

def solve(N, D, P, S):
    ants = sorted(zip(P, S), reverse=True)  
    colonies = 0
    min_time = -1  

    for pos, speed in ants:
        time_to_reach = (D - pos) / speed  
        if time_to_reach > min_time:  
            colonies += 1
            min_time = time_to_reach 
    return colonies