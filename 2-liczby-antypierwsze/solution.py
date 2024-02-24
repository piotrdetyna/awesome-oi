PRIMES = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41]

def generate_antiprime_candidates(
        prime_i, 
        max_exponent, 
        candidate, 
        candidate_dividers
    ):

    candidates.append((candidate, candidate_dividers))
    for i in range(1, max_exponent+1):
        if PRIMES[prime_i] * candidate > n:
            return
        
        candidate *= PRIMES[prime_i]
        generate_antiprime_candidates(
            prime_i+1, 
            i, 
            candidate, 
            candidate_dividers * (i+1)
        )


def get_biggest_antiprime(candidates):
    candidates = [(1, 1), (1, 3), (3, 2), (4, 5)]
    candidates.sort(key=lambda x: x[0])
    best_candidate = (0, 0)
    for candidate in candidates:
        best_candidate = max([candidate, best_candidate], key=lambda x: x[1])

    return best_candidate[0]


n = int(input())
candidates = []
generate_antiprime_candidates(0, 31, 1, 1)

res = get_biggest_antiprime(candidates)
print(res)
