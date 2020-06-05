int removeOneOrd (LInt *l, int x){
    LInt aux,newl = *l;
    if(*l == NULL) return 1;
    if((*l)->valor == x && (*l)->prox ==NULL ){
        *l = NULL;
        return 0;
    }
    aux = newl;
    while(newl != NULL){
        if(newl->valor == x){ 
            aux->prox = newl->prox;
            newl = aux->prox;
            return 0;
        }
        else{ 
            aux = newl;
            newl = newl->prox;
        }
    }
    return 1;
}
