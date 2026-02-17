#pragma once

namespace Yantra
{

    class Application
    {
    public:
        Application();
        virtual ~Application();
        
        void Run();
    };

    // To be defined in Editor or client
    Application* CreateApplication();
}