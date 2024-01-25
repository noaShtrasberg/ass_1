
int isPrime(int n){
    if(n==0)
       return 0;
    if(n==1)
        return 1;
    for(int j=2;j<n;j++){
        if(n%j==0) return 0;
    }  
    return 1;
}

/*help function that return n! in recursion*/
int factorialHelp(int n){
    if(n==0 || n==1) return 1;
    else return n*factorialHelp(n-1);
}

int isStrong(int n){
    int sumFactorial=0;
    int oldN = n;
    int digit;
    if(n<10 && n==factorialHelp(n)) return 1;
    else{
        while (n>10)
        {
            digit=n%10;
            sumFactorial=sumFactorial+factorialHelp(digit);
            n=n/10;
        }
        sumFactorial=sumFactorial+factorialHelp(n);    
    }
    if(sumFactorial==oldN)return 1;
    return 0;
}
