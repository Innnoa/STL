/*
* ClassName: ${NAME}
 * package: ${PACKAGE_NAME}
 * Description:
 * @Author: innno
 * @Create: 2024/2/27 - 21:54
 * @Version: v1.0
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector<char> vec={'a','b','c','a','b','c','a','b','c'};
    auto print_vec = [&]()
    {
        for (const char& c : vec)
            {
                cout << c << " ";
            }
        cout << "\n";
    };
    vec.assign(5, 'a');
    print_vec();
    vector<char> vec1={'1','2','4','6','9'};
    vec.assign(vec1.begin(), vec1.end());
    print_vec();
    const string extra(6, 'b');
    vec.assign(extra.begin(), extra.end());
    print_vec();
    vec.assign({'C', '+', '+', '1', '1'});
    print_vec();
    return 0;
}