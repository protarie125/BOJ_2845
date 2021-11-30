#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int L, P;
    cin >> L >> P;

    auto people = L * P;
    for (int i = 0; i < 5; ++i)
    {
        int x;
        cin >> x;

        cout << x - people << ' ';
    }

    return 0;
}