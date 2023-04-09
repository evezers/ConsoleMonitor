#ifndef MAIN_ENTER_H
#define MAIN_ENTER_H

#include "BaseCommand.h"

class Enter : public BaseCommand {
private:
    int length = 0;
    std::string filename;

    static constexpr char WRONGKEYSAMOUNT[] = "invalid key values amount";
    static constexpr char WRONGPOSSAMOUNT[] = "invalid positional values amount";
    static constexpr char LENGTHCANTCONVERT[] = "length incorrect value";
    static constexpr char LENGTHRESTRICTED[] = "length incorrect value";
    static constexpr char NOLENGTHVALUE[] = "no length key value";
    static constexpr char INCORRECTFILENAME[] = "label value is incorrect";

    std::string checkAmount(const Parser &parser);

    std::string setLength(const keyArgs_t &keys);
    std::string setFilename(posArgs_t &poss);
public:
    Enter();

    static const std::string query;

    std::string checkAndAssemble(Parser &parser) final;
    std::string run() final;
};

#endif //MAIN_ENTER_H
