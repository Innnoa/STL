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
    int sz = 100;
    std::vector<int> v;

    auto cap = v.capacity();
    std::cout << "Initial size: " << v.size() << ", capacity: " << cap << '\n';

    std::cout << "\nDemonstrate the capacity's growth policy."
                 "\nSize:  Capacity:  Ratio:\n" << std::left;
    while (sz-- > 0)
        {
            v.push_back(sz);
            if (cap != v.capacity())
                {
                    std::cout << std::setw( 7) << v.size()
                              << std::setw(11) << v.capacity()
                              << std::setw(10) << v.capacity() / static_cast<float>(cap) << '\n';
                    cap = v.capacity();
                }
        }

    std::cout << "\nFinal size: " << v.size() << ", capacity: " << v.capacity() << '\n';
    return 0;
}