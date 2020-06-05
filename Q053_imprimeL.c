void freeL (LInt l) {
    while (l != NULL) {
        printf("%d\n",l->valor);
        l = l->prox;
    }
}
