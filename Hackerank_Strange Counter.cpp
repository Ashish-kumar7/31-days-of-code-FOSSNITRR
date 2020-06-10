long strangeCounter(long t) {

    long long int p=3;
    while(t>p){
        t=t-p;
        p=p*2;
    }
    return p-t+1;

}
