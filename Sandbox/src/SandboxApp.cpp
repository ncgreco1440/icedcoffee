#include <Icedcoffee.h>

class Sandbox : public Icedcoffee::Application
{
public: 
	Sandbox() { }
	~Sandbox() { }
};

Icedcoffee::Application* Icedcoffee::CreateApplication()
{
	return new Sandbox();
}