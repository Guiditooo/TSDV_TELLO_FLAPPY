#include <iostream>

#include "raylib.h"

void main()
{
	std::cout << "\n Hello World\n";

	SetTargetFPS(50);
	InitWindow(400, 400, "Flappy");

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawCircle(200, 200, 30, BLACK);
		EndDrawing();
	}

	CloseWindow();

}