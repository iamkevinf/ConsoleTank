#include <iostream>

class GameMode
{
public:
    bool Init()
    {
        return false;
    }
    void Tick()
    {
        std::cout << "Tick" << std::endl;
    }
};

int main()
{
    GameMode mode;

    mode.Init();
    mode.Tick();

    system("pause");
    return 0;
}