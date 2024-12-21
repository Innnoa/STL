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
    for (cout << str << " "; const auto &i: ma)
        {
            cout << i.first << ": " << i.second << " ";
        }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto ma = map<int, char>{
        {1, 'a'}, {2, 'b'}, {3, 'c'}
    };
    print_map("before:", ma);
    auto nh = ma.extract(1);
    nh.key() = 4;
    print_map("after:", ma);
    ma.insert(move(nh));
    print_map("later", ma);
    return 0;
}
