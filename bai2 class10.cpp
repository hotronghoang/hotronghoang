#include<stdio.h>
#include<string.h>
int main() {
   char s[10][50], t[50];
   int i, j;
   printf("Nhap 10 chuoi bat ky: \n");
   for (i = 0; i < 10; i++)
      scanf("%s", s[i]);
   for (i = 1; i < 10; i++) {
      for (j = 1; j < 10; j++) {
         if (strcmp(s[j - 1], s[j]) > 0) {
            strcpy(t, s[j - 1]);
            strcpy(s[j - 1], s[j]);
            strcpy(s[j], t);
         }
      }
   }
   printf("\nSap xep thu tu cua cac chuoi:");
   for (i = 0; i < 10; i++)
      printf("\n%s", s[i]);
}
