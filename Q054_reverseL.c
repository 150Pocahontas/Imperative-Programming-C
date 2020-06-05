LInt reverseL (LInt l){
    LInt aux, newL = NULL;
    while(l != NULL){
        aux = l->prox;
        l->prox = newL;
        newL = l;
        l = aux;
    }
    return newL;
}
