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
    auto sta1 = stack<int>{};
    cout << "before: " << sta1.empty() << "\n";
    sta1.push(1);
    cout << "after: " << sta1.empty();
    return 0;
}