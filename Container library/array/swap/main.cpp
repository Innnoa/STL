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

template<class Os, class V>
Os &operator<<(Os &os, const V &v) {
    os << '{';
    for (const auto &i: v)
        {
            os << ' ' << i;
        }
    return os << "}";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    array a1{1, 2, 3}, a2{4, 5, 6};
    const auto it1 = a1.begin();
    const auto it2 = a2.begin();
    const auto &ref1 = a1[1];
    const auto &ref2 = a2[1];
    cout << a1 << a2 << *it1 << " " << *it2 << " " << ref1 << " " << ref2 << "\n";
    a1.swap(a2);
    cout << a1 << a2 << *it1 << " " << *it2 << " " << ref1 << " " << ref2 << "\n";
    return 0;
}
