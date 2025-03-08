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
    auto vec = vector {5,6,7,8};
#if __cpp_liv_containers_ranges
    lis.perpend_range(vec);
#else
    lis.insert(lis.begin(),vec.begin(),vec.end());
#endif
    assert(ranges::equal(lis,list{5,6,7,8,1,2,3,4}));

    return 0;
}