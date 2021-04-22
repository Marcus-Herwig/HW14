#include <string>

using namespace std;

class Card
{
    private:
        string name;
        int mana_cost;
        int attack;
        int defense;
        int count;
    
    public:
        Card(string name, int mana_cost, int attack, int defense, int num);
        void display();
        int getDefense();
};