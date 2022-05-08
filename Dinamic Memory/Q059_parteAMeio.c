LInt parteAmeio (LInt *l){
    LInt y = newLInt(1,*l);
    LInt nl = y;
    LInt x = *l;
    int i;
    for (i = 0; x != NULL; i++) 
        x = x-> prox;
    x = nl->prox;
    i= i/2;
    while(i>0){
        x=x->prox;
        nl=nl->prox;
        i--;
        
    }
    nl->prox=NULL;
    *l = x;
    nl = y;
    y= y->prox;
    return y;
}
