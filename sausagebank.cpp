#include <iostream>
#include <string>

using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    cout << (k-1)*2+(1LL << (n - k + 1)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tests = 0;
    cin >> tests;
    for (int i = 0; i < tests; i++) {
        solve();
    }
    return 0;
}