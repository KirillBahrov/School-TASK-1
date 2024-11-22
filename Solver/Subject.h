#pragma once
#include <string>

namespace School
{
    class Subject 
    {
    public:
        std::string name; 
        std::string direction; 

        /**
        * @brief конструктор предмет
        * @param name - название предмета
        * @param direction - направление предмета
        */
        Subject(const std::string& name, const std::string& direction);
    };
}