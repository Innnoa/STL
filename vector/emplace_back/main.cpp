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
    int year{};

    President(auto p_name, auto p_country, auto p_year): name(move(p_name)), country(move(p_country)), year(p_year) {
        cout << " I am being constructed ";
    }

    President(President &&other) noexcept : name(move(other.name)), country(move(other.country)), year(other.year) {
        cout << "I am being moved ";
    }

    President &operator=(const President &other) = default;
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector<President> elections;
    cout << "emplace_back:\n";
    const auto &ref = elections.emplace_back("Nelson Mandela", "South Africa", 1994);
    assert(ref.year==1994&&"uses a reference to zhe created object(c++20)");
    vector<President> reElections;
    cout << "\npush_back:\n";
    reElections.push_back(President("Franklin Delano Roosevelt", "the USA", 1936));
    cout << "\nContents:\n";
    for (const auto &i: elections)
        {
            cout << i.name << " was elected president of " << i.country << " in " << i.year << ".\n";
        }
    for (const auto &i: reElections)
        {
            cout << i.name << " was re-elected president of " << i.country << " in " << i.year << ".\n";
        }
    return 0;
}
