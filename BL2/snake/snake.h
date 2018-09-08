#ifndef SNAKE_H
#define SNAKE_H

#define NULL (void *)0

#define MAP_H  300
#define MAP_W  220
#define SNAKE_HW 2
#define WALL_W 1*SNAKE_HW
#define DIFFER  100

typedef unsigned char uint8;
typedef unsigned int uint16;
typedef unsigned long uint32;
typedef char int8;
typedef int int16;
typedef long int32;

typedef struct FOOD{

	int16 x;
	int16 y;

}Food;

typedef struct SNAKE{

	int16 x;
	int16 y;

}Snake;

typedef struct GAMEINFO{

	int8 dir;
	int16 len;
	int16 score;
	int16 UpVal;
	int16 DownVal;
	int16 LeftVal;
	int16 RightVal;
	int16 start_x;
	int16 start_y;
	int16 score_x;
	int16 score_y;
	int16 gamespeed;

}GameInfo;

#define MAXSIZE 100
extern GameInfo gameinfo;
extern Snake snake[MAXSIZE];
extern int16 front;
extern int16 rear;

extern Food food;
	
//��ȡָ���
//0 ��ͣ
//1 ����
//2 ����
//3 ����
//4 ����
//5 ������Ϸ

#define SPAUSE 0
#define SUP 1
#define SDOWN 2
#define SLEFT 3
#define SRIGHT 4
#define SENDGAME 5
int8 GetInstruction( void );

//��ʾ����

#define ON  1
#define OFF 0

void ShowPoint( uint16 x, uint16 y , uint8 sw  );
void ShowString( uint16 x, uint16 y , uint8 *str );
void ShowNum( uint16 x, uint16 y , uint32 num );

//��ʱ����
void SnakeDelayMs(uint32 time);

//���������
int16 Snake_Random( void );

//��ʾ��ͼ
extern void BulidMap( uint16 x , uint16 y , uint8 size );
extern void GameInit( void );
extern void GameIng( void );
extern void MoveSnake( void );

#endif




