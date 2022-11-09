#include "include/raylib.h"
#include <iostream>
#include <vector>

float num_minus_persent(float whole_num, float percent);



#ifndef CORE_H
#define CORE_H


    class Core{
        private:
            int WindowHeight;
            int WindowWidth;
            bool keys[];

            
        public: void initKeys(int amount){
            for(int i = 0; i <= amount; i++){
                keys[i] = false;
            }
        };



        public: void setWindow(int h, int w, int fps);
    
        public: void Update();
        public: void Draw();

    };




#endif