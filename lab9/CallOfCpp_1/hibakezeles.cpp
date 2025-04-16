using namespace std;
#include <iostream>
#include <string>

int main()
{

    int x;

    while (true)
    {
        cout << "Adj meg egy számot";
        cin >> x;

        if (cin.fail())
        {
            cout << "Hiba";
            // Alpahelyzetbe vissza a cin-t
            cin.clear();

            cin.ignore(1000, '\n');
        }
        else
        {
            cout << "A szám: " << x << endl;
            break;
        }
    }

    cout << "Sikeres beolvasás" << x << endl;
    return 0;
}