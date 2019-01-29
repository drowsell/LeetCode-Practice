//
//  709-To-Lower-Case.c
//
//  Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.
//
//  Created by Dylan Rowsell on 2019-01-28.
//

#include <stdio.h>


char* toLowerCase(char* str) {
    
    int i = 0;
    
    while (str[i] != NULL){
        
        if (str[i] > 64 & str[i] < 91) {
            str[i] = str[i] + 32;
        }
        
        i++;
        
    }
    
    return str;
    
}
