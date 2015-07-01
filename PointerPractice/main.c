//
//  main.c
//  PointerPractice
//
//  Created by Auston Salvana on 7/1/15.
//  Copyright (c) 2015 ASolo. All rights reserved.
//

#include <stdio.h>

int a =13,b = 5,c = 10;


int main(int argc, const char * argv[]) {
    
    
    
    int *pntr1 = &a,*pntr2 = &b,*pntr3 = &c,*pntr4 = &c;
    
    *pntr1 *= 2;
    *pntr3 += 1;
    pntr4 = pntr2;
    *pntr4 += 4;
    
    printf("%i\n", *pntr1);
    printf("%d\n", c);
    printf("%d", *pntr4);
    
    return 0;
}
