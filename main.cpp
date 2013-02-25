//
//  main.cpp
//  coroserver
//
//  Created by Xu Chen on 13-2-23.
//  Copyright (c) 2013 Xu Chen. All rights reserved.
//

#include <iostream>
#include "server.h"

int main(int argc, const char *argv[]) {
    const char *addr="0.0.0.0";
    const char *port="20000";
    std::size_t num_threads = 2;
    try {
        server s(addr, port, num_threads);
        
        s.run();
    } catch (std::exception& e) {
        std::cerr << "exception: " << e.what() << "\n";
    }
    return 0;
}