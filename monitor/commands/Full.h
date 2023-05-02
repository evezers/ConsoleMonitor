#ifndef MAIN_FULL_H
#define MAIN_FULL_H

#include "BaseCommand.h"

class Full : public BaseCommand {
private:
    bool empty;
    bool header;
    bool headeronly;

    static constexpr char WRONGBOOLSAMOUNT[] = "invalid boolean values amount";

    std::string checkAmount(const Parser &parser);

    void setEmpty(const boolArgs_t &bools);
    void setHeader(const boolArgs_t &bools);
    void setHeaderonly(const boolArgs_t &bools);
protected:
    std::string help() override;
public:
    Full();

    static const std::string query;

    std::string checkAndAssemble(Parser &parser) final;
    std::string run() final;
};


#endif //MAIN_FULL_H
