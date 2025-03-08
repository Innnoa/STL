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

template<typename IT>
void print_insertion_status(IT it, bool success) {
    std::cout << "Insertion of " << it->first
            << (success ? " succeeded\n" : " failed\n");
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto map1 = map<string, float>{};
    const auto [it_hinata,success] = map1.insert({"hinata", 162.8});
    print_insertion_status(it_hinata, success);
        {
            const auto [it,success2] = map1.insert(*it_hinata);
            print_insertion_status(it, success2);
        }
        {
            const auto [it,success] = map1.insert(pair{"kageyama", 180.6});
            print_insertion_status(it, success);
        }
        {
            const auto n = size(map1);
            const auto it = map1.insert(it_hinata, {"azumane", 184.7});
            print_insertion_status(it, size(map1) != n);
        }
        {
            const auto n = size(map1);
            const auto it = map1.insert(it_hinata, *it_hinata);
            print_insertion_status(it, size(map1) != n);
        }
        {
            const auto n = size(map1);
            const auto it = map1.insert(it_hinata, pair{"Tsukishima", 188.3});
            print_insertion_status(it, size(map1) != n);
        }
    auto node_hinada = map1.extract(it_hinata);
    auto map2 = map<string, float>{};
    map2.insert(map1.begin(), map1.end());
    map2.insert({{"hello", 123}, {"nihao", 345}});
    const auto status = map2.insert(move(node_hinada));
    print_insertion_status(status.position, status.inserted);
    node_hinada = map2.extract(status.position);
        {
            const auto n = size(map2);
            const auto it = map2.insert(map2.begin(), move(node_hinada));
            print_insertion_status(it, size(map2) != n);
        }
    cout << left << "\n";
    for (const auto &[name,height]: map2)
        {
            cout << setw(10) << name << " " << height << "cm\n";
        }
    return 0;
}
