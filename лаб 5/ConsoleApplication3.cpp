#include <iostream>
#include <string>

int main() 
{
    setlocale(LC_ALL, "ru");
    std::string color;
    std::string action; 

    std::cout << "Введите цвет светофора (красный, желтый или зеленый): ";
    std::cin >> color;
    std::cout << "Введите действие пешехода (идти или ждать): ";
    std::cin >> action;

    if (color == "1") {
        if (action == "1") {
            std::cout << "Стойте, светофор красный, нельзя переходить дорогу." << std::endl;
        }
        else if (action == "2") {
            std::cout << "Ждите, пока не загорится зеленый свет." << std::endl;
        }
        else {
            std::cout << "Некорректное действие пешехода." << std::endl;
        }
    }
    else if (color == "2") {
        if (action == "1") {
            std::cout << "Стойте, светофор желтый, готовьтесь к переходу." << std::endl;
        }
        else if (action == "2") {
            std::cout << "Ждите, светофор скоро станет красным." << std::endl;
        }
        else {
            std::cout << "Некорректное действие пешехода." << std::endl;
        }
    }
    else if (color == "3") {
        if (action == "1") {
            std::cout << "Идите, светофор зеленый, можно переходить дорогу." << std::endl;
        }
        else if (action == "2") {
            std::cout << "Стойте, если нет необходимости переходить дорогу." << std::endl;
        }
        else {
            std::cout << "Некорректное действие пешехода." << std::endl;
        }
    }
    else {
        std::cout << "Некорректный цвет светофора." << std::endl;
    }

    return 0;
}