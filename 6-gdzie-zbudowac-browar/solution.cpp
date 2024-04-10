#include <iostream>
#include <vector>

using namespace std;

long long get_left_index(long long index, long long n) {
    return (index - 1) % n;
}

long long get_right_index(long long index, long long n) {
    return (index + 1) % n;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    vector<long long> distances(n);
    vector<long long> demands(n);
    for (long long i = 0; i < n; i++) {
        cin >> demands[i] >> distances[i];
    }

    vector<long long> l_costs(n);
    long long l_distance = 0;

    for (long long i=n-1; i>0; i--) {
        l_distance += distances[i];
        l_costs[i] = l_distance * demands[i];
    }

    vector<long long> r_costs(n);
    long long r_distance = 0;
    for (long long i=1; i<n; i++) {
        r_distance += distances[i-1];
        r_costs[i] = r_distance * demands[i];
    }

    long long cost = 0;
    l_distance = 0;
    r_distance = 0;
    long long r_demand = 0, l_demand = 0;
    long long max_l_city = -1, max_r_city = -1;

    for (long long i=1; i<n; i++) {
        if (l_costs[i] < r_costs[i]) {
            cost += l_costs[i];
            l_demand += demands[i];
            l_distance += distances[i];
            if (max_l_city == -1)
                max_l_city = i;
        } else {
            cost += r_costs[i];
            r_demand += demands[i];
            r_distance += distances[i-1];
            max_r_city = i;
        }
    }

    long long best_cost = cost;

    for (long long brewery_city=1; brewery_city<n; brewery_city++) {
        long long distance = distances[brewery_city-1];

        cost -= r_demand * distance;
        cost += (l_demand + demands[brewery_city-1]) * distance;
        
        r_demand -= demands[brewery_city];
        l_demand += demands[brewery_city-1];

        r_distance -= distance;
        l_distance += distance;

        while (true) {
            long long old_cost = cost;
            cost += (r_distance + distances[max_r_city]) * demands[max_l_city];
            cost -= demands[max_l_city] * l_distance;

            if (cost >= old_cost) {
                cost = old_cost;
                break;
            }

            r_demand += demands[max_l_city];
            l_demand -= demands[max_l_city];

            r_distance += distances[max_r_city];
            l_distance -= distances[max_l_city];

            max_r_city = get_right_index(max_r_city, n);
            max_l_city = get_right_index(max_l_city, n);
        }
        best_cost = min(best_cost, cost);
    }
    cout << best_cost;

    return 0;
}

