#include <iostream>
#include "Receiver.h"
#include "Invoker.h"
#include "ConcreteCommand.h"
#include "TemplateCommand.h"

int main()
{
    std::shared_ptr<Receiver> receiver_1(new Receiver());
    std::shared_ptr<Command>  command_1(new ConcreteCommand(receiver_1));
    std::shared_ptr<Receiver> receiver_2(new Receiver());
    std::shared_ptr<Command>  command_2(new ConcreteCommand(receiver_2));
    std::shared_ptr<Receiver> receiver_3(new Receiver());
    std::shared_ptr<Command>  command_3(new TemplateCommand<Receiver>(receiver_3, Receiver::ActionForTemplate));

    std::shared_ptr<Invoker> invoker(new Invoker());

    std::cout << "add command:" << std::endl;
    invoker->Add(command_1);
    invoker->Add(command_2);
    invoker->Add(command_3);

    std::cout << std::endl << "remove command:" << std::endl;
    invoker->Remove(command_2);

    std::cout << std::endl << "run command:" << std::endl;
    invoker->Run();

    return 0;
}