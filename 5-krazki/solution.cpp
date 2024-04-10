#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<int> pipe(n+1);
    vector<int> disks(m+1);
    vector<int> minimums(n+1);
    minimums[0] = 1000000001;

    // 5 6 4 3 6 2 3 <- pipe
    // 5 5 4 3 3 2 2 <- minimums
    for (int i = 1; i <= n; i++) {
        cin >> pipe[i];
        minimums[i] = min(minimums[i-1], pipe[i]);
    }

    for (int i=0; i<m; i++) {
        cin >> disks[i];
    }

    int last_disk_position = n+1;
    for (int i=0; i<m; i++) {
        int curr_disk = disks[i];

        // Find next cylinder which is smaller than current disk
        // starting from last disk's position and going up
        int curr_cylinder_index = last_disk_position - 1;
        while (curr_cylinder_index > 0 && minimums[curr_cylinder_index] < curr_disk) 
            curr_cylinder_index--;

        last_disk_position = curr_cylinder_index;
        if (last_disk_position == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << last_disk_position;

    return 0;
}
