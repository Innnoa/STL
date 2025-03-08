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
    auto lis = list<string>{};
    lis.push_front("zjy");
    string str = "toast.";
    lis.push_front(move(str));
    for (cout << "all:\n"; const auto &i: lis)
        {
            cout << quoted(i) << " ";
        }
    cout <<"str:"<<quoted(str)<< '\n';

    return 0;
}
