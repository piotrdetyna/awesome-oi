#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int PRIMES[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
vector<pair<int, int>> candidates;

int get_biggest_antiprime(vector<pair<int, int>>& candidates);
void generate_antiprime_candidates(
    int prime_i, 
    int max_exponent,
    int candidate,
    int candidate_dividers,
    int n
);

int main() {
    int n;
    cin >> n;
    generate_antiprime_candidates(0, 31, 1, 1, n);
    int res = get_biggest_antiprime(candidates);
    cout << res << endl;
    return 0;
}


int get_biggest_antiprime(vector<pair<int, int>>& candidates) {
    // sort candidates based on their value (first element of the pair)
    sort(candidates.begin(), candidates.end(), 
        [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });
    
    // choice biggest candidate with bigger number of dividers (second element of the pair)
    // than every smaller candidate
    pair<int, int> best_candidate = {0, 0};
    for (pair<int, int> candidate : candidates) {
        if (candidate.second > best_candidate.second) {
            best_candidate = candidate;
        }
    }
    return best_candidate.first;
}


void generate_antiprime_candidates(
    int prime_i, 
    int max_exponent,
    int candidate,
    int candidate_dividers,
    int n 
) {

    candidates.push_back(make_pair(candidate, candidate_dividers));
    for (int curr_exponent=1; curr_exponent<=max_exponent; curr_exponent++) {
        if (PRIMES[prime_i] > (n/candidate)) // PRIMES[prime_i] * candidate > n
            return; 
        candidate *= PRIMES[prime_i];

        generate_antiprime_candidates(
            prime_i+1, // go to the next prime number in PRIME array
            curr_exponent,
            candidate,
            candidate_dividers * (curr_exponent+1),
            n
        );

    }
}

