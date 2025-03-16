#include <stdio.h>

// Funções separadas para cada operação
float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2, resultado;
    int operador;
    char continuar;

    do {
        // Entrada do primeiro número
        printf("Digite o primeiro número: ");
        if (scanf("%f", &num1) != 1) {  // Verifica se o número foi lido corretamente
            printf("Entrada inválida. Por favor, insira um número.\n");
            while (getchar() != '\n'); // Limpa o buffer
            continue; // Volta ao início do loop
        }

        // Entrada do segundo número
        printf("Digite o segundo número: ");
        if (scanf("%f", &num2) != 1) {  // Verifica se o número foi lido corretamente
            printf("Entrada inválida. Por favor, insira um número.\n");
            while (getchar() != '\n'); // Limpa o buffer
            continue;
        }

        // Menu de operações
        printf("\nSelecione o operador:\n");
        printf("1 - Adição (+)\n");
        printf("2 - Subtração (-)\n");
        printf("3 - Multiplicação (*)\n");
        printf("4 - Divisão (/)\n");
        printf("Escolha: ");
        
        if (scanf("%d", &operador) != 1) {  // Verifica se foi digitado número inteiro
            printf("Operador inválido. Digite um número de 1 a 4.\n");
            while (getchar() != '\n'); // Limpa o buffer
            continue;
        }

        // Switch para decidir a operação
        switch (operador) {
            case 1:
                resultado = soma(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtrai(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplica(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = divide(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisão por zero não é permitida.\n");
                }
                break;
            default:
                printf("Operador inválido. Digite um número de 1 a 4.\n");
        }

        // Pergunta se o usuário quer fazer outro cálculo
        printf("\nDeseja fazer outro cálculo? (s/n): ");
        while (getchar() != '\n'); // Limpa o buffer
        continuar = getchar();    // Lê o 's' ou 'n'
        printf("\n");

    } while (continuar == 's' || continuar == 'S');  // Repete se usuário quiser

    printf("Encerrando a calculadora. Obrigado por usar!\n");
    return 0;
}
