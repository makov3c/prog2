 #include <stdio.h>
void vsotaPoModulu() {
   int a, b;
   scanf("%d %d", &a, &b);
   int sumMod = (a + b)%10;
   printf("%d\n",sumMod);
}

int vsaEnaka() {
   int n;
   scanf("%d", &n);

   int a;
   scanf("%d", &a);

   for (int i = 0; i < n-1; i++) {
      int b;
      scanf("%d", &b);
      if (b != a) {
         return 0;
      }
   }
   return 1;
}

void drugoNajvecje() {
   int n;
   scanf("%d", &n);
   int a,b;
   a = 0;
   b = 0;
   for (int i = 0; i < n; i++) {
      int x;
      scanf("%d", &x);
      if (x > b) {
         if (x > a) {
            b = a;
            a = x;
         }
         else {
            b = x;
         }
      }
      

   }
   printf("%d\n", b);
}

int main() {
   // vsotaPoModulu();
   // printf("%d\n", vsaEnaka());
   drugoNajvecje();


   return 0;
}