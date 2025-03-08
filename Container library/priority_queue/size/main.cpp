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
    auto pq = priority_queue<int>{};
    pq.push(1);
    cout << "before: " << pq.size() << "\n";
    pq.push(2);
    cout << "after: " << pq.size() << "\n";
    return 0;
}
