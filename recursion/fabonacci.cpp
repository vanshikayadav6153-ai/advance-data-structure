#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addStrings(const string &a, const string &b) {
    string result;
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result += char('0' + sum % 10);
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cout << "Enter the term number: ";
    cin >> n;

    string a = "1", b = "1";
    for (int i = 2; i < n; i++) {
        string next = addStrings(a, b);
        a = b;
        b = next;
    }

    string term = (n == 1) ? a : b;
    cout << "Fibonacci term " << n << " = " << term << endl;
    cout << "Number of digits: " << term.size() << endl;
    return 0;
}
