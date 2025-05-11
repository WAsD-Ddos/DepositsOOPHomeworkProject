#include "Clients.h"


Clients::Clients() {
	list = nullptr;
	count = 0;
}
Clients::Clients(Deposit* list, int count) {
	if (list != nullptr && count > 0) {
		list = new Deposit[count];
		this->count = count;

		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}

	}



}

Clients::~Clients()
{
	if (list != nullptr) {
		delete[] list;
	}
}

Deposit Clients::getClient(int index)
{
	if (index >= 0 && index < count) {
		return list[index];
	}
	return Deposit("", 0, 0, 0, 0.0, false);
}
//void Group::add(Student student){}
//void Group::remove(Student student){}
//void Group::remove(int index){}
void Clients::set(Deposit cl1, Deposit cl2)
{
	for (int i = 0; i < count; i++)
	{
		if (cl1.getName() == list[i].getName()
			&& cl1.getAge() == list[i].getAge()
			&& cl1.getDepositDays() == list[i].getDepositDays()
			&& cl1.getDeposit() == list[i].getDeposit()
			&& cl1.getPersent() == list[i].getPersent()
			&& cl1.isAttitude() == list[i].isAttitude()
			) {
			list[i] = cl1;
		}
	}
}
void Clients::set(int index, Deposit cl2)
{
	if (index >= 0 && index < count) {
		list[index] = cl2;
	}
}


string Clients::getClients()
{
	string s = " ";
	for (int i = 0; i < count; i++)
	{
		s += list[i].getInfo();
	}
	return s;
}