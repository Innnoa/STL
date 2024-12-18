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
    auto for_lis =forward_list {1,2,3,4,5,6,7,8,9,10};
    for_lis.erase_after(for_lis.before_begin());
    for (const auto & i:for_lis)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
    auto fi = next(for_lis.begin());
    auto la = next(fi,3);
    for_lis.erase_after(fi,la);
    for (const auto & i :for_lis)
        {
            cout<<i <<" ";
        }
    cout<<"\n";
    return 0;
}