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

struct LightKey {
    int o;
};

struct HeavyKey {
    int o[1000];
};

bool operator<(const LightKey &lhs, const HeavyKey &rhs) {
    return lhs.o < rhs.o[0];
}

bool operator<(const HeavyKey &lhs, const LightKey &rhs) {
    return lhs.o[0] < rhs.o;
}

bool operator<(const HeavyKey &lhs, const HeavyKey &rhs) {
    return lhs.o[0] < rhs.o[0];
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto map1 = map<int, char>{{1, 'a'}, {2, 'b'}};
    assert(map1.at(1)=='a');
    assert(map1.at(2)=='b');
    try
        {
            map1.at(13);
        } catch (const out_of_range &ex)
        {
            std::cout << "1) out_of_range::what(): " << ex.what() << '\n';
        }
    auto map2 = map<HeavyKey, char, less<> >{{{1}, 'b'}, {{2}, 'a'}};
    assert(map2.at(HeavyKey{1})=='b');
    assert(map2.at(HeavyKey{2})=='a');
    try
        {
            map2.at(HeavyKey{13});
        } catch (const out_of_range &ex)
        {
            std::cout << "2) out_of_range::what(): " << ex.what() << '\n';
        }
    return 0;
}
