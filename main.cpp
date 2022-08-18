#include <iostream>
#include <tss2/tss2_fapi.h>
#include <cstring>

int main() {
    FAPI_CONTEXT *context = NULL;
    TSS2_RC rc = Fapi_Initialize(
            &context,
            NULL);
    char *info = NULL;
    Fapi_GetInfo(context, &info);
    // std::cout << info << std::endl;
    uint8_t *random_bytes;
    Fapi_GetRandom(context, 20, &random_bytes);
    std::cout << random_bytes << std::endl;

    // Fapi_CreateKey(context, "/HS/SRK/first_key", NULL, NULL, NULL);
    char *lst;
    Fapi_List(context, "/", &lst);

    std::cout << lst << std::endl;

    uint8_t* text_ptr = (uint8_t*) "Hello tpm";;
    uint8_t* cipher;
    size_t* cipher_size;
    
    Fapi_Encrypt(context, "/HS/SRK/first_key", text_ptr, sizeof text_ptr, &cipher, cipher_size);

    std::cout << cipher << std::endl;

    Fapi_Finalize(&context);
    return 0;
}
