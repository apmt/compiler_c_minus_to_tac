int func_1(int a, float b) {
    return a + b;
}

int main() {
    int a;
    float a; // err_semantico: referencia duplicada, 'a' ja definida

    int list c;
    c = 2; // err_semantico: c espera tipo lista

    int b;
    read(b; // err_sintatico: unexpected PONTO_VIRGULA
    b = 2 3; // err_sintatico: unexpected INTEGER_CONST

    return func_1(a, b, b); // err_semantico: quantidade incorreta de paramentros passados para a funcao 'func_1'
}