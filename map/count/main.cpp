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
    auto ma = map{pair{1, 4}, {4, 5}, {6, 7}, {3, 3}};
    cout << "count iter 1 :" << ma.count(1) << "\n";
    cout << "count iter 1025 :" << ma.count(1025) << "\n";
    return 0;
}
