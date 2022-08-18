#include <iostream>
#include <tss2/tss2_fapi.h>

int main() {
    FAPI_CONTEXT *context = NULL;
    TSS2_RC rc = Fapi_Initialize(
            &context,
            NULL);
    char *info = NULL;
    Fapi_GetInfo(context, &info);
    context.
    std::cout << info << std::endl;
    return 0;
}
