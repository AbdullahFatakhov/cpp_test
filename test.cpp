#include <iostream>

class Player
{
    std::string name;
    int hp, speed, x, y;

public:
    
    void SetName(std::string valueName)
    {
        name = valueName;
    };
    
    std::string GetName()
    {
        return name;
    };
    
    int GetHp()
    {
        return hp;
    };

    void SetHp(int valueHp)
    {
        hp = valueHp;
    };

    int GetSpeed()
    {
        return speed;
    };

    void SetSpeed(int valueSpeed)
    {
        speed = valueSpeed;
    };
    //PRINTS
    void printStatus()
    {
        std::cout << name << "\n" << hp << "\n" << speed << "\n"; 
    };

    void printPoint()
    {
        std::cout << "Кордината X :" << x << "\n" << "Кордината Y :" << y << "\n";  
    };

    //Кординаты Игрока
    void SetX(int valueX)
    {
        x = valueX;
    };
    
    void SetY(int valueY)
    {
        y = valueY;
    };

    int GetX()
    {
        return x;
    };

    int GetY()
    {
        return y;
    };

};

int main()
{
    Player User;
    User.SetName("Said");
    User.SetHp();
    User.SetSpeed();
    User.SetX(0);
    User.SetY(0);
    

    User.printStatus();
    User.printPoint();
    return 0;
}
