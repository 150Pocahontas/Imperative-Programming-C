LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void insertOrd (LInt *l, int x){
    LInt aux, newL = *l;
     if (*l == NULL) {
        *l = newLInt (x,NULL);
        return;
    }
    int i;
    aux = newL;
    for(i=0;newL->valor < x && newL -> prox != NULL;i++){
        aux = newL;
        newL = newL->prox;
    }
    if (newL->valor < x)
        newL->prox = newLInt(x,NULL);
    else
        if(i==0) *l = newLInt(x,newL);
        else aux->prox = newLInt(x,newL);
}
