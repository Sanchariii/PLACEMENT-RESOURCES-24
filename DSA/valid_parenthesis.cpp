#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        } else {
            if (!st.empty()) {
                char top = st.top();
                if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{')) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string input;
    cout << "Enter a string containing parentheses: ";
    cin >> input;

    if (isValid(input)) {
        cout << "The parentheses in the string are valid." << endl;
    } else {
        cout << "The parentheses in the string are not valid." << endl;
    }

    return 0;
}
