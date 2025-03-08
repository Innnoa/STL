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
    int x;
};

struct FatKey {
    int x;
    int data[1000];
};

bool operator<(const FatKey &fk, const LightKey &lk) {
    return fk.x < lk.x;
}

bool operator<(const LightKey &lk, const FatKey &fk) {
    return lk.x < fk.x;
}

bool operator<(const FatKey &fk1, const FatKey &fk2) {
    return fk1.x < fk2.x;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    map<int, char> ma1{{1, 'a'}, {2, 'b'}};
    if (const auto it = ma1.find(2); it != ma1.end())
        {
            std::cout << "Found " << it->first << ' ' << it->second << '\n';
        } else
        {
            std::cout << "Not found\n";
        }
    map<FatKey, char, less<> > map2{{{1, {}}, 'a'}, {{2, {}}, 'c'}};
    LightKey lk = {2};
    if (const auto it = map2.find(lk); it != map2.end())
        {
            std::cout << "Found " << it->first.x << ' ' << it->second << '\n';
        } else
        {
            std::cout << "Not found\n";
        }
    const auto &example2ref = map2;
    if (const auto it = example2ref.find(lk); it != example2ref.end())
        {
            std::cout << "Found " << it->first.x << ' ' << it->second << '\n';
        }
    return 0;
}
