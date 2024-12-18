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
    os << '{';
    for (auto const &i: co)
        os << ' ' << i;
    return os << " } ";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    forward_list<int> for_lis1{1,2,3}, for_lis2{4,5};
    auto it1 = next(for_lis1.begin());
    auto it2 = next(for_lis2.begin());
    int &ref1 = for_lis1.front();
    int &ref2 = for_lis2.front();
    std::cout << for_lis1 << for_lis2 << *it1 << ' ' << *it2 << ' ' << ref1 << ' ' << ref2 << '\n';
    for_lis1.swap(for_lis2);
    std::cout << for_lis1 << for_lis2 << *it1 << ' ' << *it2 << ' ' << ref1 << ' ' << ref2 << '\n';
    return 0;
}
