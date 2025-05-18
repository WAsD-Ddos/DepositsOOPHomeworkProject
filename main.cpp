#include "Queue.h"

int main() {
	//Deposit user1("Vlad", 19, 273 , 350000 , 4.7 , true);//name | age | deposit days | deposit | persent | attitute
	//
	//cout << user1.getInfo() << endl;
	//cout << "Your Deposit: " << user1.userDeposit(user1.getDepositDays(), user1.getDeposit(), user1.getPersent()) << endl;
	
	//int count;
	//cout << "input number of users: " << endl;
	//cin >> count;


	//Deposit* list = nullptr;

	//Initializer initializer;

	//initializer.init(list, count);
	//cout << "full list of users" << endl;
	//for (int i = 0; i < count; i++)
	//{
	//	cout << list[i].getInfo() << endl;
	//}
	

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
	//// информация о вашем автомобиле
	//cout << "\nInfo about your you" << endl;
	//cout << user.getInfo() << endl;




	Queue queue;

	// Создание депозитов
	Deposit d1("Alice", 30, 1000, 365, 5.0, true);
	Deposit d2("Bob", 25, 2000, 180, 4.5, false);

	// Добавление в очередь
	queue.enqueue(d1);
	queue.enqueue(d2);

	// Вывод содержимого
	cout << "Queue contents:\n" << queue.toString() << "\n\n";
	cout << "_________________________" << endl;
	cout << "Size queue: " << queue.getLength() << "\n";
	cout << "_________________________" << endl;
	// Просмотр первого элемента
	Deposit first = queue.peek();
	cout << "first element:" << "\n\n";
	cout<< first.getInfo();
	cout << "_________________________" << endl;
	// Извлечение всех элементов
	while (!queue.isEmpty()) {
		Deposit client = queue.dequeue();
		cout << "Extracted:\n" << client.getInfo() << "\n";
		cout << "Elements Remaining: " << queue.getLength() << "\n";
		cout << "_________________________" << endl;
	}

	return 0;

}