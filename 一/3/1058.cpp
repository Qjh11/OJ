#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double x1, x2, a, b, c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    if ((b * b - 4 * a * c) < 0)
    {
        cout << "No answer!" << endl;
    }
    else if ((b * b - 4 * a * c) == 0)
    {

        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("x1=x2=%.5lf\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        if (x1 < x2)
        {
            printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
        }
        else if (x2 < x1)
        {
            printf("x1=%.5lf;x2=%.5lf\n", x2, x1);
        }
    }

    return 0;
}