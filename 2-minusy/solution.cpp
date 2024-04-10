#include <iostream>

using namespace std;

bool is_parenthesis_opened = false;

void open_parenthesis(string& result) {
    result += '(';
    is_parenthesis_opened = true;
}

void close_parenthesis(string& result) {
    result += ')';
    is_parenthesis_opened = false;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string result = "";

    char curr_char;
    for (int i = 0; i < n - 1; i++) {
        cin >> curr_char;

        if (curr_char == '+' && !is_parenthesis_opened)
            open_parenthesis(result);

        else if (curr_char == '-' && is_parenthesis_opened)
            close_parenthesis(result);
        
        result += '-';
    }

    if (is_parenthesis_opened) 
        close_parenthesis(result);

    cout << result;
    return 0;
}