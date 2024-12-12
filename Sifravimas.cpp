#include <iostream>
#include <locale>
#include <fstream>
#include <cmath>

using namespace std;
int main()
{
    char sifras[29] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '_', ',', '.'};
    string tekst;
    cin >> tekst;

    for (int i = 0; i < tekst.length(); i++)
    {
        int temp = 0;
        for (int j = 0; j < 29; j++)
        {
            if (tekst[i] == sifras[j])
            {
                temp = j;
                break;
            }
        }
        for (int j = 0; j < 29; j++)
        {
            if (((j*j*j)% 29) == temp)
            {
                if (temp == 0)
                {
                    cout << sifras[28];
                }
                else
                {
                    cout << sifras[j-1];
                    break;
                }
            }
        }
    }
    return 0;
}
