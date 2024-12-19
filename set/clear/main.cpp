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

void print_set(const auto &str, const auto &se) {
    for (cout << str << ": {"; const auto &i: se)
        {
            cout << i << " ";
        }
    cout << "}\n";
    cout << "size: " << se.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto se = set{1, 2, 3, 4, 5};
    print_set("before: ", se);
    se.clear();
    print_set("clear: ", se);
    return 0;
}
