/*
    ===========
     Jazz2SDK
    ===========

    Single-Header Jazz Jackrabbit 2 Software Development Kit
    Author: Zeyad <<Zurix>> Ahmed

    Special Thanks for Jazz2Online Team for 1.23 & 1.24 Addresses:
    https://www.jazz2online.com/wiki/List_of_Jazz_Jackrabbit_2_Memory_Addresses

    Copyrights (c) 2018 Jazz2SDK Contributers
*/
#pragma once
#include <Windows.h>
bool IsKeyPressed(unsigned int keyCode) {
    return (GetKeyState(keyCode) & 0x8000) != 0;
}

enum FlyingMethod : int {
    AIRBORD = -1,
    NO_FLIGHT = 0,
    HELICOPTER_EARS = 1
};
enum Weapon : int {
    GUN = 1,
    BOUNCER,
    ICE,
    SEEKER,
    THREEWAY,
    TOASTER,
    TNT,
    PEPPER,
    ELECTROBLASTER,
    SECRET1,
    SECRET2,
    SECRET3
};
namespace J2_1_23 {
    namespace Player {

        namespace Position {
            int &X = *((int*)0x5A4EEC);
            int &Y = *((int*)0x5A4EF0);
        }

        namespace Speed {
            short &X = *((short*)0x5A4EF6);
            short &Y = *((short*)0x5A4EFA);
        }
        
        int &CurrentAnime = *((int*)0x5A4F14);

        FlyingMethod &x = *((FlyingMethod*)0xdead);

        int &FastFireDelay = *((int*)0x5A501C);

        Weapon &CurrentWeapon = *((Weapon*)0x5A5028);

        int &Lives = *((int*)0x5A5080);
        int &Score = *((int*)0x5A52A8);
        int &EatenFood = *((int*)0x5A52B0);
        int &Coins = *((int*)0x5A52B4);
        int &Gems = *((int*)0x5A52B8);
        
        namespace WeaponsAmmo {
            int &Blaster = *((int*)0x5A52B8);
            int &Bouncer = *((int*)0x5A52E4);
            int &Ice = *((int*)0x5A52E8);
            int &Seeker = *((int*)0x5A52EC);
            int &ThreeWay = *((int*)0x5A52F0);
            //need to complete.
        }
    }
    namespace Game {
        HINSTANCE &Instance = *((HINSTANCE*)0x4F8E10);
        HWND &Handle = *((HWND*)0x4F8E44);
        bool &IsRunning = *((bool*)0x52A522);
    }
    
}
namespace J2_LK {
    namespace Player {
        int &Health = *((int*)0x5C859E);
        int &Coins = *((int*)0x5C8934);
        int &Score = *((int*)0x5C8928);
    
        namespace Gems{
            int &Red = *((int*)0x5C8938);
        }
        
        namespace Position {
            int &X = *((int*)0x5C856C);
            int &Y = *((int*)0x5C8570);
        }  
    }
}

