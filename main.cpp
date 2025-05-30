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
        Event event; //captures all events while window is open
        while(window.pollEvent(event) == true) //enters loop if there are new events, updates event object
        {
            if(event.type == Event::Closed)
                window.close();
        } //if closed signal, close window, loop won't repeat
        //Rest of game logic below

    }
    return 0;
}