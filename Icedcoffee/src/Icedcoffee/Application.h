#pragma once
#include "core.h"

namespace Icedcoffee
{

	class ICEDCOFFEE_API Application
	{
		public:
			Application();
			virtual ~Application();

			void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
