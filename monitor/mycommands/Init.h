#ifndef MAIN_INIT_H
#define MAIN_INIT_H

#include "BaseCommand.h"

class Init : public BaseCommand {
private:
    int blocks = 0;
    int segments = 0;
    std::string label;
    std::string s;

    static constexpr char DEFAULTLABEL[] = "DEFAULT";

    static constexpr char WRONGKEYSAMOUNT[] = "invalid key values amount";
    static constexpr char WRONGPOSSAMOUNT[] = "invalid positional values amount";
    static constexpr char BLOCKSCANTCONVERT[] = "blocks incorrect value";
    static constexpr char BLOCKSRESTRICTED[] = "blocks incorrect value";
    static constexpr char NOBLOCKSVALUE[] = "no blocks key value";
    static constexpr char SEGMENTSCANTCONVERT[] = "segments incorrect value";
    static constexpr char SEGMENTSRESTRICTED[] = "segments incorrect value";
    static constexpr char NOSEGMENTSVALUE[] = "no segments key value";
    static constexpr char LABELINCORRECT[] = "label value is incorrect";

    std::string checkAmount(const Parser &parser);

    std::string setBlocks(const keyArgs_t &keys);
    std::string setSegments(const keyArgs_t &keys);
    std::string setLabel(posArgs_t &poss);
protected:
    std::string help() override;
public:
    explicit Init(std::string &s) : label(), s(s){ }

    static std::string getQuery();

    std::string checkAndAssemble(Parser &parser) final;
    std::string run() final;
};


#endif //MAIN_INIT_H
