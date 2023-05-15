#include <iostream>

#include <string>
#include <map>

#include "docopt/docopt.h"

const char* USAGE =
R"(magic.

    Usage:
      magic <input-filename> [options]

    Options:
      -h --help     Show this screen.
      --version     Show version.
      -g <count> --generations=<count>  Set the number of generations to run. [default: 1]
      -d <deck_size> --deck_size=<deck_size>  The number of non-land cards to use. [default: 40]
      -o <output-filename> --output=<output-filename>  The name of the ouput file to store the result. [default: "output.json"]
)";

int main(int argc, char const *argv[]) {
    std::string infile = "input.json";
    std::string outfile = "output.json";
    int generations = 1;
    int deckSize = 40;

    std::map<std::string, docopt::value> args
        = docopt::docopt(USAGE,
                        {argv + 1, argv + argc},
                        true,
                        "magic 0.0.1");

    for (const auto& arg : args) {
        if (arg.first == "<input-filename>")
            infile = arg.second.asString();
        else if (arg.first == "--generations")
            generations = arg.second.asLong();
        else if (arg.first == "--deck_size")
            deckSize = arg.second.asLong();
        else if (arg.first == "--output")
            outfile = arg.second.asString();
    }

    return 0;
}

