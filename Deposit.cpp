#include "Deposit.h"


string Deposit::getName() { return name; }
void Deposit::setName(string name) { this->name = name; }

int Deposit::getAge() { return age; }
void Deposit::setAge(int age) {
	if (age >= 18 && age <= 99) { this->age = age; }
}

int Deposit::getDepositDays() { return deposit_days; }
void Deposit::setDepositDays(int deposit_days) {
	if (deposit_days >= 10 && deposit_days <= 36500) { this->deposit_days = deposit_days; }
}

double Deposit::getDeposit() { return deposit; }
void Deposit::setDeposit(int deposit) {
	if (deposit >= 1000 && deposit <= 100000000) { this->deposit = deposit; }
}

double Deposit::getPersent() { return persent; }
void Deposit::setPersent(int persent) {
	if (persent >= 1.0 && persent <= 75.0) { this->persent = persent; }
}

bool Deposit::isAttitude() { return attitude; }
void Deposit::setAttitude(bool attitude) { this->attitude = attitude; }



//default constructer 
Deposit::Deposit() {
	//cout << "Default-construction " << endl;
	name = "no name";
	age = 18;
	deposit_days = 10;
	deposit = 1000;
	persent = 1.0;
	attitude = true;
}
//canonical construction
Deposit::Deposit(string user_name, int user_years, int user_deposit_days, int user_deposit, double interest, bool ratio) {
	//cout << "construction with argument " << endl;
	name = user_name;
	age = user_years;
	deposit_days = user_deposit_days;
	deposit = user_deposit;
	persent = interest;
	attitude = ratio;

}
//destructor
Deposit::~Deposit() {

}



string Deposit::getInfo() {
	string res = "The user name: " + name + "\n";
	res += "The age user: " + to_string(age) + "\n";
	res += "The user deposit days: " + to_string(deposit_days) + "\n";
	res += "The deposit: " + to_string(deposit) + "\n";
	res += "The deposit persent user: " + to_string(persent) + "\n";
	res += "The attitude user: ";
	res += attitude ? "good" : "no";
	res += "\n";
	return res;
}

double Deposit::userDeposit(int user_deposit_days, int user_deposit, double interest) {
	double res = (user_deposit * interest * user_deposit_days) / K;
	res /= 100;
	return res;
}