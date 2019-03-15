#pragma once

#ifdef IC_PLATFORM_WINDOWS 

extern Icedcoffee::Application* Icedcoffee::CreateApplication();

int main(int argc, char** argv)
{
	printf("Icedcoffee Engine\n");
	auto app = Icedcoffee::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif