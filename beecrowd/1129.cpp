#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N;

    // O laço principal lê o valor de N.
    // Ele continuará enquanto a leitura for bem-sucedida e N não for 0.
    while (true) {

        cin >> N;

        // Este laço executa N vezes, uma para cada questão do caso de teste.
        for (int i = 0; i < N; ++i) {
            int A, B, C, D, E;
            cin >> A >> B >> C >> D >> E;

            int marcadas = 0; // Contador para alternativas marcadas
            char resposta = '*';  // Resposta padrão é inválida ('*')

            // Verifica a alternativa A
            if (A <= 127) {
                marcadas++;
                resposta = 'A';
            }

            // Verifica a alternativa B
            if (B <= 127) {
                marcadas++;
                resposta = 'B';
            }

            // Verifica a alternativa C
            if (C <= 127) {
                marcadas++;
                resposta = 'C';
            }

            // Verifica a alternativa D
            if (D <= 127) {
                marcadas++;
                resposta = 'D';
            }

            // Verifica a alternativa E
            if (E <= 127) {
                marcadas++;
                resposta = 'E';
            }

            // Após verificar todas, decide o que imprimir
            if (marcadas == 1) {
                // Se exatamente UMA foi marcada, imprime a resposta guardada
                cout << resposta << endl;
            } else {
                // Se nenhuma (marcadas = 0) ou mais de uma foi marcada, imprime '*'
                cout << "*" << endl;
            }
        }
        if(N == 0){
            break;
        }
    }

    return 0;
}