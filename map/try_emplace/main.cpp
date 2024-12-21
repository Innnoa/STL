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

void print_node(const auto &node) {
    cout << '[' << node.first << "] = " << node.second << "\n";
}

void print_result(const auto &pair) {
    cout << (pair.second ? "inserted: " : "ignored: ");
    print_node(*pair.first);
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    using namespace literals;
    map<string, string> m;
    print_result(m.try_emplace("a", "a"));
    print_result(m.try_emplace("b", "abcd"));
    print_result(m.try_emplace("c", 10, 'c'));
    print_result(m.try_emplace("c", "Won't be inserted"));
    for (const auto &i: m)
        {
            print_node(i);
        }
    return 0;
}
