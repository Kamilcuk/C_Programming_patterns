#include <stdio.h>
#include <stdbool.h>
/*The entire purpose of the code is to somewhat emulate the functionality of generator/yield 
 * functions like the ones present in python or lua*/

typedef struct{
        bool resume;//resume variable exists as a flag to check whether to start new or continue from before
        int a;
        int b;
}fib_frame;//the struct frame is created to store the progress of generator

int fib_next(fib_frame *f){

        if(f->resume)
                goto resume_1;
        else
                goto start;
        start:
        f->a = 0;
        f->b = 1;

        while(1){
                f->resume = true;
                return f->a;

                resume_1:
                int next = f->a + f->b;
                f->a = f->b;
                f->b = next;
        }
}

int main(){
        fib_frame f = {false};
        for (int i = 0; i<10; i++){
                printf("%d ", fib_next(&f));
        }
        return 0;
}

