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
