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

template<class Os, class U, class V>
Os &operator<<(Os &os, const pair<U, V> &p) {
    return os << p.first << ":" << p.second;
}

template<class Os, class Co>
Os &operator<<(Os &os, Co &co) {
    os << "{";
    for (const auto &i: co)
        {
            os << i << " ";
        }
    return os << " }\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    map<string, string>
            m1{{"¦Ã", "gamma"}, {"¦Â", "beta"}, {"¦Á", "alpha"}, {"¦Ã","gamma"}},
            m2{{"¦Å", "epsilon"}, {"¦Ä", "delta"}, {"¦Å", "epsilon"}};
    const auto &ref = *(m1.begin());
    const auto iter = next(m1.cbegin());

    std::cout << "©¤©¤©¤©¤©¤©¤©¤©¤ before swap ©¤©¤©¤©¤©¤©¤©¤©¤\n"
            << "m1: " << m1 << "m2: " << m2 << "ref: " << ref
            << "\niter: " << *iter << '\n';

    m1.swap(m2);

    std::cout << "©¤©¤©¤©¤©¤©¤©¤©¤ after swap ©¤©¤©¤©¤©¤©¤©¤©¤\n"
            << "m1: " << m1 << "m2: " << m2 << "ref: " << ref
            << "\niter: " << *iter << '\n';
    return 0;
}
