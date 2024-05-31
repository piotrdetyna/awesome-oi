from collections import defaultdict

def longest_common_stutter(a, b):
    a_len, b_len = len(a), len(b)  

    memo = [0] * (b_len+1)
    lcs = [[0] * (b_len + 1) for _ in range(2)]
    prev_a_index = defaultdict(int)
    prev_b_index = defaultdict(int)

    for i in range(1, a_len + 1):
        curr_a = a[i - 1]

        for j in range(1, b_len + 1):
            curr_b = b[j - 1]

            if curr_a == curr_b \
                and prev_a_index[curr_a] > 0 \
                and prev_a_index[curr_a] < i \
                and prev_b_index[curr_b] > 0 \
                and prev_b_index[curr_b] < j:
                lcs[i % 2][j] = memo[prev_b_index[curr_b]] + 2
            lcs[i % 2][j] = max(lcs[i % 2][j], lcs[(i - 1) % 2][j], lcs[i % 2][j - 1])

            prev_b_index[curr_b] = j 
        prev_a_index[curr_a] = i 

        for j in range(1, b_len+1):
            if a[i-1] == b[j-1]:
                memo[j] = lcs[(i-1) % 2][j - 1]
            
    
    return lcs[a_len % 2][b_len]

n, m = map(int, input().split())
a = input().split()
b = input().split()
print(longest_common_stutter(a, b))
