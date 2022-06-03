#include "Caretaker.h"

int main()
{
    std::cout << "create originator and save memento:" << std::endl;
    std::shared_ptr<Originator> originator(new Originator());
    std::shared_ptr<Caretaker> caretaker(new Caretaker());
    originator->PrintState();
    caretaker->AddMemento(originator->CreateMemento());

    std::cout << std::endl;
    std::cout << "change originator and save memento:" << std::endl;
    originator->SetInt(1);
    originator->PrintState();
    caretaker->AddMemento(originator->CreateMemento());

    std::cout << std::endl;
    std::cout << "change originator and save memento:" << std::endl;
    originator->SetChar('b');
    originator->SetFloat(2.2);
    originator->PrintState();
    caretaker->AddMemento(originator->CreateMemento());

    std::cout << std::endl;
    std::cout << "restore originator from memento:" << std::endl;
    originator->SetMemento(caretaker->GetMemento(0));
    originator->PrintState();

    std::cout << std::endl;
    std::cout << "restore originator from memento:" << std::endl;
    originator->SetMemento(caretaker->GetMemento(2));
    originator->PrintState();

    std::cout << std::endl;
    std::cout << "delete memento:" << std::endl;
    caretaker->DelMemento(1);
    caretaker->DelMemento(1);
    originator->SetMemento(caretaker->GetMemento(1));
    originator->PrintState();

    return 0;
}