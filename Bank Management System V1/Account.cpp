#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include "Account.h"

void Account::PiggyBankMenu()
{

	std::cout << "Welcomee to Piggy bank Onik..Onik.., Press the required input you want :- " << std::endl;
	std::cout << "1. Create account" << std::endl;
	std::cout << "2. Exit" << std::endl;
	std::cout << std::endl;

	std::cout << "Enter input: ";

}

void Account::CreateAccount()
{

	std::string name;
	double balance;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "Enter name:- ";
	std::getline(std::cin, name);

	std::cout << "Enter amount you want to deposit:- ";
	std::cin >> balance;

	std::ofstream OutFile("AccountsDetails.txt", std::ios::app);
	OutFile << name << " - " << balance;

	if (!OutFile.fail())
	{
		OutFile.close();
		std::cout << "You have successfully created the account!! Press any key to continue...";
		_getch();
	}
	

}
