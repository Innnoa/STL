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
    array numbers{2,4,6,8};
    cout<<"Second element: "<<numbers[1]<<"\n";
    numbers[0]=5;
    cout<<"All numbers: ";
    for (const auto &i: numbers)cout<<" "<<i;
    cout<<"\n";
    return 0;
}