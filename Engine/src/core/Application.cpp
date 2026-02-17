#include "Application.h"
#include "Engine.h"

namespace Yantra
{

    Application::Application()
    {

    }

    Application::~Application()
    {

    }

    void Application::Run()
    {
        Engine test;
        test.initialise();
    }

}

