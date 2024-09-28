

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while(t--) {
        int n, s, m;
        cin >> n >> s >> m;  

        vector<pair<int, int>> tasks(n);
        
        for(int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            tasks[i] = {l, r};
        }
        
        sort(tasks.begin(), tasks.end());

        bool canShower = false;

        if (tasks[0].first >= s) {
            canShower = true;
        }

        for (int i = 1; i < n && !canShower; i++) {
            int gap = tasks[i].first - tasks[i - 1].second;
            if (gap >= s) {
                canShower = true;
            }
        }

        if ((m - tasks[n - 1].second) >= s) {
            canShower = true;
        }

        if (canShower) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
