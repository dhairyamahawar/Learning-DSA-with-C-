#include <iostream>
using namespace std;
int forAP(int x)
{
    int AP = (3 * x) + 7;
    return AP;
}

int main()
{
    int user;
    cout << "Enter The N'th Number " << endl;
    cin >> user;

    int ans = forAP(user);
    cout << "The n'th term is: " << ans << endl;
    return 0;
}
