#include <iostream>

using namespace std;

class Sword {
private:
    double damage = 10.0;
    double buff;
public:
    double Damage() {
        return this->damage + this->buff;
    }
    Sword() { this->buff = 0.0; };
    Sword(double val) { this->buff = val; };
    Sword(float val) : Sword(static_cast<double>(val)) {};
};

int main()
{
    Sword sword;
    cout << "default sword: " << sword.Damage() << "\n";
    Sword iron_sword(21.0f);
    cout << "iron sword: " << iron_sword.Damage();
}
