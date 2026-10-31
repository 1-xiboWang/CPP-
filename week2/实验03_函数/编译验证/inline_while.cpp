inline int f(int n){int s=0;while(n>0)s+=n--;return s;}
int main(){return f(10)==55?0:1;}
