#include <iostream>
#include "TerminalExpressionVariable.h"
#include "TerminalExpressionConstant.h"
#include "NoTerminalExpressionPlus.h"

int main()
{
    std::cout << "create context and expression:" << std::endl;
    std::shared_ptr<Context> context(new Context());
    std::shared_ptr<AbstractExpression> var_a(new TerminalExpressionVariable("var_a"));
    std::shared_ptr<AbstractExpression> var_b(new TerminalExpressionVariable("var_b"));
    std::shared_ptr<AbstractExpression> val_c(new TerminalExpressionConstant(3));

    context->Assign(var_a, 1);
    context->Assign(var_b, 2);

    std::cout << std::endl;
    std::cout << "compute a+b:" << std::endl;
    std::shared_ptr<AbstractExpression> a_plus_b(new NoTerminalExpressionPlus(var_a, var_b));
    std::cout << a_plus_b->toString() << " = " << a_plus_b->Interpret(context) << std::endl;

    std::cout << std::endl;
    std::cout << "compute a+b+c:" << std::endl;
    std::shared_ptr<AbstractExpression> a_plus_b_plus_c(new NoTerminalExpressionPlus(a_plus_b, val_c));
    std::cout << a_plus_b_plus_c->toString() << " = " << a_plus_b_plus_c->Interpret(context) << std::endl;

    std::cout << std::endl;
    std::cout << "change a and compute a+b+c:" << std::endl;
    context->Assign(var_a, 4);
    std::cout << a_plus_b_plus_c->toString() << " = " << a_plus_b_plus_c->Interpret(context) << std::endl;

    std::cout << std::endl;
    std::cout << "lookup constant in context:" << std::endl;
    context->Lookup(val_c);

    return 0;
}