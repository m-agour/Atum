#include <Atum.h>


class Sandbox : public Atum::Application 
{
public:
	Sandbox() 
	{

	}

	~Sandbox() 
	{

	}

};

Atum::Application* Atum::CreatApplication() 
{
	return new Sandbox();
}
