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

struct Point {double x,y;};

struct PointCmp {
    bool operator()(const Point &lhs,const Point & rhs )const {
        return hypot(lhs.x,lhs.y)<hypot(rhs.x,rhs.y);
    }
};

ostream& operator<<(ostream& os,Point pt) {
    return os<<"{"<<pt.x<<","<<pt.y<<"]";
}

void println(auto rem,const auto & seq) {
    cout<<rem<< "{";
    for (auto n{seq.size()};const auto& elm:seq)
        {
            cout<<elm<<(--n?",":" ");
        }
    cout<<"}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto se = set<string> {};
    se.insert("horse");
    se.insert("apple");
    se.insert("peg");
    println("se: ",se);
    auto se1 =set<string>{se.find("peg"),se.end()};
    println("se1: ",se1);
    std::set se2{se};
    se2.insert("another horse");
    println("se2: ",se2);
    set se3{move(se)};
    println("se3: ",se3);
    println("se: ",se);
    set<string> se4{"one","zjy","hello","good"};
    println("se4: ",se4);
    set<Point,PointCmp> se5 {{2,5},{3,4},{1,1}};
    se5.insert({1,-1});
    println("se5: ",se5);
    const auto li ={"zjy","hzj","nihao","hello"};
#if __cpp_lib_containers_ranges
    set<string> se6{from::range,li};
#else
    set<string> se6{li.begin(),li.end()};
#endif
    println("se6: ",se6);
    return 0;
}