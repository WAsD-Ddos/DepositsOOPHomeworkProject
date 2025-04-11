#include "maint.h"



class Deposit {

public:
	string name;
	int age;
	double deposit;
	double persent;
	bool attitude;

	//default constructer 
	Deposit() {
		//cout << "Default-construction " << endl;
		name = "no name";
		age = 18;
		deposit = 0;
		persent = 0;
		attitude = false;
	}
	//canonical construction
	Deposit(string user_name, int user_years, double user_deposit, double interest, bool ratio) {
		//cout << "construction with argument " << endl;
		name = user_name;
		age = user_years;
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
		res += "The deposit: " + to_string(deposit) + "\n";
		res += "The dpersent user: " + to_string(persent) + "\n";
		res += "The attitude user: ";
		res += attitude ? "good" : "no";
		res += "\n";
		return res;
	}

};
