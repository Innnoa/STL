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

namespace zjy {
    void print_list(const auto &str, const auto &lis) {
        bool first{true};
        for (cout << str << ":{\n"; const auto &i: lis)
            {
                cout << (first ? first = false, " " : ",") << i;
            }
        cout << "}\n";
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis = list{1, 2, 3, 4};
    cout << "all:\n";
    zjy::print_list("first", lis);
    while (!lis.empty())
        {
            lis.pop_back();
            zjy::print_list("some", lis);
        }

    return 0;
}
