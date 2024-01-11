#include <exception>
#include <string>

class eroareViata : public std::exception {
private:
    std::string message;

public:
    eroareViata(const std::string &msg) : message(msg) {}

    virtual const char* what() const throw() {
        return message.c_str();
    }
};
