#include <iostream>
#include "player.h"
#include "weapon.h"

Player hPlayer()
{
    int playerHP;

    std::cout << "Player HP: ";
    std::cin >> playerHP;

    return Player::newPlayer(playerHP);
}

Gun hGun()
{
    int gunPower;
    int gunAmmo;

    std::cout << "Weapon Power: ";
    std::cin >> gunPower;
    std::cout << "Weapon Ammo: ";
    std::cin >> gunAmmo;
    return Gun::newGun(gunPower, gunAmmo);
}

void startGame(Gun gun, Player player)
{
    int hp = player.getHP();

    int power = gun.getPower();
    int ammo = gun.getAmmo();

    while (true)
    {
        if (hp > 0 && ammo > 0)
        {
            hp -= power;
            ammo -= 1;
        }

        if (hp <= 0)
        {
            if (ammo == 0)
            {
                printf("Player died!");
                break;
            }
        }

        else if (ammo == 0)
        {
            if (hp > 0)
            {
                printf("Not enough ammo!");
                break;
            }
            if (hp <= 0)
            {
                printf("Player died!");
                break;
            }
        }
    }
}

int main()
{
    std::cout << "Welcome to my first game!\n" << std::endl;
    startGame(hGun(), hPlayer());
}
