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

struct S {
    int id;

    S(const int i, const double d, const std::string &s) : id{i} {
        std::cout << "S::S(" << i << ", " << d << ", \"" << s << "\");\n";
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto sta = stack<S>{};
    auto s = sta.emplace(42, 3.14, "c++");
    cout << "id = " << s.id << "\n";
    return 0;
}
