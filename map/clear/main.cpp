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

void print_map(const auto &str, const auto &ma) {
    for (cout << str << ":{\n"; const auto &[key,value]: ma)
        {
            cout << "{" << key << " " << value << "}\n";
        }
    cout << "}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto ma = map<int, int>{{1, 3}, {2, 4}, {3, 6}};
    print_map("before: ", ma);
    ma.clear();
    print_map("after: ", ma);
    return 0;
}
