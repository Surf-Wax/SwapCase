#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

# pragma comment(linker, "/INCLUDE:_mainCRTStartup")
#if defined(_M_IX86)
# pragma comment(linker, "/INCLUDE:_mainCRTStartup")
#else
# pragma comment(linker, "/INCLUDE:mainCRTStartup")
#endif

void StandardLibraryCalls()
{

    printf("");
    scanf("");

    //    unsigned char list[10];

}