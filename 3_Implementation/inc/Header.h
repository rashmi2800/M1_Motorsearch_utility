/**
 * @file test.c
 * @author Rashmi Shidramshettar
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright 
 * 
 */
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void login();
void mainmenu();


struct motor
{
	char mt_name[30];
	char appln[70];
	int speed;
	float price;
};
