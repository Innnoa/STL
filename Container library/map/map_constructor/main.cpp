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

template<typename Key, typename Value, typename Cmp>
ostream &operator<<(ostream &os, map<Key, Value, Cmp> const &map) {
    os << "{ ";
    for (auto comma{size(map)}; const auto &i: map)
        {
            os << "\'" << i.first << "' is " << i.second << (--comma ? "," : " ");
        }
    return os << "}\n";
}

struct Point {
    double x, y;
    friend ostream &operator<<(ostream &os, const Point pt) {
        return os << "(" << pt.x << ", " << pt.y << ")";
    }
};

struct PointCmp {
    bool operator()(const Point &lhs, const Point &rhs) const {
        return lhs.x < rhs.x;
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto map1 = map<string, int>{
        {"something", 69},
        {"anything", 199},
        {"that thing", 50}
    };
    cout << "map1 = " << map1;
    const auto map2 = map{map1.find("anything"), map1.end()};
    cout << "\nmap2:" << map2;
    cout << "\nmap1:" << map1;
    const auto map3 = map{map1};
    cout << "\nmap3:" << map3;
    cout << "\nmap1:" << map1;
    const auto map4 = map{move(map1)};
    cout << "\nmap4:" << map4;
    cout << "\nmap1:" << map1;
    const auto init = map<string, int>{
        {"this", 100},
        {"can", 100},
        {"be", 100},
        {"const", 100}
    };
    cout << "\ninit:" << init;
    std::cout << "\nCustom Key class option 1:\n";
    auto mag = map<Point, double, PointCmp>{
        {{5, -12}, 13},
        {{3, 4}, 5},
        {{-8, -15}, 17}
    };
    cout << "mag:" << mag;
    std::cout << "Custom Key class option 2:\n";
    auto cmp = [&mag](const Point &lhs, const Point &rhs) {
        return mag[lhs] < mag[rhs];
    };
    auto magy = map<Point, double, decltype(cmp)>{cmp};
    magy.insert(pair<Point, double>{{5, -12}, 12});
    magy.insert({{3, 4}, 5});
    magy.insert({Point{-8.0, -15.0}, 17});
    cout << "magy= " << magy ;
    std::cout << "Construction from a range:\n";
    using PS = pair<const string, int>;
    const auto rg = {
        PS{"one", 1},
        {"one", 101},
        {"two", 2},
        {"three", 3}
    };
#if _cpp_lib_containers_ranges
    auto nums =map{from_range,rg};
#else
    auto nums = map{rg.begin(), rg.end()};
#endif
    cout << "nums:" << nums << "\n";
    return 0;
}
