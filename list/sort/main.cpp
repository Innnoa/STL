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

ostream &operator<<(ostream &ostr, const list<int> &list) {
    for (const int i: list)
        ostr << ' ' << i;
    return ostr;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis = list{2, 4, 11, 5, 6, 2, 3, 7, 1, 23, 1};
    cout << "before:" << lis << "\n";
    lis.sort();
    cout << "after:" << lis << "\n";
    lis.sort(greater<>());
    cout << "after:" << lis << "\n";
    return 0;
}
