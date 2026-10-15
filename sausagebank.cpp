#include <iostream>
#include <string>

using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    cout << (k-1)*2+2**(n-k+1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}