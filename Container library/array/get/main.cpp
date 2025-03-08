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
constexpr array v{1,2,3};
static_assert(get<0>(v)==1&&get<1>(v)==2&&get<2>(v)==3);
int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    array<int ,3>a{};
    //set values:
    get<0>(a)=1,get<1>(a)=2,get<2>(a)=3;
    //get values;
    cout<<'('<<get<0>(a)<<','<<get<1>(a)<<','<<get<2>(a)<<")\n";

    return 0;
}