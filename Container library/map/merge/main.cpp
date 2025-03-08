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
    std::map<int, std::string> ma{{1, "apple"}, {5, "pear"}, {10, "banana"}};
    std::map<int, std::string> mb{{2, "zorro"}, {4, "batman"}, {5, "X"}, {8, "alpaca"}};
    std::map<int, std::string> u;
    u.merge(ma);
    cout << "ma.size(): " << ma.size() << "\n";
    u.merge(mb);
    cout << "ma.size(): " << mb.size() << "\n";
    cout << "mb[5]: " << mb[5] << "\n";
    for (const auto &i: u)
        {
            cout << i.first << " " << i.second << "\n";
        }
    return 0;
}
