#include "State.h"
#include "Context.h"

void State::ChangeState(Context* ctx, State* s)
{
    ctx->ChangeState(s);
}