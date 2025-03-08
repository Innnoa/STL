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

struct President {
    string name;
    string country;
    int year;

    President(string p_name, string p_country, int p_year):
    name(move(p_name)), country(move(p_country)), year(p_year) {
        cout << "constructed\n";
    }
    President(President && pre) noexcept :
    name(move(pre.name)),country(move(pre.country)),year(pre.year) {
        cout<<"move constructed\n";
    }
    President& operator = (const President& other) = default;
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    std::deque<President> elections;
    std::cout << "emplace_back:\n";
    auto& ref = elections.emplace_back("Nelson Mandela", "South Africa", 1994);
    assert(ref.year == 1994 && "uses a reference to the created object (C++17)");

    std::deque<President> reElections;
    std::cout << "\npush_back:\n";
    reElections.emplace_back(President("Franklin Delano Roosevelt", "the USA", 1936));

    std::cout << "\nContents:\n";
    for (President const& president: elections)
        std::cout << president.name << " was elected president of "
                  << president.country << " in " << president.year << ".\n";

    for (President const& president: reElections)
        std::cout << president.name << " was re-elected president of "
                  << president.country << " in " << president.year << ".\n";
    return 0;
}
