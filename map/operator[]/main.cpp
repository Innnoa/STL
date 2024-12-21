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
    for (cout << str << ": "; const auto &pair: ma)
        {
            cout << "{" << pair.first << ": " << pair.second << "}";
        }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto map1 = map<char, int>{{'a', 1}, {'b', 2}, {'c', 3}};
    print_map("map1: ", map1);
    map1['a'] = 42;
    map1['c'] = 66;
    print_map("after map1: ", map1);
    auto map2 = map<string, int>{};
    for (const auto &i: {
             "where",
             "you", "are", "where", "you", "zjy", "hhh"
         })
        {
            map2[i]++;
        }
    map2["hzj"];
    print_map("map2:", map2);
    return 0;
}
