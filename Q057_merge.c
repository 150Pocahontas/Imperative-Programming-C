LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void merge (LInt *r, LInt l1, LInt l2) {
    *r = newLInt(1,NULL);
    LInt newl = *r;
    while (l1 != NULL || l2 != NULL) {
        if (l1 == NULL) {
            newl->prox = l2;
            break;
        } else if (l2 == NULL) {
            newl->prox = l1;
            break;
        } else {
            if (l1->valor < l2->valor) {
                newl->prox = l1;
                l1 = l1->prox;
                newl = newl->prox;
            } else {
                newl-> prox = l2;
                l2 = l2->prox;
                newl = newl->prox;
            }
        }
    }
    newl = *r;
    *r = (*r) -> prox;
}
