long factorial(int n){
    long factorial=1;
    for(int i=1;i<=n;i++){
        factorial=i;

    }
return factorial;
}

int fibonnacci(int n){
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
     {
        c=a+b;
        a=b;
        b=c;
     }
     return c;
}