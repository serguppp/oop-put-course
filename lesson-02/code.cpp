#include <iostream>

using namespace std;

class Human {
public:
	string name;
	string surname;
	int age;
};

class Dog {
public:
	string name;
	string owner;
	int age;

	int difference(int age) {
		return age - this->age;
	}
};

int main() {
	Human human;
	Dog dog;

	human.name = "Aleks";
	human.surname = "Nowak";
	human.age = 20;
	
	dog.name = "Diego";
	dog.owner = human.name + ' ' + human.surname;
	dog.age = 2;

	cout << dog.difference(human.age);
}
