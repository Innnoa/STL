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
    const auto au = {1,2,3,4};
    auto lis = list{4,5,6,7};
#ifdef __cpp_lib_containers_ranges
    lis.assign_range(au);
#else
    lis.assign(au.begin(),au.end());
#endif
    assert(ranges::equal(au,lis));

    return 0;
}