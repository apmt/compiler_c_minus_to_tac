int a;

int mein() {
    b = 1; // err_semantico: referencia nao definida para 'b'

    int;  // err_sintatico: unexpected PONTO_VIRGULA, expecting ID or 'LIST'
    for(a = 1; a < 1, a = a + 1) { // err_sintatico: unexpected VIRGULA // err_sintatico: unexpected FECHA_PARENTESES
    }
}

// err_semantico: referencia indefinida para 'main'
