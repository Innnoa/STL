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
    array a{1, 11, 11, 35, 0, 12, 79, 76, 76, 69, 40};
    //Print elements of container in reverse order using const_reverse_iterator`s.
    for_each(a.rbegin(), a.rend(), [](auto e) { cout << e << " "; });
    cout << "\n";
    for (int i=0;i<=7;i++)
    //Modify each element of container using non-const reverse_iterator`s.
    for_each(a.rbegin(), a.rend(), [](auto &e) { e += 32; });
    //Print elements as chars in reverse order using const_reverse_iterator`s.
    for_each(a.rbegin(), a.rend(), [](auto e) { cout << e << " "; });
    cout << "\n";
    return 0;
}
