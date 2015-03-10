//
//  main.c
//  cliTool
//
//  Created by Jeffrey C Rosenthal on 3/9/15.
//  Copyright (c) 2015 Jeffreycorp. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("hello! My name is Adam\nWill you play with me?\nwhat would you like to play?");
    bool exit = false;
    
    
    do {
        
        char lulz[256];
        char chec[256];
        
        printf("\nhow are you?");
        scanf("%s", lulz);

        if (strlen(lulz)==0)
        {
            printf("speak up!");
        }
        else if (strncmp(lulz,chec,1)==0) {
            printf("hey nanny no");
            
        }
        
        
        else if (strcmp(lulz,"exit")==0) {
            exit = true;

        }

        else if (strcmp(&lulz[strlen(lulz)-1],"?")==0) {
         
            printf("heybuddy donnask me that");
        }
        
        else {
            bool uppercase = true;
            for(int i=0;i<strlen(lulz);i++){

                if(!(lulz[i]>=65&&lulz[i]<=90)) {
                    uppercase = false;
                    break;
                }
            }
            printf("\n");
            if (uppercase) {
            printf("wtf man");
            }
        }
    }
    while (exit == false);
    
    printf("thanks for talking!");
    return 0;
}
