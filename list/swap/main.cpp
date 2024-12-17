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

template<class Os,class Co>
Os& operator<<(Os& os,const Co& co) {
    os<<"{";
    for (const auto & i:co)
        {
            os<<" "<<i;
        }
    return os<<" }";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    list lis{1,2,3,4},lis1{5,6,7};
    auto it =next(lis.begin());
    auto it1 = next (lis1.begin());
    int& ref1 = lis.front();
    int& ref2 = lis.front();

    std::cout << lis << lis1 << *it << ' ' << *it1 << ' ' << ref1 << ' ' << ref2 << '\n';
    lis.swap(lis1);
    std::cout << lis << lis1 << *it << ' ' << *it1 << ' ' << ref1 << ' ' << ref2 << '\n';
    return 0;
}