#include "maint.h"

#define K 365;

class Deposit {

public:
	string name;
	int age;
	int deposit_days;
	double deposit;
	double persent;
	bool attitude;

	//default constructer 
	Deposit() {
		//cout << "Default-construction " << endl;
		name = "no name";
		age = 18;
		deposit_days = 1;
		deposit = 0;
		persent = 0;
		attitude = false;
	}
	//canonical construction
	Deposit(string user_name, int user_years,int user_deposit_days, double user_deposit, double interest, bool ratio) {
		//cout << "construction with argument " << endl;
		name = user_name;
		age = user_years;
		deposit_days = user_deposit_days;
		deposit = user_deposit;
		persent = interest;
		attitude = ratio;

	}
	//destructor
	~Deposit() {

	}



	string toString() {
		string res = "The user name: " + name + "\n";
		res += "The age user: " + to_string(age) + "\n";
		res += "The user deposit days: " + to_string(deposit_days) + "\n";
		res += "The deposit: " + to_string(deposit) + "\n";
		res += "The dpersent user: " + to_string(persent) + "\n";
		res += "The attitude user: ";
		res += attitude ? "good" : "no";
		res += "\n";
		return res;
	}

	double userDeposit(int user_deposit_days, double user_deposit, double interest) {


		double res=(user_deposit * interest * user_deposit_days) / K;
		res /= 100;
		return res;
	}

};
