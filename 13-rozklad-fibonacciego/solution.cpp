#include <iostream>
#include <vector>

using namespace std;

vector<long long> generate_fibs(long long k) {
    vector<long long> fibs = {0, 1};
    while (fibs[fibs.size() - 1] <= k) {
        long long new_fib = fibs[fibs.size() - 1] + fibs[fibs.size() - 2];
        fibs.push_back(new_fib);
    }
    return fibs;
}

int get_result(long long k) {
    vector<long long> fibs = generate_fibs(k);
    long long remaining_value = k;
    int res = 0, i = fibs.size()-1;

    while (remaining_value > 0) {
        long long next_smaller_fib = fibs[i-1], next_bigger_fib = fibs[i];
        if (remaining_value - next_smaller_fib <= next_bigger_fib - remaining_value) 
            remaining_value -= next_smaller_fib;
        else
            remaining_value = next_bigger_fib - remaining_value;
        res++;

        while(fibs[i-1] > remaining_value)
            i--;
    }

    return res;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        long long k;
        cin >> k;
        int res = get_result(k);
        cout << res << '\n';
    }

    return 0;
}