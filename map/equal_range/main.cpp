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

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    const map<int, const char *> m{
        {0, "zero"},
        {1, "one"},
        {2, "two"}
    };
    auto p = m.equal_range(1);
    for (auto &i = p.first; i != p.second; ++i)
        {
            std::cout << "m[" << i->first << "] = " << i->second << '\n';
        }
    if (p.second == m.find(2))
        {
            std::cout << "end of equal_range (p.second) is one-past p.first\n";
        } else
        {
            std::cout << "unexpected; p.second expected to be one-past p.first\n";
        }
    auto pp = m.equal_range(-1);
    if (pp.first == m.begin())
        {
            std::cout << "pp.first is iterator to first not-less than -1\n";
        } else
        {
            std::cout << "unexpected pp.first\n";
        }
    if (pp.second == m.begin())
        {
            std::cout << "pp.second is iterator to first element greater-than -1\n";
        } else
        {
            std::cout << "unexpected pp.second\n";
        }
    auto ppp = m.equal_range(3);
    if (ppp.first == m.end())
        {
            std::cout << "ppp.first is iterator to first not-less than 3\n";
        } else
        {
            std::cout << "unexpected ppp.first\n";
        }
    if (ppp.second == m.end())
        {
            std::cout << "ppp.second is iterator to first element greater-than 3\n";
        } else
        {
            std::cout << "unexpected ppp.second\n";
        }
    return 0;
}
