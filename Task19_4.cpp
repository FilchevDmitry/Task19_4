#include <iostream>
#include<fstream>
int main()
{
    char sim[4];
    std::ifstream img;
    img.open("imege.png",std::ios::binary);
    img.read(sim, sizeof(sim));
 
    for (int i = 0; i < 4; i++)
    {
        std::cout << static_cast<int>(sim[i]) << std::endl;
    }

    img.close();
}

