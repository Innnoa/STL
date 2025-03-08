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

void print_size(const auto &sta) {
    cout << "size: " << sta.size() << "\n";
}

void print_top(const auto &sta) {
    cout << "top: " << sta.top() << "\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto sta1 = stack<int>{};
    sta1.push(1);
    sta1.push((2));
    sta1.push(3);
    print_size(sta1);
    print_top(sta1);
    sta1.pop();
    print_size(sta1);
    print_top(sta1);
    return 0;
}
