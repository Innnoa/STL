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

void print_map(const auto &str, const auto &ma) {
    for (cout << str << " : {"; const auto &[key,value]: ma)
        {
            cout << "{" << key << " : " << value << "}\n";
        }
    cout << "}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto map1 = map{pair{1, 11}, {2, 22}, {3, 33}, {4, 44}};
    const auto li = {pair{5, 55}, {6, 66}, {8, 7}, {23, 45}};
#ifdef __cpp_lib_containers_ranges
    map1.insert_range(li);
#else
    map1.insert(li.begin(), li.end());
#endif
    print_map("all:", map1);

    return 0;
}
