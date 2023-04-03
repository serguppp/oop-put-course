#include <iostream>
#include <string>

using namespace std;

class Sword {
public:
        virtual int Attack() = 0;
        virtual Sword* EnchantedSword(const int buff) = 0;
};

class Wooden_Sword : public Sword {
public:
        Wooden_Sword(const int damage) : damage(damage) {}
        int Attack() override { return this->damage; }
        Sword* EnchantedSword(const int buff) override { return new Wooden_Sword(this->damage + buff); }
private:
        const int damage;
};

int main()
{
        int strength = 10;

        Wooden_Sword wooden_sword(20);
        cout << wooden_sword.Attack() << "\n";
        Sword* enchanted_wooden_sword = wooden_sword.EnchantedSword(strength);
        cout << enchanted_wooden_sword->Attack() << "\n";

        
        return 0;
}
