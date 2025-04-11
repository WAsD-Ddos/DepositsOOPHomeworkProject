#include "Deposit.h"

int main() {
	Deposit user1("Vlad", 19, 273 , 350000 , 4.7 , true);//name | age | deposit days | deposit | persent | attitute
	
	cout << user1.toString() << endl;
	cout << to_string(user1.userDeposit(user1.deposit_days, user1.deposit, user1.persent)) << endl;
	return 0;
}