#include <iostream>
#include <cstdio>
#include <map> // dá acesso à estrutura map, que é como uma “tabela ordenada” onde cada número (chave) guarda sua quantidade de vezes (valor).

using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> freq;
    /*
    Aqui criamos um mapa chamado freq:
    A chave (int) é o número que aparece na entrada.
    O valor (int) é quantas vezes esse número apareceu.
    Exemplo: se o número 10 aparecer 3 vezes, no mapa vai ficar assim: {10: 3}.
    */

    // leitura dos valores e contagem
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    /*
    Esse for serve para ler todos os N números.
    int x; → cria uma variável para guardar o número lido.
    cin >> x; → lê o número digitado.
    freq[x]++; → aumenta a contagem desse número dentro do mapa.
    Se for a primeira vez que o número aparece, o mapa cria automaticamente freq[x] = 0, e depois soma +1.
    Se já apareceu antes, só incrementa.
    Exemplo prático:
    Usuário digita: 8 → freq[8] = 1.
    Depois digita: 10 → freq[10] = 1.
    Depois 8 de novo → freq[8] = 2
    */

    // percorre o map (já está em ordem crescente)
    for (auto &par : freq) {
        cout << par.first << " aparece " << par.second << " vez(es)" << endl;
    }
    /*
    Esse segundo for percorre o mapa em ordem crescente das chaves (números).
    auto &par : freq → cada par é um item do mapa (chave, valor).
    par.first = o número.
    par.second = quantas vezes apareceu.
    */

    return 0;
}
