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

struct ModCmp
{
    bool operator()(int lhs, int rhs) const
    {
        return (lhs % 97) < (rhs % 97);
    }
};

int main()
{
    std::set<int, ModCmp> cont{1, 2, 3, 4, 5};

    auto comp_func = cont.key_comp();

    for (const int key : cont)
        {
            const bool before = comp_func(key, 100);
            const bool after = comp_func(100, key);

            std::cout << '(' << key << ") ";
            if (!before && !after)
                std::cout << "equivalent to key (100)\n";
            else if (before)
                std::cout << "goes before key (100)\n";
            else if (after)
                std::cout << "goes after key (100)\n";
        }
}
