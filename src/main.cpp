#include <iostream>
#include "Ocean.h"

using namespace std;


int main()
{
	srand(time(nullptr));
	Ocean *atlantic = new Ocean;
	atlantic->addObjects(250);
	atlantic->run(10);
	system("pause");
}
