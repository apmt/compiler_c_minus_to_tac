int main() {
    int a;
    float a; // err_semantico: referencia duplicada, 'a' ja definida

    int list c;
    c = 2; // err_semantico: c espera tipo lista

    int b;
    read(b; // err_sintatico: unexpected PONTO_VIRGULA
    b = 2 3; // err_sintatico: unexpected INTEGER_CONST
}