Access control under inheritance
#include <iostream>
using namespace std;

class Enemy
{
public:
    Enemy(): m_Damage(10) {} 
    
    void Attack() const
    { cout << "Attack inflicts " << m_Damage << " damage points!\n"; }  

protected:
    int m_Damage;
};

class Boss : public Enemy
{
public:
    Boss(): m_DamageMultiplier(3) {}
        
    void SpecialAttack() const
    { cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage); 
      cout << " damage points!\n"; }

private:
    int m_DamageMultiplier;
};

int main()
{ 
    Enemy enemy1;
    enemy1.Attack();

    Boss boss1;
    boss1.Attack();
    boss1.SpecialAttack();

    return 0;
}
