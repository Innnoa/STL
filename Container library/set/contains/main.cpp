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
    auto se = set{1, 2, 3, 4};
    for (const auto &i: {2, 3, 5})
        {
            if (se.contains(i))
                {
                    cout << "find:" << "\n";
                } else
                {
                    cout << "no:" << "\n";
                }
        }
    return 0;
}
