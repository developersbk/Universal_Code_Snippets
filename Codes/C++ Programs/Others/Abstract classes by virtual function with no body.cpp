Abstract classes by virtual function with no body
#include <iostream>
using namespace std;

class Animal{
public:
    Animal(int health = 100);
    virtual void Greet() const = 0;   //pure virtual member function
    virtual void DisplayHealth() const;

protected:
    int m_Health;
};

Animal::Animal(int health): m_Health(health){}
void Animal::DisplayHealth() const{
    cout << "Health: " << m_Health << endl;
}

class Orc : public Animal{
public:
    Orc(int health = 120);
    virtual void Greet() const;
};

Orc::Orc(int health):
    Animal(health)
{}

void Orc::Greet() const
{
    cout << "The orc grunts hello.\n";
}

int main()
{
    Animal* pAnimal = new Orc();
    pAnimal->Greet();
    pAnimal->DisplayHealth();

    return 0;
}
