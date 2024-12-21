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

void print_map(const auto &node) {
    cout << '[' << node.first << "] = " << node.second << "\n";
}

void print_result(auto const &pair) {
    cout << (pair.second ? "inserted: " : "assigned: ");
    print_map(*pair.first);
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto myapp = map<string, string>{};
    print_result(myapp.insert_or_assign("a","apple"));
    print_result(myapp.insert_or_assign("b", "banana"));
    print_result(myapp.insert_or_assign("c", "cherry"));
    print_result(myapp.insert_or_assign("c", "clementine"));
    for (const auto & i:myapp)
        {
            print_map(i);
        }
    return 0;
}
