int dist(Posicao p){
    return abs(p.x) + abs(p.y);
}

int maiscentral (Posicao pos[], int N){
    int i,r=0;
    Posicao c=pos[0];
    for(i=1;i<N;i++)
        if(dist(pos[i])<dist(c)){
            r=i;
            c= pos[i];
        }
    return r;
}
