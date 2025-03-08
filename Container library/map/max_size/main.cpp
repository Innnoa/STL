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
    auto map1 = map<int, int>{};
    auto map2 = map<int, double>{};
    std::cout << std::uppercase
            << "p.max_size() = " << std::dec << map1.max_size() << " = 0x"
            << std::hex << map2.max_size() << '\n'
            << "q.max_size() = " << std::dec << map1.max_size() << " = 0x"
            << std::hex << map2.max_size() << '\n';
    return 0;
}
