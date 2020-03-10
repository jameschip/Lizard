#include "../lizard.hpp"
#include <stdio.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>
#include <sstream>

#define TEST_INPUT  "testfile.liz"
#define TEST_OUTPUT "test_out.txt"

std::string getFileContents( const std::string & fp) {

    std::ifstream t( fp );
    std::stringstream buffer;
    buffer << t.rdbuf();
    return buffer.str();

}

std::string parseLizardFile( const std::string &path) {

    std::string content = getFileContents( path );
    return parse( content );

}

int main( int argc, char ** argv ) {
    std::cout << "Testing " << std::endl;
    std::ofstream out( TEST_OUTPUT );
    out << parseLizardFile( TEST_INPUT );
    out.close();
    return 0;

}