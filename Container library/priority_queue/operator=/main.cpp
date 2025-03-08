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
    auto print_pq = [](auto &pq) {
        for (; !pq.empty(); pq.pop())
            {
                cout << pq.top() << " ";
            }
        cout << "\n";
    };
    auto pq1 = priority_queue<int>{};
    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    print_pq(pq1);
    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    auto pq2 = pq1;
    print_pq(pq1);
    print_pq(pq2);
    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    auto pq3 = move(pq1);
    print_pq(pq1);
    print_pq(pq3);
}
