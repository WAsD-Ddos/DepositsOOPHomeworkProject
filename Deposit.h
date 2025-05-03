#include "maint.h"

#define K 365;

class Deposit {
private:
	string name;
	int age;
	int deposit_days;
	int deposit;
	double persent;
	bool attitude;

public:
	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	int getDepositDays();
	void setDepositDays(int deposit_days);

	double getDeposit();
	void setDeposit(int deposit);

	double getPersent();
	void setPersent(int persent);

	bool isAttitude();
	void setAttitude(bool attitude);

	

	//default constructer 
	Deposit();
	//canonical construction
	Deposit(string user_name, int user_years, int user_deposit_days, int user_deposit, double interest, bool ratio);
	//destructor
	~Deposit();



	string getInfo();

	double userDeposit(int user_deposit_days, int user_deposit, double interest);

};
