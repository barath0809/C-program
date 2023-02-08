#include <stdio.h>
#include <inttypes.h>
//Macro to swap the byte
#define CHANGE_ENDIANNESS(A)   ((((uint32_t)(A) & 0xff000000) >> 24) \ 
                               | (((uint32_t)(A) & 0x00ff0000) >> 8) \
                               | (((uint32_t)(A) & 0x0000ff00) << 8)  \
                               | (((uint32_t)(A) & 0x000000ff) << 24))
int main()
{
    uint32_t u32CheckData  = 0x11223344;
    uint32_t u32ResultData =0;
    u32ResultData = CHANGE_ENDIANNESS(u32CheckData);
    printf("0x%x\n",u32ResultData);
    return 0;
}