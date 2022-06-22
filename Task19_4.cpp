#include <iostream>
#include<fstream>
int main()
{
    char sim[4];
    std::ifstream img;
    img.open("Image.png",std::ios::binary);
    if (img.is_open())
    {
        img.read(sim, sizeof(sim));
        if (sim[0] == -119 && sim[1] == 80 && sim[2] == 78 && sim[3] == 71)
            std::cout << "OK" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    else
    {
        std::cout << "The file did not open" << std::endl;
    }
    

    img.close();
}

