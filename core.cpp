#include <iostream>
#include <windows.h>

class Player {
  public:
    int health = 100;
    int gold = 0;
    int heals = 1;

  void takeDemage() {
    system("cls");
    health -= 25;
    gold += 5;
    std::cout << "you fighted a goblin and you took 25 demage\nand gained 5 golds\n\n";
    if (health <= 0) {
      std::cout << "You died good luck next time";
      exit(0);
    }
    std::cout << "\n";
    system("pause");
  }
  void showStats() {
    system("cls");
    std::cout << "Health: " << health << "\n";
    std::cout << "Gold: " << gold << "\n";
    std::cout << "Heals: " << heals << "\n";
    std::cout << "\n";
    system("pause");
  }
  void healsBuy() {
    if (gold <= 0) {
      std::cout << "Not enough coins";
    }
    else {
    std::cout << "Health potion bought";
    system("pause");
    heals += 1;
    gold -= 5;
    }
  }
  void healUse() {
    if (heals <= 0) {
      system("cls");
      std::cout << "You dont have enough potions\n\n";
      system("pause");
    }
    else {
    system("cls");
    std::cout << "You have been healed for 25 health\n\n";
    system("pause");
    heals -= 1;
    health += 25;
    }
  }
  
};

int main() {
  using std::cout;
  using std::cin;

  Player p1;

  int choice;

  while (true) {
    system("cls");
    cout << "[0] quit\n[1] hunt\n[2] stats\n[3] heal\n[4] shop\n\n";
    cin >> choice;

  if (choice == 1) {
      p1.takeDemage();
    }

  else if (choice == 2) {
      p1.showStats();
    }

  else if (choice == 3) {
    p1.healUse();
  }

  else if (choice == 4){
    system("cls");
    int choice1;
    cout << "[0] quit\n[1] heal potion(1x - 5gold)\n\n";
    cin >> choice1;

    if (choice1 == 1){
      p1.healsBuy();
    }
  }
  else if (choice == 0) {
    break;
  }
  else {
    system("cls");
    cout << "Wrong input!";
  }
}

  return 0;
}
