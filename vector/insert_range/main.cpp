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
    auto container = vector{1,2,3,4};
    auto pos = next(container.begin(),2);
    assert(*pos == 3);
    const auto rg = list{-1,-2,-3};
#ifdef __cpp_lib_containers_ranges
    container.insert_range(pos, rg);
#else
    container.insert(pos, rg.cbegin(), rg.cend());
#endif
    assert(std::ranges::equal(container, std::vector{1, 2, -1, -2, -3, 3, 4}));
    return 0;
}