#include <iostream>

class GameMode
{
public:
	bool Init()
	{
		return true;
	}

	void Tick()
	{

	}
};

int main()
{
	GameMode mode;
	if (!mode.Init())
	{
		std::cout << "��ʼ��ʧ��" << std::endl;
		return -1;
	}

	mode.Tick();

	system("pause");
}