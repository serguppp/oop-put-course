// ConsoleApplication2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
        string brand;
        string fault;
public:
        void DefineCar(string newBrand, string newFault) {
                this->brand = move(newBrand);
                this->fault = move(newFault);
        }
        string CurrentBrand() {
                return this->brand;
        }
        string CurrentFault() {
                return this->fault;
        }
};
class Mechanic{
public:
        void RepairCar(Car car) {
                car.DefineCar(car.CurrentBrand(),"repaired");
        }
};
int main()
{
        Car car;
        car.DefineCar("Daewoo Matiz", "Oil leak");
        Mechanic mechanic;
        mechanic.RepairCar(car);
        cout << "Is my car repaired?: " << car.CurrentFault();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
