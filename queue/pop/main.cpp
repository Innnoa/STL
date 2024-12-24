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
    auto que = queue<int>{};
    que.push(1);
    que.push(2);
    que.push(3);
    while (!que.empty())
        {
            cout << que.front() << " ";
            que.pop();
        }
    return 0;
}
