#include <stdexcept>

class PlayerRollException : public std::exception {
private:
    std::string message;

public:
    PlayerRollException(const std::string& errorMessage) : message(errorMessage) {}

    virtual const char* what() const noexcept {
        return message.c_str();
    }
};
