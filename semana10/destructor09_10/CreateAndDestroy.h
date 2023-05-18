#include <string>
#ifndef CREATE_H
#define CREATE_H
class CreateAndDestroy {
    public:
        CreateAndDestroy(int, std::string); 
        ~CreateAndDestroy();
    private:
        int objectID; 
        std::string message;
};
#endif