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
    auto se = set{1,2,3,4,1,2,3,4};
    for (auto it =se.rbegin();it!=se.rend();++it)
        {
            for (auto n = *it;n>0;n--)
                {
                    cout<<"?"<<" ";
                }
            cout<<"\n";
        }
    return 0;
}