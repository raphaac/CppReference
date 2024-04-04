#include "pch.h" // Use esta linha se o PCH estiver habilitado. Caso contr�rio, pode omitir.

// Definindo a macro de exporta��o
#define DLL_EXPORT __declspec(dllexport)

extern "C" {
    // Fun��o que ser� exportada
    DLL_EXPORT int soma(int a, int b) {
        return a + b;
    }

    // Fun��o que ser� exportada
    DLL_EXPORT int multiplicacao (int a, int b) {
        return a * b;
    }
}