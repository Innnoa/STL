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
    auto se = set{1, 2, 3, 4, 5, 6, 7, 8};
    auto print_set = [&se]() {
        cout << "se={";
        for (const auto &i: se)
            {
                cout << i << " ";
            }
        cout << "}\n";
    };
    print_set();
    cout << "erase some :\n";
    for (auto it = se.begin(); it != se.end();)
        {
            if (*it % 2 != 0)
                {
                    it = se.erase(it);
                } else
                {
                    ++it;
                }
        }
    print_set();
    std::cout << "Erase 1, erased count: " << se.erase(1) << '\n';
    std::cout << "Erase 2, erased count: " << se.erase(2) << '\n';
    std::cout << "Erase 2, erased count: " << se.erase(2) << '\n';
    print_set();
    return 0;
}
