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

namespace stq {
    template<typename T>
    void println(auto, const T &xz) {
        cout << "[";
        bool first{true};
        for (const auto &i: xz)
            {
                cout << (first ? first = false, "" : ", ") << i;
            }
        cout << "]\n";
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector numbers{1, 2, 3};
    stq::println("{}", numbers);
    while (not numbers.empty())
        {
            numbers.pop_back();
            stq::println("{}", numbers);
        }
    return 0;
}
