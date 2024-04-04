#include "pch.h" // Use esta linha se o PCH estiver habilitado. Caso contrário, pode omitir.

// Definindo a macro de exportação
//#ifdef MINHASOMADLL_EXPORTS
//#define MINHASOMADLL_API __declspec(dllexport)
//#else
//#define MINHASOMADLL_API __declspec(dllimport)
//#endif

#define MINHASOMADLL_API __declspec(dllimport)

extern "C" {
    // Função que será exportada
    MINHASOMADLL_API int soma(int a, int b) {
        return a + b;
    }
}