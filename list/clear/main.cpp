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
    auto print_list = [&]() {
        for (const auto & i: lis)
            {
                cout<<i<<" ";
            }
        cout<<"\n";
    };
    cout<<"before:\n";
    print_list();
    lis.clear();
    cout<<"after:\n";
    print_list();
    return 0;
}