#include "initializer.h"
#include <cstdlib>
#include <ctime>
void Initializer::init(Deposit*& list, int count) {
    if (list == nullptr && count > 0)
    {
        list = new Deposit[count];
    }
    srand(time(0));
    string names[] = {
        "Alice",    "Bob",      "Charlie",  "David",    "Eve",
        "Frank",    "Grace",    "Henry",    "Ivy",      "Jack",
        "Kate",     "Liam",     "Mia",      "Noah",     "Olivia",
        "Dima",     "Victor",   "Pasha",    "Emma",     "Sophia",
        "James",    "Michael",  "Emily",    "Daniel",   "Elizabeth",
        "Alexander","Sofia",    "Benjamin", "Abigail",  "William",
        "Charlotte","Samuel",   "Ella",     "Joseph",   "Scarlett",
        "Andrew",   "Hannah",   "Christopher","Lucas",  "Zoey",
        "Ryan",     "Ava",      "Nathan",   "Chloe",    "John",
        "Lily",     "Isaac",    "Grace",    "Owen",     "Madison",
        "Luke",     "Riley",    "Carter",   "Nora",     "Gabriel",
        "Ellie",    "Dylan",    "Avery",    "Leo",      "Hazel",
        "Isaac",    "Violet",   "Julian",   "Penelope", "Max",
        "Stella",   "Aaron",    "Claire",   "Thomas",   "Savannah",
        "Connor",   "Bella",    "Elijah",   "Lucy",     "Caleb",
        "Paisley",  "Adrian",   "Skylar",   "Evan",     "Naomi",
        "Jordan",   "Elena",    "Nicholas", "Maya",     "Dominic",
        "Leah",     "Tyler",    "Aurora",   "Christian","Kimberly",
        "Jonathan", "Mila",     "Xavier",   "Eva",      "Brandon",
        "Alice",    "Zoe",      "Robert",   "Ruby",     "Adam"      // 100 names
    };

    
    int minAge = 18;
    int maxAge = 99;

    int MinDepositDays = 10;
    int MaxDepositDays = 36500; // Исправлено значение

    int MinDeposit = 1000;
    int MaxDeposit = 100000000; // Исправлено значение

    double MinPersent = 1.0;
    double MaxPersent = 75.0;

    for (int i = 0; i < count; i++) {
        // Исправлен выбор имени (индекс 0-99)
        list[i].setName(names[rand() % 100]);

        list[i].setAge(rand() % (maxAge - minAge + 1) + minAge);
        list[i].setDepositDays(rand() % (MaxDepositDays - MinDepositDays + 1) + MinDepositDays);
        list[i].setDeposit(rand() % (MaxDeposit - MinDeposit + 1) + MinDeposit);

        // Генерация процента как double
        double persent = MinPersent + static_cast<double>(rand())
            / (static_cast<double>(RAND_MAX / (MaxPersent - MinPersent)));
        list[i].setPersent(persent);
    }
}