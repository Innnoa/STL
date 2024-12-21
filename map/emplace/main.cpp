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
    auto ma = map<string, string>{};
    ma.emplace(make_pair(string("a"), string("a")));
    ma.emplace(make_pair("b", "abcd"));
    ma.emplace("d", "ddd");
    ma.emplace("d", "DDD");
    ma.emplace(piecewise_construct, forward_as_tuple("c"), forward_as_tuple(10, 'c'));
    for (const auto &i: ma)
        {
            cout << i.first << ": " << i.second << "\n";
        }
    return 0;
}
