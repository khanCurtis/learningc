#include <stdio.h>

int runner() {
    static int count = 0;
    count++;
    return count;
}

static void fun(void) {
    printf("I am a static function.\n");
}

int sum (int num) {
    static int sum;
    sum += num;
    return sum;
}

int main(void) {
    {
        printf("%d \n", runner());
        printf("%d \n", runner());
    }

    {
        fun();
    }

    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));

    return 0;
}