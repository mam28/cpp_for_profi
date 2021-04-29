// Программа печатает приветствие в зависимости от
// выбранного экземпляра Race

#include <cstdio>

enum class Race {
    Dinan,
    Teklan,
    Ivyn,
    Moiran,
    Camite,
    Julian,
    Aidan
};

int main()
{
    Race race = Race::Dinan;

    switch (race) {
    case Race::Dinan: {
        printf("You work hard.\n");
      } break;
    case Race::Teklan: {
        printf("You are very strong.\n");
      } break;
    case Race::Ivyn: {
        printf("You are a great leader.\n");
      } break;
    case Race::Moiran: {
        printf("My, how versatile you are!\n");
      } break;
    case Race::Camite: {
        printf("You're incredibly helpful.\n");
      } break;
    case Race::Julian: {
        printf("Anything you want!\n");
      } break;
    case Race::Aidan: {
        printf("What an enigma.\n");
      } break;
    default: {
        printf("Error: unkown race!\n");
      }
    }
    
    return 0;
}