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
    auto for_lis =forward_list<string> {};
    for_lis.push_front("hello");
    auto str =string {"zjy"};
    for_lis.push_front(move(str));
    cout<<"all:\n";
    for (const auto & i :for_lis)
        {
            cout<<quoted(i)<<" ";
        }
    cout<<"str: "<<quoted(str);
    return 0;
}