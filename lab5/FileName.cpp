#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;
/*
int main(int argc, char **argv)
{
  ifstream from("source.txt");
  if (from)
  {
    ofstream to("destination.txt");
    if (to)
    {
      char ch;
      while (from.get(ch))
      {
        to.put(c);
        cout << ch;
      }
    }
    if (!from.eof()||!to)
    {
      cerr << "Error writing destination.txt" << endl;
    }
  }

}
  */
int main(int argc, char **argv)
{
    int x = 3;
    int y = 4;

    printf("x=%0.2f, y=%0.2f\n", x, y);

    cout << '(' << setprecision(2) << setiosflags(ios::fixed) << setw(8) << x << ',' << setw(8) << y << ')' << endl;

    getchar();
    return 0;
}
