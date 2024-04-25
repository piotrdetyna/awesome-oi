def generate_fibs(k):
    fibs = [0, 1]
    while fibs[-1] <= k:
        fibs.append(fibs[-1] + fibs[-2])
    return fibs

def get_result(k):
    fibs = generate_fibs(k)
    res = 0
    remaining_value = k
    i = len(fibs)-1
    while remaining_value > 0:
        next_smaller_fib, next_bigger_fib = fibs[i-1], fibs[i]
        if remaining_value - next_smaller_fib <= next_bigger_fib - remaining_value:
            remaining_value -= next_smaller_fib
        else:
            remaining_value = next_bigger_fib - remaining_value
        res += 1

        while fibs[i-1] > remaining_value:
            i -= 1
    return res

n = int(input())
for _ in range(n):
    k = int(input())
    num_fibs = get_result(k)
    print(num_fibs)