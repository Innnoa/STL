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
    auto pq1 = priority_queue<int>{};
    pq1.push(5);
    cout << "pq1: " << pq1.size() << "\n";
    auto pq2 = priority_queue{pq1};
    cout << "pq2: " << pq2.size() << "\n";
    auto vec = vector<int>{1, 2, 3, 4, 5};
    auto pq3 = priority_queue<int>{less<int>(), vec};
    cout << "pq3 size: " << pq3.size() << "\n";
    for (cout << "pq3: "; !pq3.empty(); pq3.pop())
        {
            cout << pq3.top();
        }
    cout << "\n";
    using my_value_t = complex<double>;
    using my_container_t = vector<my_value_t>;
    auto my_comp = [](const my_value_t &z1, const my_value_t &z2) {
        return z2.real() < z1.real();
    };
    auto pq4 = priority_queue<my_value_t, my_container_t, decltype(my_comp)>{my_comp};
    using namespace complex_literals;
    pq4.push(5.0 + 1i);
    pq4.push(3.0 + 2i);
    pq4.push(7.0 + 3i);
    for (; !pq4.empty(); pq4.pop())
        {
            const auto &z = pq4.top();
            cout << "pq4.top() = " << z << "\n";
        }
    return 0;
}
