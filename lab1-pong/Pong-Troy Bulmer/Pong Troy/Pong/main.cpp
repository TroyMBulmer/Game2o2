/*
Name:
Course:
Prof:
Title O' Program:
Date:
*/

//
#include "SDL.h"

//
#define WINDOW_WIDTH	800
#define WINDOW_HEIGHT	600

//
SDL_Renderer *renderer;

//
bool running = true;

SDL_Rect PlayerPaddle;
SDL_Rect AIPaddle;
SDL_Rect Ball;

/*
Purpose of the Loadgame function:
*/

void LoadGame()
{
	//
	SDL_Window *window;

	//
	window = SDL_CreateWindow("Basic SLD Sprites",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WIDTH, WINDOW_HEIGHT,
		SDL_WINDOW_SHOWN);
	if (!window)
	{
		return;
	}

	//
	renderer = SDL_CreateRenderer(window, -1, 0);
	if (!renderer)
	{
		return;
	}

	//
	PlayerPaddle.x = 20;
	PlayerPaddle.y = 250;
	PlayerPaddle.h = 100;
	PlayerPaddle.w = 20;

	//
	AIPaddle.x = 760;
	AIPaddle.y = 250;
	AIPaddle.h = 100;
	AIPaddle.w = 20;

	//
	Ball.x = 370;
	Ball.y = 290;
	Ball.w = 20;
	Ball.h = 20;
}

/*
Purpose of the Input Function:
*/
void Input()
{

}

//Purpose of the Update Funciton:
void Update()
{

}

//Purpose of the DrawScreen Function