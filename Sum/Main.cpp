#include "pch.h" // Use esta linha se o PCH estiver habilitado. Caso contr�rio, pode omitir.

// Definindo a macro de exporta��o
//#ifdef MINHASOMADLL_EXPORTS
//#define MINHASOMADLL_API __declspec(dllexport)
//#else
//#define MINHASOMADLL_API __declspec(dllimport)
//#endif

#define MINHASOMADLL_API __declspec(dllimport)

extern "C" {
    // Fun��o que ser� exportada
    MINHASOMADLL_API int soma(int a, int b) {
        return a + b;
    }
}