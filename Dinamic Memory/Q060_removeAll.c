int removeAll (LInt *l, int x){
    LInt nl = *l, aux;
    LInt y = newLInt(1,*l);
    *l=y;
    int i =0;
    while(nl!=NULL){
        if(nl->valor == x){
            y->prox=nl->prox;
            aux=nl;
            nl=nl->prox;
            i++;
            free(aux);
        }
        else{
            nl=nl->prox;
            y=y->prox;
        }
    }
    aux =*l;
    *l = aux->prox;

    return i;
}
