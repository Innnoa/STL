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
    bool operator()(const int lhs, const int rhs) const
    {
        return (lhs % 97) < (rhs % 97);
    }
};

int main()
{
    std::map<int, char, ModCmp> cont = {{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}};

    auto comp_func = cont.value_comp();
 
    for (constexpr std::pair<int, char> val = {100, 'a'}; auto it : cont)
        {
            const bool before = comp_func(it, val);
            const bool after = comp_func(val, it);

            std::cout << '(' << it.first << ',' << it.second << ") ";
            if (!before && !after)
                std::cout << "equivalent to key (" << val.first << ")\n";
            else if (before)
                std::cout << "goes before key (" << val.first << ")\n";
            else if (after)
                std::cout << "goes after key (" << val.first << ")\n";
        }
}