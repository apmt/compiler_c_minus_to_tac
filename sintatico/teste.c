int x;

int list concatena (int list a, int list b) {
    int list b_inverso;
    int elem;
    for(; b != NIL;) {
        elem = % b;
        b_inverso = elem : b_inverso;
    }
    for(; b_inverso != NIL;) {
        elem = % b_inverso;
        a = elem : a;
    }
    return a;
}

int dobra (int a){
    return 2 * a;
}

int main () {
    float list x, y, z;
    float elem;
    int v_int;

    read(elem);
    if(elem == 0) {
        write("zero\n");
    } else {
        write(" not zero\n");
    }
    x = elem : x;

    read(elem);
    y = elem : y;

    z = concatena(x, y);

    v_int = 1;
    write(dobra(v_int));
}