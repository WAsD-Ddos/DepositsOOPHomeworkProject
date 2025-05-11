#include "Deposit.h"
class Clients
{
	private:
		Deposit* list;
		int count;
	public:
		Clients();
		Clients(Deposit* list, int count);
		~Clients();

		Deposit getClient(int index);
		//void add(Student student);
		//void remove(Student student);
		//void remove(int index);
		void set(Deposit cl1, Deposit cl2);
		void set(int index, Deposit st2);


		string getClients();

};

