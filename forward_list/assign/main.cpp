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
    auto for_lis =list<char>{};
    auto print_for_lis = [&](){
        for (const auto & i:for_lis)
            {
                cout<<i<<" ";
            }
        cout<<"\n";
    };
    for_lis.assign(5,'a');
    print_for_lis();
    auto str = string{"123124"};
    for_lis.assign(str.begin(),str.end());
    print_for_lis();
    for_lis.assign({'h','e','l'});
    print_for_lis();
    return 0;
}