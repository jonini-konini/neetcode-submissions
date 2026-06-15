class Solution {
public:
    bool isValid(string s) {
        stack<char> solution;

        vector<char> open = {'(', '{', '['};
        vector<char> close = {')', '}', ']'};

        //append the characters in s into  the primary stack



        for (int i = 0; i <s.length() ; ++i) {
            char target = s[i];
            auto it = find(open.begin(), open.end(), target);
            if (it != open.end()) {
                solution.push(target);
            }
            else {
                auto it2 = find(close.begin(), close.end(), target);
                int index = distance(close.begin(), it2);
                if (solution.empty()) {
                    return false;
                }
                if (solution.top() == open[index]) {
                    solution.pop();
                }
                else {
                    return false;
                }

            }
        }
        if (solution.empty()) {
            return true;
        }
        return false;
    }
};
