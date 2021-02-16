#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Perguntar qual o nome
    string name = get_string("Qual é o seu nome?\n");
    // Salvar na varíavel e printar
    printf("hello, %s\n", name);
}
