//Sefa Enes Ergin- sefaenesergin@gmail.com
/*  Aşağıdaki şekli yazdıran kod.
 1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1
7 6 5 4 3 2 1 */
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int i,j,n;
    printf("Lütfen satır sayısını giriniz...:");
    scanf ("%d",&n);
    for(i=1;i<=n;i++){
      for(j=i;j>=1;j--)
    printf("  %d",j);
    printf("\n");
    }
    return 0;
}
