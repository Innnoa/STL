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

struct Modcmp {
    bool operator()(const int lhs, const int rhs) const {
        return (lhs % 97) < (rhs % 97);
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    map<int, char, Modcmp> cont = {{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}};
    auto comp_func = cont.key_comp();
    for (const auto it: cont)
        {
            const auto before = comp_func(it.first, 100);
            const auto after = comp_func(100, it.first);
            std::cout << "Key (" << it.first << ',' << it.second << ") ";
            if (!before && !after)
                std::cout << "equivalent to key (100)\n";
            else if (before)
                std::cout << "goes before key (100)\n";
            else if (after)
                std::cout << "goes after key (100)\n";
        }
    return 0;
}
