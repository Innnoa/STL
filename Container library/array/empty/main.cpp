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
    constexpr array numbers{3, 1, 4, 1};
    constexpr array<int, 0> no_numbers{};
    cout << boolalpha;
    cout << "numbers.empty(): " << numbers.empty() << "\n";
    cout << "no_numbers.empty(): " << no_numbers.empty() << "\n";
    return 0;
}
