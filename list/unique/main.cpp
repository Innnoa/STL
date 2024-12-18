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

ostream &operator<<(ostream &os, const list<int> &container) {
    for (int val: container)
        os << val << ' ';
    return os << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis = list{1, 2, 3, 4, 1, 2, 7, 7, 7, 2, 3, 3};
    cout << "before:" << lis;
    const auto count1 = lis.unique();
    cout << "after:" << lis << "remove elements:" << count1;
    auto lis1 = list{1, 2, 12, 23, 3, 2, 51, 1, 2, 2};
    cout << "\nbefore:" << lis1;
    const auto count2 = lis1.unique([mod=10](int x, int y) { return (x % mod) == (y % mod); });
    cout<<"after:"<<lis1<<"remove elements:"<<count2;
    return 0;
}
