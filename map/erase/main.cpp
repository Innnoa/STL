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
    auto ma = map<int, string>{
        {1, "one"}, {2, "two"}, {3, "three"},
        {4, "four"}, {5, "five"}, {6, "six"}
    };
    for (auto it = ma.begin(); it != ma.end();)
        {
            if (it->first % 2 != 0)
                {
                    it = ma.erase(it);
                } else
                {
                    ++it;
                }
        }
    for (const auto &val: ma | views::values)
        {
            cout << val << " ";
        }
    return 0;
}
