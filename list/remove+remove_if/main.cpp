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
    auto lis =list{1,2,3,4,5,6,10,23,45};
    auto count1 = lis.remove(1);
    cout<<"remove number: "<<count1;
    auto count2 = lis.remove_if([](int n){return n>10;});
    cout<<"remove number: "<<count2;
    for ( cout<<"all element:\n";const auto & i:lis)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
    return 0;
}