#include "initializer.h"

int main() {
	//Deposit user1("Vlad", 19, 273 , 350000 , 4.7 , true);//name | age | deposit days | deposit | persent | attitute
	//
	//cout << user1.getInfo() << endl;
	//cout << "Your Deposit: " << user1.userDeposit(user1.getDepositDays(), user1.getDeposit(), user1.getPersent()) << endl;
	
	int count;
	cout << "input number of users: " << endl;
	cin >> count;


	Deposit* list = nullptr;

	Initializer initializer;

	initializer.init(list, count);
	cout << "full list of users" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << list[i].getInfo() << endl;
	}
	

	//string name;
	//int age, deposit_days;
	//double deposit,persent;
	//bool attitute = true;
	//cout << "Input your name: ";
	//cin >> name;
	//cout << "Input dyour age ";
	//cin >> age;
	//cout << "Input deposit days ";
	//cin >> deposit_days;
	//cout << "Input your deposit ";
	//cin >> deposit;
	//cout << "Input percent on deposit ";
	//cin >> persent;
	//Deposit user(name,age,deposit_days,deposit,persent,attitute);
	//// ���������� � ����� ����������
	//cout << "\nInfo about your you" << endl;
	//cout << user.getInfo() << endl;

	return 0;

}