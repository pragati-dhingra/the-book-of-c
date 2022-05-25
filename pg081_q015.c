#include <stdio.h>
int main (int argc, char* argv[] ){
    int month = 0, day = 0;
  scanf("%d %d", &month ,&day);
   if ( month < 1|| month > 12|| day<1||day > 7) {
        printf("-1");
    } else {
        if (2==month) {
            printf("4");
        } else {
            if ((1==month||3==month||5==month||7==month||8==month||10==month||12==month)) {
                if((5==day||6==day||7==day)) {
                    printf("5");
                } else {
                    printf("4");
                }
            } else if (6==day||7==day) {
                printf("5");
            } else {
                printf("4");
            }
        }
    }
  return 0;
}
