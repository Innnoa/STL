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

std::ostream &operator<<(std::ostream &os, std::forward_list<int> const &container) {
    for (int val: container)
        os << val << ' ';
    return os << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto for_lis = forward_list{1, 1, 3, 4, 5, 5, 6, 8, 2, 2};
    cout << "before:" << for_lis;
    const auto count1 = for_lis.unique();
    cout << "after unique:" << for_lis << "count: " << count1;
    for_lis = {12, 2, 45, 5, 77, 3, 7, 2, 8, 18};
    cout << "before :" << for_lis;
    const auto count2 = for_lis.unique([mod=10](int x, int y) { return (x % mod) == (y % mod); });
    cout<<"after: "<<for_lis<<"count:"<<count2;
    return 0;
}
