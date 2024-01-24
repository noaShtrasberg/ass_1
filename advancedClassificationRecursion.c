
int factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}

int power(int n,int p){
    if(p==0) return 1;
    else return n*power(n,p-1);
}

int getLengthNum (int n){
    if(n<10)return 1;
    else return 1+getLengthNum(n/10);
}

int isArmHelp(int n,int length){
    if(n==0) return 0;
    else return (power(n%10,length)+isArmHelp(n/10,length));
}

int reverse(int n,int length){
    if(length==1) return n;
    else return ((n%10)*power(10,length-1)) + reverse(n/10,length-1);
}

int isPalindrome(int n){
    int len = getLengthNum(n);
    int sameNum = n;
    if(reverse(sameNum,len)==n)
        return 1;
    else return 0;
}

int isArmstrong(int n){
    int number = n;
    int len = getLengthNum(n);
    int nArm = isArmHelp(n,len); 
    if(number == nArm) return 1;
    else return 0;
}
