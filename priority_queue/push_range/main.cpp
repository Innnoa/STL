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

void print_pq(const auto &str, auto pq) {
    cout << str << ": \n";
    for (; !pq.empty(); pq.pop())
        {
            cout << pq.top() << " ";
        }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto pq = priority_queue<int>{};
    const auto lis = {1, 2, 3, 4, 5, 6};
#ifdef __cpp_lib_containers_ranges
    pq.push_range(li);
#else
    ranges::for_each(lis, [&pq](auto e) { pq.push(e); });
#endif
    print_pq("all: ", pq);
    return 0;
}
