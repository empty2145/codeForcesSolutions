#include <iostream>
#include <string>
using namespace std;

int quadratise(int x) {
    int sum = 0;
    while (x > 0) {
        int dig = x % 10;
        sum += dig * dig;
        x /= 10;
    }
    return sum;

} 

void solve() {
    int lighth = 0;
    cin >> lighth;
    int cache = 0;
    int counter = 0;
    for (int i = 0; i < lighth; i++) {
        int number = 0;
        cin >> number;
        if (number == cache) {
            counter++;
        } else {
            cache == number;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int test = 0;
    cin >> test;
    for (int i = 0; i < test; i++) {
        solve();
    }
    return 0;
}