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
    list<int> lis;
    auto print_list=[&]() {
        for (const auto & i :lis)
            {
                cout<<i<<" ";
            }
        cout<<"\n";
    };
    lis.assign(5,1);
    print_list();
    const auto au = {1,2,3,4,5};
    lis.assign(au.begin(),au.end());
    print_list();
    lis.assign({4,5,6,7,8});
    print_list();
    return 0;
}