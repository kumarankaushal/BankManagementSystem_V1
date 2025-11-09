#include <iostream>
#include "Account.h"


int main()
{

	std::cout << "Welcome to Piggy bank!!" << std::endl;
	std::cout << std::endl;

	bool Is_active = true;
	int input;
	Account b;

	while (Is_active)
	{

		b.PiggyBankMenu();
		std::cin >> input;

		switch (input)
		{

		case 1:
		{

			break;
		}

		   default:
		   {

			break;

		   }	

		}

	}
	

}