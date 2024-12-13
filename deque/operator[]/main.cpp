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
    deque de{1,2,3,4};
    //Print 2 element:
    cout<<"2 Element: "<<de[1]<<"\n";
    de[2]=1225;
    //Print All elements:
    for (const auto & i:de)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
    return 0;
}