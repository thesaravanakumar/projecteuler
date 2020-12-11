/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/
#include <bits/stdc++.h>
using namespace std;
int larrgestPalindrome(int n)
{
    int upper_limit = 0;
    for (int i = 1; i <= n; i++)
    {
        upper_limit *= 10;
        upper_limit += 9;
    }
    int lower_limit = 1 + upper_limit / 10;
    int max_product = 0;
    for (int i = upper_limit; i >= lower_limit; i--)
    {
        for (int j = i; j >= lower_limit; j--)
        {
            int product = i * j;
            if (product < max_product)
                break;
            int number = product;
            int reverse = 0;
            while (number != 0)
            {
                reverse = reverse * 10 + number % 10;
                number /= 10;
            }
            if (product == reverse &&
                product > max_product)

                max_product = product;
        }
    }
    return max_product;
}
int main()
{
    int n = 3;
    cout << larrgestPalindrome(n);
    return 0;
}
/*●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●🆀🆄🅰🅺🅴●▬▬▬▬▬๑۩۩๑▬▬▬▬●●▬▬▬▬▬๑۩۩๑▬▬▬▬●*/