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
    auto for_lis = forward_list{1, 2, 3, 4, 5};
    auto for_lis_1 = forward_list{"apple", "egg"};
    auto for_lis_2 = forward_list<int>{};
    for_each(for_lis.begin(), for_lis.end(), [](const int x) { cout << x << " "; });
    cout << "\n";
    cout << "sum: \n";
    cout << accumulate(for_lis.begin(), for_lis.end(), 0) << "\n";
    if (!for_lis_1.empty())
        {
            cout << *for_lis_1.begin();
        }
    cout << "\n";
    if (for_lis_2.begin() == for_lis_2.end())
        {
            cout << "its empty";
        }

    return 0;
}
