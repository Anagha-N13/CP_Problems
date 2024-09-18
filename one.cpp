#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int X = 0;
    
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        
        // Check if the statement contains "++" or "--"
        if (s.find("++") != '\0') {
            X++;  // Increment X
        } else if (s.find("--") != '\0') {
            X--;  // Decrement X
        }
    }
    
    cout << X << endl;  // Output the final value of X
    
    return 0;
}
