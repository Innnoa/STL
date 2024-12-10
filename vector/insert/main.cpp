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
    void println(const string_view rem, const vector<int> &container) {
        cout << rem.substr(0, rem.size() - 2) << '[';
        bool first{true};
        for (const auto &i: container)
            {
                cout << (first ? first = false, "" : ", ") << i;
            }
        cout << "]\n";
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector c1(3, 100);
    stq::println("1. {}", c1);
    auto pos = c1.begin();
    pos = c1.insert(pos, 200);
    stq::println("2. {}", c1);
    c1.insert(pos, 2, 300);
    stq::println("3, {}", c1);
    pos = c1.begin();
    vector c2{2, 400};
    c1.insert(next(pos, 2), c2.begin(), c2.end());
    stq::println("4. {}", c1);
    int arr[] = {501, 502, 503};
    c1.insert(c1.begin(), arr, arr + size(arr));
    stq::println("5. {}", c1);
    c1.insert(c1.end(), {601, 602, 603});
    stq::println("c. {}", c1);
    return 0;
}
