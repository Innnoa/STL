/**
 * ClassName: ${NAME}
 * package: ${PACKAGE_NAME}
 * Description:
 * @Author: innno
 * @Create: 2024/2/27 - 21:54
 * @Version: v1.0
 */
#include <bits/stdc++.h>
using namespace std;

void print_map(const auto &str, const auto &se) {
    auto si = size(se);
    for (cout<<str<<":{";const auto & [key,value]:se)
        {
            cout<<'{'<<key<<','<<value<<(--si?"},":"} ");
        }
    cout << "}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    map<int, int> x{{1, 1}, {2, 2}, {3, 3}}, y, z;
    const auto w = {
        pair<const int, int>
        {4, 4},
        {5, 5},
        {6, 6},
        {7, 7}
    };
    cout << "Initially:\n";
    print_map("x:", x);
    print_map("y:", y);
    print_map("z:", z);
    cout << "y==x:\n";
    y = x;
    print_map("x:", x);
    print_map("y:", y);
    cout << "z==move(x):\n";
    z = move(x);
    print_map("x:", x);
    print_map("z:", z);
    cout << "z=w:\n";
    z = w;
    print_map("z:", z);
    print_map("w:", w);
    return 0;
}
