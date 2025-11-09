#include <iostream>
#include <conio.h>
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

		system("cls");

		b.PiggyBankMenu();
		std::cin >> input;

		switch (input)
		{

		case 1:
		{
			b.CreateAccount();
			break;
		}
		case 2:
		{

			Is_active = false;
			break;

		}
		default:
		{

			std::cout << "Entered wrong input!! Enter any button to continue...";
			_getch();
			break;

	    }	

		}

	}

	std::cout << "Thank you for banking with us..oink..oink..." << std::endl;
	

}