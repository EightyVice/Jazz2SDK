/*
    ===========
     Jazz2SDK
    ===========

    Single-Header Jazz Jackrabbit 2 Software Development Kit
    Author: Zeyad <<Zurix>> Ahmed
    Copyrights (c) 2018 Jazz2SDK Contributers
*/


namespace Player {
    int &Health = *((int*)0x5C859E);
    int &Coins = *((int*)0x5C8934);
    int &Score = *((int*)0x5C8928);
    
    namespace Gems{
            int &Red = *((int*)0x5C8938);
    }
        
    namespace Position {
        float &X = *((float*)0x5C856C);
        float &Y = *((float*)0x5C8570);
    }  
}
