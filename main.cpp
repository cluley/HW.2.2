#include <iostream>

struct banking {
	long account_number;
	std::string name;
	int balance;
};

void balance_change(banking& person, int newBalance) {
	person.balance = newBalance;
}

int main(int argc, char** argv) {
	banking person;

	std::cout << "Enter account number: ";
	std::cin >> person.account_number;

	std::cout << "Enter your name: ";
	std::cin >> person.name;

	std::cout << "Enter your balance: ";
	std::cin >> person.balance;

	int newBalance;
	std::cout << "Enter new balance: ";
	std::cin >> newBalance;

	balance_change(person, newBalance);

	std::cout << "Your account is: " << person.name << ", " << person.account_number << ", " << person.balance << std::endl;

	return 0;
}