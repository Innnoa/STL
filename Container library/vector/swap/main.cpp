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
    return os << "}";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector a1{1, 2, 3}, a2{4, 5};
    const auto it1 = next(a1.begin());
    const auto it2 = next(a2.begin());
    const auto & ref1 = a1.front();
    const auto & ref2 = a2.front();
    cout<<a1<<a2<<*it1<<" "<<*it2<<" "<<ref1<<" "<<ref2<<" "<<"\n";
    a1.swap(a2);
    cout<<a1<<a2<<*it1<<" "<<*it2<<" "<<ref1<<" "<<ref2<<" "<<"\n";
    return 0;
}
