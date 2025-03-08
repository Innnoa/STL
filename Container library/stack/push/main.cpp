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

class BrainHackInterpreter {
    map<unsigned, unsigned> open_brackets, close_brackets;
    unsigned program_pos_{0};
    array<uint8_t, 32768> data_{};
    int data_pos_{0};

    void collect_brackets_positions(const string_view program) {
        stack<unsigned> brackets_stack;
        for (auto pos{0U}; pos != program.length(); ++pos)
            {
                const char c{program[pos]};
                if ('[' == c)
                    {
                        brackets_stack.push(pos);
                    } else if (']' == c)
                    {
                        if (brackets_stack.empty())
                            {
                                throw runtime_error("brackets [] do not match!");
                            }
                        open_brackets[brackets_stack.top()] = pos;
                        close_brackets[pos] = brackets_stack.top();
                        brackets_stack.pop();
                    }
            }
        if (!brackets_stack.empty())
            throw runtime_error("brackets [] do not match!");
    }

    void check_data_pos(int pos) const {
        if (pos < 0 || pos >= static_cast<int>(data_.size()))
            {
                throw out_of_range{"data pointer out of bound"};
            }
    }

public:
    explicit BrainHackInterpreter(const string_view program) {
        collect_brackets_positions(program);
        data_.fill(0);
        for (; program_pos_ < program.length(); ++program_pos_)
            {
                switch (program[program_pos_])
                    {
                        case '<':
                            check_data_pos(--data_pos_);
                            break;
                        case '>':
                            check_data_pos(++data_pos_);
                            break;
                        case '-':
                            --data_[data_pos_];
                            break;
                        case '+':
                            ++data_[data_pos_];
                            break;
                        case '.':
                            std::cout << data_[data_pos_];
                            break;
                        case ',':
                            std::cin >> data_[data_pos_];
                            break;
                        case '[':
                            if (data_[data_pos_] == 0)
                                program_pos_ = open_brackets[program_pos_];
                            break;
                        case ']':
                            if (data_[data_pos_] != 0)
                                program_pos_ = close_brackets[program_pos_];
                            break;
                        default: ;
                    }
            }
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    BrainHackInterpreter
     give_me_a_name{
        "++++++++[>++>>++>++++>++++<<<<<-]>[<+++>>+++<-]>[<+"
        "+>>>+<<-]<[>+>+<<-]>>>--------.<<+++++++++.<<----.>"
        ">>>>.<<<------.>..++.<++.+.-.>.<.>----.<--.++.>>>+."
    };
    std::cout << '\n';
    return 0;
}
