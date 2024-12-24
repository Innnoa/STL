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
    auto que1 = queue<int>{};
    que1.push(1);
    que1.push(2);
    que1.push(3);
    que1.push(4);
    auto que2 = que1;
    while (!que2.empty())
        {
            cout << que2.front()<<" ";
            que2.pop();
        }
    return 0;
}
