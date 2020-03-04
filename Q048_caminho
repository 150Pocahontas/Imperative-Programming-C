{
    int i=0;
    for(i=0; (inicial.y!=final.y) || (inicial.x!=final.x);i++ ){
        if(inicial.y<final.y){
            mov[i]=Norte;
            inicial.y++;
        }else if(inicial.y>final.y){
            mov[i]=Sul;
            inicial.y--;
        }else if(inicial.x<final.x){
            mov[i]=Este;
            inicial.x++;
        }else{
            mov[i]=Oeste;
            inicial.x--;
        }
    }
    if(i>N) return -1;
    return i;
}
