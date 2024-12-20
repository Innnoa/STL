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

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto se = set {1,2,3,4,5};
    while (se.lower_bound(3) != se.end())
        {
            se.erase(se.lower_bound(3));
        }
    for (const auto & i:se)
        {
            cout<<i<<" ";
        }
    return 0;
}