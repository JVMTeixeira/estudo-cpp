#include <bits/stdc++.h>
using namespace std;

struct no{
    int valor;
    no* esquerda;
    no* direita;
};

void inserir_na_arvore(no* &arvore, int x){
    if(arvore == nullptr){
        no* no_novo = new no;
        no_novo->valor = x;
        no_novo->direita = nullptr;
        no_novo->esquerda = nullptr;
        arvore = no_novo;
    }else{
        if(x < arvore->valor){
            inserir_na_arvore(arvore->esquerda,x);
        }else{
            inserir_na_arvore(arvore->direita,x);
        }
    }
}

void infixa(no* arvore){
    if(arvore == nullptr) return;

    infixa(arvore->esquerda);

    cout << arvore->valor << ' ';

    infixa(arvore->direita);
}

void prefixa(no* arvore){

    if(arvore == nullptr) return;

    cout << arvore->valor << ' ';

    prefixa(arvore->esquerda);

    prefixa(arvore->direita);
    
}

void posfixa(no* arvore){

    if(arvore == nullptr) return;

    posfixa(arvore->esquerda);

    posfixa(arvore->direita);

    cout << arvore->valor << ' ';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);;

    int n, x;
    cin >> n;
    no *arvore = nullptr;

    while (n--) {
        cin >> x;
        inserir_na_arvore(arvore, x);
    }

    cout << "In.: ";
    infixa(arvore);
    cout << '\n';
    cout << "Pre: ";
    prefixa(arvore);
    cout << '\n';
    cout << "Pos: ";
    posfixa(arvore);
    cout << '\n';

    return 0;
}