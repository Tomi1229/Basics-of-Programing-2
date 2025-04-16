#include <iostream>
#include "display.h"
#include "printer.h"

using namespace std;

int main()
{
	const unsigned maxEquipment = 4;

	// Itt hozzunk létre 4 eszközt, az alábbi kimenetek meghatározzák a paramétereiket.
	// Heterogén kollekcióban akarjuk őket tárolni (közös tömbben)

	Equipment *equipments[maxEquipment];
	equipments[0] = new Equipment(1222, 12);
	equipments[1] = new Printer(1222, 2, 3);
	equipments[2] = new Printer(234, 2323, 7);
	equipments[3] = new Display(234, 2323, 7);

	/************************Elvárt kimenet**************************\
	 Serial Number:1 Price:200 HUF
	 Serial Number:2 Price:12000 HUF Cartridge Price (Printer):12000
	 Serial Number:3 Price:2000 HUF Age (Display): 6
	 Serial Number:4 Price:312000 HUF Cartridge Price (Printer):51000
	\****************************************************************/
	for (int i = 0; i < maxEquipment; i++)
	{
		// Itt ki kell írnunk mindegyiknek az adatát
		equipments[i]->print();
		delete equipments[i];
		cout << endl;
	}

	return 0;
}