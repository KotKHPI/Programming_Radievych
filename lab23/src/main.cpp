/**
 * @mainpage
 * # Загальне завдання
 * 4. **Для предметної ** галузі з розділу "Розрахункове завдання / Індивідуальні
 завдання" розробити два класи: - клас, що відображає сутність "базового класу",
 у тому числі: - конструктор за замовчуванням, копіювання та конструктор з
 аргументами (реалізація конструкторів продемонстрована за
 допомогою списків ініціалізацій); - деструкторі - клас, що має у собі динамічний
 масив об'єктів базового класу та має в собі методи додавання, видалення
 елемента, отримання елемента по індексу (або ідентифікатору), вивід усіх
 елементів на екран;
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */

/**
 * @file main.cpp
 * @brief Файл з демонстрацією роботи списків (@link List), (@link Basic) та методи роботи з ними.
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */
#include "list.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * -створення данних для класу (@link List)
 * -створення класу (@link List)
 * -робота з методами класу (@link List), що має в собі методи додавання, видалення
 елемента, отримання елемента по індексу (або ідентифікатору), вивід усіх
 елементів на екран
 * @return успішний код повернення з програми (0)
 */
int main() {
    Feature home(1, 2, 3, Так);
    Feature home1(4, 5, 6, Ні);

    Basic bird(Так, "KOT", 1, home, Чоловіча);
    Basic bird1(Ні, "Чапалах", 2, home1, Жіноча);
    Basic bird2(Ні, "КОТ2", 3, home1, Жіноча);
    Basic r;

    
    List b(2);
    b.Paste(bird, 0);
    b.Paste(bird2, 1);
    b.AddBird(bird1);
    b.RemoveBird(0);
    r = b.GetBird(1);
    b.ShowAll();
    b.FindPercentage();
    
    return 0;
}