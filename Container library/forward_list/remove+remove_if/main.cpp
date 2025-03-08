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
    forward_list<int> for_lis {1,2,3,4,5,6,7,8,9,10,11};
    auto count1 =for_lis.remove(1);
    cout<<"remove element:"<<count1;
    auto count2 = for_lis.remove_if([](const int n){return n>10;});
    cout<<"\nremove_if >10:"<<count2;
    cout<<"\nall:";
    for (const auto & i:for_lis)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
    return 0;
}