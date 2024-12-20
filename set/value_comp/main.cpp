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

struct ModCmp {
    bool operator()(int lhs, int rhs) const {
        return (lhs % 97) < (rhs % 97);
    }
};

int main() {
    std::set<int, ModCmp> cont{1, 2, 3, 4, 5};
    auto comp_func = cont.value_comp();
    for (constexpr int val{100}; const int key: cont)
        {
            const bool before = comp_func(key, val);
            const bool after = comp_func(val, key);
            std::cout << "Key (" << key << ") ";
            if (!before && !after)
                std::cout << "equivalent to key (" << val << ")\n";
            else if (before)
                std::cout << "goes before key (" << val << ")\n";
            else if (after)
                std::cout << "goes after key (" << val << ")\n";
        }
}
