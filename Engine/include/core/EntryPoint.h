#pragma once

extern Yantra::Application* Yantra::CreateApplication();

int main(int argc, char** argv)
{
    Logger::info("Starting Yantra Engine...");

    auto app = Yantra::CreateApplication();
    app->Run();
    delete app;

    Logger::info("Stopping Yantra Engine...");
}