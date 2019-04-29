#include <mapf/common/context.h>
#include <zmq.h>

namespace mapf
{

Context& Context::Instance()
{
    static Context instance;
    return instance;
}

Context::~Context()
{
    Close();
}

Context::Context() : ctx_(zmq_ctx_new())
{
    mapf_assert(ctx_);
}

void Context::Close()
{
    if (ctx_ == nullptr)
        return;

    int rc = zmq_ctx_destroy(ctx_);
    mapf_assert(rc == 0);
    ctx_ = nullptr;
}

void *Context::get()
{
    return ctx_;
}

} /* namespace mapf */