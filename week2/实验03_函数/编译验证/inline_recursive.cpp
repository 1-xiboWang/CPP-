inline int f(int n){return n<=1?1:n*f(n-1);}
int main(){return f(5)==120?0:1;}
