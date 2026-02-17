#include <Yantra.h>

class Editor : public Yantra::Application
{
public:
    Editor()
    {

    }

    ~Editor()
    {

    }


};

Yantra::Application* Yantra::CreateApplication()
{
    return new Editor();
}