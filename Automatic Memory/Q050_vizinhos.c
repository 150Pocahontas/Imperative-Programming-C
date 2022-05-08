int vizinhos (Posicao p, Posicao pos[], int N) {
    int r=0,i;
    for(i=0;i<N;i++){
        if((pos[i].x==p.x+1 || pos[i].x==p.x-1) && pos[i].y==p.y) r++;
        if((pos[i].y==p.y+1 || pos[i].y==p.y-1) && pos[i].x==p.x) r++;
    }
    return r;
}
