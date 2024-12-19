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

template<class Os, class Co>
Os &operator<<(Os &os, const Co &co) {
    os << "{";
    for (const auto &i: co)
        {
            os << " " << i;
        }
    return os << " }";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    set<int> se1{1, 2, 3, 4, 5, 6}, se2{6, 7, 3, 3, 4, 1};
    auto it1 = next(se1.begin());
    auto it2 = next(se2.begin());
    const int &ref1 = *(se1.begin());
    const int &ref2 = *(se2.begin());
    std::cout << se1 << se2 << *it1 << ' ' << *it2 << ' ' << ref1 << ' ' << ref2 << '\n';
    se1.swap(se2);
    std::cout << se1 << se2 << *it1 << ' ' << *it2 << ' ' << ref1 << ' ' << ref2 << '\n';
    return 0;
}
