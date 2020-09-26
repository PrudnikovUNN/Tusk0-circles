#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>


using namespace std;

int main()
{
    double height, Width, depth, Thickness_zs, Thickness_bvns, Thickness_dv; // (th_ - толщина ) zs - задней стенки,bvns - боковой, верхней, нижней (стенки,крышки), dv - двери,полки
    double Density_Dsp, Density_Dvp, Density_Wood;//(Density_ плотность) Dsp - ДСП, Dvp - ДВП,  Wood - дерева
    double weight; //масса

    Thickness_zs = 0.005;
    Thickness_bvns = 0.015;
    Thickness_dv = 0.01;

    scanf("%f%f%f", &height, &depth, &Width);
    scanf("%f%f%f", &Density_Dsp, &Density_Dvp, &Density_Wood);//-------------ЭТО 1-АЯ ЗАДАЧА, А НЕ 0) Вечером обе скину в норм виде

    height /= 100; //переводим в систему СИ
    depth /= 100;
    Width /= 100;

    weight = (height * Width * Thickness_zs * Density_Dvp)
        + (height * depth * Thickness_bvns * Density_Dsp * 2)
        + (Width * depth * Thickness_bvns * Density_Dsp * 2)
        + (height * Width * Thickness_dv * Density_Wood)
        + (4 * depth * Width * Density_Dsp * Thickness_dv);

    printf("%d", &height);
    system("pause");
    return 0;
}

