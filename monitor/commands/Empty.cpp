#include <sstream>

#include "Empty.h"
#include "utilFunctions.h"

Empty::Empty() = default;

const std::string Empty::query = "empty";

std::string Empty::checkAndAssemble(Parser &parser) {
    return ""; // always correct
}

std::string Empty::run() {
    // return fs_blackhole();
    std::stringstream stream;
    stream << "empty command executed";
    return stream.str();
}

std::string Empty::help() {
    return "empty help";
}
