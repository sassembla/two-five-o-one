//
//  main.c
//  two-five-o-one
//
//  Created by illusionismine on 2015/03/09.
//  Copyright (c) 2015年 KISSAKI. All rights reserved.
//

#include <stdio.h>
#include <sys/socket.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int s = socket(AF_UNIX, SOCK_STREAM, 0);
//    if (bind(s, "0.0.0.1", 80) == -1) {
//        
//    }
    
        
    return 0;
}
