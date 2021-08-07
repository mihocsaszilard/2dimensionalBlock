#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n, m, a = 0;
  cout << "Adja meg a matrix sorainak szamat: ";
  cin >> n;
  cout << "Adja meg a matrix oszlopainak szamat: ";
  cin >> m;

  int **T = new int *[m]; //oszlopok szamanak megadasa

  for (int i = 0; i <= n - 1; i++)
  {
    T[i] = new int[n]; //sorok szamanak megadasa
  }
  for (int i = 0; i <= n - 1; i++)
  {
    for (int j = 0; j <= m - 1; j++)
    {

      cout << "Adja meg a matrix " << i + 1 << ". szamu soranak " << j + 1 << ". szamu elemet: ";
      cin >> T[i][j]; //elemek beolvasasa
    }
  }

  {
    for (int i = 0; i <= n - 1; i++) //kiiratas
    {
      for (int j = 0; j <= m - 1; j++)
      {
        if (T[i][j] % 2 != 0)
        {
          a = T[i][j]; //a negativ elemeket pozitivva alakitja ugy, hogy hozza ad 1-et
          a = a + 1;
          cout << a << endl;
        }

        else
          cout << T[i][j] << endl;
      }
    }
  }

  system("pause");
  return 0;
}