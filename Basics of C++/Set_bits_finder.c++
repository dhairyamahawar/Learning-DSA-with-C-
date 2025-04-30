#include <iostream>
using namespace std;

int setBits(int x)
{
    int count = 0;

    while (x!=0)
    {
        if (x&1)
        {
            count++;
        }
        x = x>>1;
        
    }
    return count;
}

int main()
{
    int num1, num2;

    cout<<"Enter num 1 "<<endl;
    cin>>num1;

    cout<<"Enter num 2 "<<endl;
    cin>>num2;

    int bit1 = setBits(num1);
    int bit2 = setBits(num2);

    cout<<"The total number of set bits is "<< bit1 + bit2<< endl;

    return 0;
}
