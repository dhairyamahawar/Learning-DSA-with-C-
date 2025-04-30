#include <iostream>
using namespace std;

int Fibonacci(int x)
{

    if (x == 0)
        return 0;
    if (x == 1)
        return 1;

    int a = 0;
    int b = 1;
    int ans;

    for (int i =3 ; i <= x; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }

    return b;
}

int main()
{
    int user;
    cin >> user;

    int answer = Fibonacci(user);

    cout << answer << endl;

    return 0;
}
