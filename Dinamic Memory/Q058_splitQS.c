LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void splitQS (LInt l, int x, LInt *mx, LInt *Mx){
    *mx = newLInt(1,NULL);
    *Mx = newLInt(1,NULL);
    LInt newm = *mx, newM = *Mx;
    while(l!=NULL){
        if(l->valor<x){
            newm->prox = l;
            l=l->prox;
            newm = newm->prox;
            newm->prox = NULL;
        }
        else{
            newM->prox = l;
            l=l->prox;
            newM = newM->prox;
            newM->prox = NULL;
        }
    }
    *mx = (*mx)->prox;
    *Mx = (*Mx)->prox;
}
