#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<iostream>
using namespace sf; 
using std::cout;
using std::cin;
using std::endl;
int main()
{
    //Create a Game Window
    RenderWindow window(VideoMode(1600, 900), "Flappy Bird");
    while (window.isOpen() == true)
    {
        //add game logic here
    }
    return 0;
}