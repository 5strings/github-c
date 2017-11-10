//
//  main.c
//  Operators
//
//  Created by Eun Jae Lee on 9/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

// Aritmsatic Operators + - * / %
// Relational Operators < > <=  >= ==
// Logical &&-and  ||-or  !-not
// Conditinal ? :  Syntax: condition? express1: expression2;
// Assignment Operators
// Increment/Decrement
// Bitwise
// Special

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 10, b = 30, c = 15;
    
    int marks = 9;
    
    if(marks>5) {
        
        printf("The mark is larger than 5\n");
    } else {
        
        printf("The mark is less than 5\n");
    }
        
    
    if (a>b && b>c) { // 2 condition T T - T, T F - F
        
        printf("Your number is 10\n");
    }
    
    
    if (a>b || b>c) { // T T - T, F T - T, ...
        
        printf("Your number is more than 10\n");
    }
    
    // Conditional exmaple
    c = (a>b)?a:b;
    
    
    
    
    return 0;
}
