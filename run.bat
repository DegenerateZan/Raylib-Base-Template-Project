del game.exe
g++ -o game.exe main.cpp source.cpp functons.cpp -Icore -O1 -Wall -Wno-missing-braces -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
game.exe