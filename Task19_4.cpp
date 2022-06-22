#include <iostream>
#include<fstream>
int main()
{
    char sim[5];
    std::ifstream img;
    img.open("imege.png",std::ios::binary);
    img.read(sim, sizeof(sim));
    sim[4] = 0;
    std::cout << sim << std::endl;

    img.close();
}

