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

constexpr int n_operations = 100'500'0;

size_t map_emplace() {
    map<int, char> map;
    for (int i = 0; i < n_operations; ++i)
        {
            map.emplace(i, 'a');
        }
    return map.size();
}

size_t map_emplace_hint() {
    map<int, char> map;
    auto it = map.begin();
    for (int i = 0; i < n_operations; ++i)
        {
            map.emplace_hint(it, i, 'b');
            it = map.end();
        }
    return map.size();
}

size_t map_emplace_hint_wrong() {
    map<int,int> map;
    auto it =map.begin();
    for (int i=n_operations;i>0;--i)
        {
            map.emplace_hint(it,i,'c');
            it =map.end();
        }
    return map.size();
}

size_t map_emplace_hint_corrected() {
    map<int,char> map;
    auto it =map.begin();
    for (int i=n_operations;i>0;--i)
        {
            map.emplace_hint(it,i,'d');
            it = map.begin();
        }
    return map.size();
}

size_t map_emplace_hint_closest() {
    map<int,char> map;
    auto it =map.begin();
    for (int i=0 ;i<n_operations;++i)
        {
            it = map.emplace_hint(it,i,'e');
        }
    return map.size();
}

double time_it(const function<size_t()> &map_test
    ,const string& what = "", double radio = 0.0 ) {
    const auto start = chrono::system_clock::now();
    const size_t map_size = map_test();
    const auto stop = chrono::system_clock::now();
    chrono::duration<double,milli> time = stop- start;
    if (!what.empty()&& map_size)
        {
            cout<<setw(8)<<time<<" for"<<what<<" (radio: "
            <<(radio == 0.0 ? 1.0 : radio /time.count())<<")\n";
        }
    return time.count();
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cout<<fixed<<setprecision(2);
    time_it(map_emplace);
    const auto x = time_it (map_emplace,"plain emplace");
    time_it(map_emplace_hint, "emplace with correct hint", x);
    time_it(map_emplace_hint_wrong, "emplace with wrong hint", x);
    time_it(map_emplace_hint_corrected, "corrected emplace", x);
    time_it(map_emplace_hint_closest, "emplace using returned iterator", x);
    return 0;
}
