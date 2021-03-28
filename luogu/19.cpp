#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    stack<int> s;
    s.push(n);
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
            s.push(n);
        } else {
            n = n * 3 + 1;
            s.push(n);
        }
    }
    while (!s.empty()) {
        cout << s.top()<<' ';
        s.pop();
    }
    system("pause");
    return 0;
}