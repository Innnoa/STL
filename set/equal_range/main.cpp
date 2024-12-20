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

struct Names {
    string forename, surname;

    friend auto operator<(const Names &lhs, const Names &rhs) {
        return tie(lhs.surname, lhs.forename) < tie(rhs.surname, rhs.forename);
    }
};

struct SurnameCompare {
    string_view surname;

    friend bool operator<(const Names &lhs, const SurnameCompare &rhs) {
        return lhs.surname < rhs.surname;
    }

    friend bool operator<(const SurnameCompare &lhs, const Names &rhs) {
        return lhs.surname < rhs.surname;
    }
};

set<Names, less<> > characters{
    {"Homer", "Simpson"},
    {"Marge", "Simpson"},
    {"Lisa", "Simpson"},
    {"Ned", "Flanders"},
    {"Joe", "Quimby"}
};

void print_unique(const Names &names) {
    auto [begin,end] = characters.equal_range(names);
    cout << "Found" << std::distance(begin, end) << "characters with name " << names.forename << " " << names.surname <<
            "\n";
}

void print_by_surname(string_view surname) {
    auto [begin,end] = characters.equal_range(SurnameCompare{surname});
    cout << "Found" << std::distance(begin, end) << "characters with surname:" << surname << "\n";
    for (const Names &names: ranges::subrange(begin, end))
        {
            cout << "      " << names.forename << " " << names.surname << "\n";
        }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    print_unique({"Maude", "Flanders"});
    print_unique({"Lisa", "Simpson"});
    print_by_surname("Simpson");
    return 0;
}
