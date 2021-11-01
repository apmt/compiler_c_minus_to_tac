int a;

int func(int list l1) {
    a = 0;
    l1 = a : l1;
    a = ? l1;
    l1 = a : l1;
    a = ! l1;
    l1 = a : l1;
    a = % l1;
    return a;
}

int main() {
    int list b;
    b = NIL;
    a = func(b); 
}