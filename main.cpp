#include "Deposit.h"

int main() {
	//Deposit user1("Vlad", 19, 273 , 350000 , 4.7 , true);//name | age | deposit days | deposit | persent | attitute
	//
	//cout << user1.toString() << endl;
	//cout << to_string(user1.userDeposit(user1.deposit_days, user1.deposit, user1.persent)) << endl;
	
	

	string name;
	int age, deposit_days;
	double deposit,persent;
	bool attitute = true;
	cout << "Input your name: ";
	cin >> name;
	cout << "Input dyour age ";
	cin >> age;
	cout << "Input deposit days ";
	cin >> deposit_days;
	cout << "Input your deposit ";
	cin >> deposit;
	cout << "Input percent on deposit ";
	cin >> persent;
	Deposit user(name,age,deposit_days,deposit,persent,attitute);
	// информация о вашем автомобиле
	cout << "\nInfo about your you" << endl;
	cout << user.getInfo() << endl;

	return 0;

}