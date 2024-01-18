#include <exception>
#include <string>

class eroareAtac : public std::exception {
private:
    std::string message;

public:
    eroareAtac(const std::string &msg) : message(msg) {}

    virtual const char* what() const throw() 
    {
        return message.c_str();
    }
};