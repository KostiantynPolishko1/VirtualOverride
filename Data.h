#pragma once
#ifndef DATA_H
#define DATA_H

enum KindSwords {
	SINGLE_HANDED,
	TWO_and_HALF,
	DOUBLE_EDGED
}
;
enum BladeCrossSection {
	LENTICULAR,
	CHIESELED,
	DOUBLE_CHIESELED
}
;
enum BladeLength {
	NORMAL_L,
	MIDDLE_L,
	LONG_L
}
;
enum TypeMaterial {
	WOOD,
	BRASS,
	STEEL
}
;
enum QualityMaterial {
	LOW,
	MIDDLE,
	HIGH
}
;

char* arrKindSwords[];
char* arrBladeCrossSection[];
char* arrMaterial[];
char* arrQuality[];

extern const short sizeBladeShape;
extern const short sizeMaterial;
extern const short sizeQuality;

short arrHardness[][3];
short arrResielence[][3];
short arrDurality[][3];
float arrBladeLength[];

extern const float densitySteel;
extern const float densityBrass;
extern const float densityWood;
extern const float widthBlade;
extern const float thkBlade;

float arrDensity[];

#endif