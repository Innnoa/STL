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
    for (cout << str << " :"; const auto &i: se)
        {
            cout << i << " ";
        }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto se = set{1, 2, 3, 4};
    const auto li = {6, 7, 8, 9};
#ifdef __cpp_lib_containers_ranges
    se.insert_range(li);
#else
    se.insert(li.begin(),li.end());
#endif
    print_set("se",se);
    return 0;
}
