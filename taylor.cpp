#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double result = 0.0;
    int factorial(int f)
    {
        if (f == 0 || f == 1)
        {
            return 1;
        }
        return factorial((f - 1) * f);
    }
    double helper(int x, int n)
    {
        static int p = 1, f = 0;
        if (n == 0)
        {
            return 1.0;
        }
        result = helper(x, n - 1);
        p = p * x;
        f++;
        return 1 + (p / factorial(f));
    }
    int taylor(int x, int n)
    {
        (helper(x, n));
        return result;
    }
};
int main()
{
    Solution obj;
    int x = 3, n = 3;
    cout << obj.taylor(x, n);
}