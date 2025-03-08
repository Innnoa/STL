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
    auto lis = list {1,2,3,4};
    auto pos = next(lis.begin(),2);
    const auto vec = vector<int>{4,4,4};
#ifdef __cpp_lib_containers_ranges
    lis.insert_range(pos,vec);
#else
    lis.insert(pos,vec.begin(),vec.end());
#endif
    assert(ranges::equal(lis,list{1,2,4,4,4,3,4}));
    return 0;
}