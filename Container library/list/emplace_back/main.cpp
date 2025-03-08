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

struct A {
    string country;
    string name;
    int year;
    A(string country,string name,int year): country(move(country)),name(move(name)),year(year) {
        cout<<"constructed\n";
    }
    A(A&& other) noexcept :country(move(other.name)),name(move(other.name)),year(other.year) {
        cout<<"move constructed\n";
    }
    A& operator= (const A & other) = default;
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis =list<A>{};
    cout<<"emplace_back:\n";
    auto& ref = lis.emplace_back("South Africa", "Nelson Mandela", 1994);
    cout<<"year:"<<ref.year;
    auto lis1 = list<A>{};
    cout<<"\npush_back:\n";
    lis1.push_back(A("the USA", "Franklin Delano Roosevelt", 1936));
    cout<<"all:\n";
    for (A const& president: lis)
        std::cout << president.name << "was elected president of "
                  << president.country << " in " << president.year << ".\n";

    for (A const& president: lis1)
        std::cout << president.name << "was re-elected president of "
                  << president.country << " in " << president.year << ".\n";
    return 0;
}