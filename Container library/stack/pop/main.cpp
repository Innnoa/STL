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

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    const auto vec = vector{1, 2, 3, 4, 5};
    auto sta = stack{vec};
    cout << "before: " << sta.top() << "\n";
    sta.pop();
    cout << "after: " << sta.top() << "\n";
    return 0;
}
