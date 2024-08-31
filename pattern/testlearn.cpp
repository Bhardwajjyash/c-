#include <iostream>
using namespace std;

void fo(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printf("yash");
    fo(i + 1, n);
}
int main()
{
    int n;
    int i = 0;
    cin >> n;
    fo(i, n);

    return 0;
}