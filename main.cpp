#include "core.h"



int main(){

    int WindowWidth = 800;
    int WindowHeight = 400;
    int DefaultFPS = 30;

    SetTargetFPS(DefaultFPS);

    InitWindow(WindowWidth, WindowHeight, "Testing");

Core core;
core.initKeys(4);
core.setWindow(WindowHeight, WindowWidth, DefaultFPS);

while (!WindowShouldClose()){
    core.Update();
    BeginDrawing();

    core.Draw();
    ClearBackground(WHITE);
    EndDrawing();
}
CloseWindow();

return 0;

}