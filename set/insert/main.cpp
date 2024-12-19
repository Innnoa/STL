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
    set<int> set;
    auto result_1 = set.insert(3);
    assert(result_1.first!=set.end());
    assert(*result_1.first == 3);
    if (result_1.second)
        {
            cout << "insert done\n";
        }
    auto result_2 = set.insert(3);
    //assert(result_1.first == result_2.first);
    //assert(*result_2.first == 3);
    cout << "result_1.first: " << *result_1.first << " result_1.second: " << result_1.second << "\n";
    cout << "result_2.first: " << *result_2.first << " result_2.second: " << result_2.second << "\n";
    if (!result_2.second)
        {
            cout << "no insertion";
        }
    return 0;
}
