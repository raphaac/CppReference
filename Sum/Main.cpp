#include "pch.h" // Use esta linha se o PCH estiver habilitado. Caso contrário, pode omitir.

// Definindo a macro de exportação
#define DLL_EXPORT __declspec(dllexport)

extern "C" {
    // Função que será exportada
    DLL_EXPORT int soma(int a, int b) {
        return a + b;
    }

    // Função que será exportada
    DLL_EXPORT int multiplicacao (int a, int b) {
        return a * b;
    }
}