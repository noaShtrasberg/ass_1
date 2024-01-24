int lengthNumber(int n){
    int count=0;
    if(n<10) return 1;
    else{
        while (n>10)
        {
            count++;
            n=n/10;
        }
        count++;
    }
    return count;
} 

int power(int n,int p){
    if(n==0 || n==1) return n;
    int num = n;
    for(int i=0 ; i<(p-1) ; i++){
       num = num*n;
    }
    return num;
}

int isArmstrong(int n){
    int sum=0;
    int digit;
    int number=n;
    int count=lengthNumber(n);
    if(n<10) return 1;
    else{
        for(int i=0;i<count;i++)
        {
            digit=n%10;
            sum=sum+power(digit,count);
            n=n/10;
        }
        if(number==sum) return 1;
        return 0;
    }
}

int isPalindrome(int n){
    int num=n;
    int numFromRight=0;
    int d;
    while(n>0){
        d=n%10;
        numFromRight=numFromRight*10+d;
        n=n/10;
    }
    if(numFromRight==num) return 1;
    return 0;
}
