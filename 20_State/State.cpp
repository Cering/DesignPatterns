#include "State.h"
#include "Context.h"

void State::ChangeState(Context* ctx, State* s)
{
    if(ctx)
        ctx->ChangeState(s);
}