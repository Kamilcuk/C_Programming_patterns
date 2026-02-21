#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"

Node* stack_init(){
        Node* newnode = NULL;
        return newnode;
}

int main(void){
        Node* ptr = stack_init();
        ptr = add(ptr, 16);
        display(ptr);
        return 0;
}


