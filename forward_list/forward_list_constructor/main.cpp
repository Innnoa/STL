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

template<typename T>
ostream &operator<<(ostream &s, const forward_list<T> &v) {
    s.put('{');
    for (char comma[]{'\0', ' ', '\0'}; const auto &i: v)
        {
            s << comma << i, comma[0] << ',';
        }
    return s << "}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto for_lis = forward_list<string>{"hello", "world"};
    cout << "1: " << for_lis;
    auto for_lis_1 = forward_list(for_lis.begin(), for_lis.end());
    cout << "2: " << for_lis_1;
    auto for_lis_2 = forward_list(for_lis);
    cout<<"3: "<<for_lis_2;
    auto for_lis_3 = forward_list<string> (5,"zjy");
    cout<<"4: "<<for_lis_3;
    const auto rg = {"where","you","are"};
#ifdef __cpp_lib_containers_ranges
    forward_list<string> for_lis_4(from_range,rg);
#else
    forward_list<string> for_lis_4(rg.begin(),rg.end());
#endif
    cout<<"5: "<<for_lis_4;

    return 0;
}
