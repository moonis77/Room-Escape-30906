/*
������: ������,����ȯ 
������ : 2021.09.17
���� : kjhamam@gmail.com
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room();
void room2();
void box();	    //1-1. ���� 
void phone();   //1-2. ��ȭ�� 
void phone_number();  // ��ȭ��ȣ �Է� 
void letter();	//1-3. ���극�� 
void computer();//1-4. ��ǻ�� 
void usb_pw();
void bed();	    //2-1. ħ�� 
void table();	//2-2. ȭ��� 
void calendar();//2-3. �޷� 
void cloek();	//2-4. �ð� 
void door1();	//1. �����Թ� 
void door2();   //2. �����Թ� 

int isDropBox = FALSE;	//���� ���� ���� 
int isDropLetter = FALSE; //���극�� ���� ����  


int isFindUsb = FALSE;	//usb ���濩�� 


int main() {
	int menu;
	
	while(1) {
		printf("ROOM ESCAPE VER 1.0\n\n");
		printf("1. ����\n");
		printf("0. ����\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("�Է� ����\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("���� ������ ���� �� �ȿ� �ִ� �� ����.\n");
	Sleep(1500);
	printf("���� �����... ������ ����� �� ���� �ʴ´�.\n\n");
	Sleep(2500);
	printf("����, ħ��, �����.. ��� ������ ������.\n");
	Sleep(1500);
	printf("��ü ���� �� ���⿡ ������ �� ���ϱ�?\n\n");
	Sleep(2500);
	printf("������ ������ �׷� �� ���� �ð��� ����.\n");
	Sleep(1500);
	printf("�� ���� ������ �Ѵ�.\n\n");
	Sleep(1500);
	system("pause");
}

void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("[����]\n\n");
		printf("�� �ȿ��� �� �� �ִ� �͵��� ã�ƺ���.\n\n");
		printf("1. ����    2. ��ȭ��    3. ���극��   4. ��ǻ��   5.�޹湮\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isDropBox) {
					printf("\n���ڸ� �������ȴ�. �� �̻� ã�� �� ����.\n");
					system("pause");
				} else {
					box();					
				}
				break;
			case 2:
				phone();
				break;
			case 3:
				letter();
				break;
			case 4:
				computer();
				break;
			case 5:
				door2();
				break;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
	}
	
}

void box(){//1. �ڽ�  
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[����]\n\n");
		printf("���ڰ� �������ִ�. \n\n");
		printf("1. �����.\n");
		printf("2. �������뿡 ������.\n");
		printf("0. ���ư���.\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindUsb) {
					printf("�������� ���� �ִ�.\n\n �̸� : Ȧ�浿\n �ν�Ÿ�׷��� ���� �ʾƿ�!\n ���� �����ϴ� ������ ����� ����!\n\n");
				} else {
					isFindUsb = true;
					printf("usb�� ȹ�� �g��. \n  �����ʵ� ���� �ִ�.\n\n �̸� : Ȧ�浿\n �ν�Ÿ�׷��� ���� �ʾƿ�!\n ���� �����ϴ� ������ ����� ����!\n\n"); 
				}
				break;
			case 2:
				isDropBox = true;
				printf("\n���ڸ� �������ȴ�.\n");
				Sleep(1000);
				system("pause");
				return;
			case 0:
				return;
			default:
				Sleep(100);
				printf("\n# ERROR # �Է°� ����\n\n");
				Sleep(1000);
				break;
		}
		system("pause");
	}	
}	

void phone() {//2. ��ȭ�� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[��ȭ��]\n\n");
		printf("1. ��ȭ��ȣ�� �Է��Ѵ�.\n");
		printf("2. �˸��� ����.\n");
		printf("3. ��ȭ�⸦ ����.\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				phone_number();
				break;
			case 2:
				printf(" īī���� ���ڰ� 4�� �Դ�. ���� 3�� �Դ�. \n");
				Sleep(1000);
				system("pause");
				break;		
			case 3:
				return;
			default:
				printf("# ERROR # �Է°� ����\n\n");
				system("pause");
		}
	}
}	

void phone_number() {
	char number1[9] = "74457571", number2[9] = "17575447", temp[9];
	
	system("cls");
	printf("\n\n      [ number ]\n\n");
	printf(">> ");
	scanf("%s", &temp);
	
	if(!strcmp(number1, temp)) {
		system("cls");
		printf("\n\n��ȭ�� �ɾ���... \n\n");
		Sleep(1000);
		printf("����: ��������? \n");
		Sleep(1000);
		printf("???: �� ��ħ ��ȭ �ּ̳׿�.\n");
		Sleep(1000);
		printf("����: ?\n");
		Sleep(1000);
		printf("???: ����û�Դϴ�.\n");
		Sleep(1000);
		printf("# THE END #\n\n");
		Sleep(1000);
		system("pause");
		exit(0);
	} else if(!strcmp(number2, temp)){
		system("cls");
		printf("\n\n��ȭ�� �ɾ���... \n\n");
		Sleep(1000);
		printf("����: ��������? \n");
		Sleep(1000);
		printf("����ģ��: �� �ڱ�� �Ͼ��?\n");
		Sleep(1000);
		printf("����: ?\n");
		Sleep(1000);
		printf("����ģ��: �ڱ� ���� ���߾��ݾ�..���� �츮�� �����Ծ�,,\n");
		Sleep(1000);
		printf("����: ?\n");
		Sleep(1000);
		printf("��� ���ǿ������� ������ �ϴ�..\n\n");
		Sleep(1000);
		system("pause");
		exit(0);
		
	}else {
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		Sleep(1000);
		return;	
	}
}
	

void letter(){//3. ���극�� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[���극��]\n\n");
		printf("1. �д´�.\n2.������.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n���� ��......\n��苚���� ������ �ʴ´�..\n");
				Sleep(1000);
				break;
			case 2:
				isDropLetter = true; 
				printf("\n������ �������ȴ�.\n");
				Sleep(1000);
				system("pause");
				return;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				Sleep(1000);
				break;
		}
		system("pause");
	}
}	

void computer(){//4. ��ǻ�� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[��ǻ��]\n\n");
		printf("���� ��ũ�� ��ǻ�ʹ�...\n\n");
	printf("1. ���ͳ��� ����.\n");
			printf("2. �������� �����..\n");
			printf("3. usb ������ �����..\n");
			printf("0. ���ư���\n");
		
			printf(">> ");
			scanf("%d", &menu);
		
			switch(menu) {
				case 1:
					printf("\n��Ʈ��ũ�� ��������ʾҽ��ϴ�....\n\n");
					Sleep(1000);
					break; 
					
				case 2:
					printf("\n���г� 2�б� �߾�\n");
					printf("ĥĥ���� ���� ���б� ����\n");
					printf("�罿�����Ҹ�.mp3\n");
					printf("������ û��.jpg\n\n");
					Sleep(1000);
					break;
				case 3:
					if(isFindUsb) {
						
					}else{
						
					}
				case 0:
					return;
				default:
					printf("\n# ERROR # �Է°� ����\n\n");
					Sleep(1000);
					break;	
			}	
		
			
		}
		system("pause");
	}
void usb_pw(){
	char pw[5] = "1748", temp2[9];
	
	system("cls");
	printf("\n\n      [ number ]\n\n");
	printf(">> ");
	scanf("%s", &temp2);
	
	if(!strcmp(pw, temp2)) {
		system("cls");
		printf("\n\n 5 \n\n");
		Sleep(2000);
		system("pause");
		exit(0);
	}else {
		Sleep(1000);
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		return;	
	}
	
}	

void door2(){//.�޹� 
	int menu;
	
	while(1) {
		system("cls");

		printf("���� ��ο� ���� �� ����...\n\n");
		
		printf("1. ħ��    2. ȭ���    3. Ķ����   4. �ð�   5.�չ湮 \n");
		
		printf(">> ");
		scanf("%d", &menu);
	 
		switch(menu) {
			case 1:
				bed();						
				break;
			case 2:
				table();
				break;
			case 3:
				calendar();
				break;
			case 4:
				cloek();
				break;
			case 5:
				room();
				break;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
		system("pause");
	}	
}	

void bed(){
	int menu;
	
	while(1) {
		system("cls");
		printf("[�޹�]-[ħ��]\n\n");
		printf("1. �μ���.\n");
		printf("2. ������.\n");
		printf("3. ���´�.\n");
		printf("0. ���ư���\n");
		printf(">> ");
		scanf("%d", &menu);
	 
		switch(menu) {
			case 1:
				printf("ħ��� �μ����� �ʴ´�....\n\n");						
				break;
			case 2:
				printf("�ƹ��͵� ����.\n\n");
				break;
			case 3:
				printf("�߱����� �ϵ�ĥ���� ���δ�.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
		system("pause");
	}	
}	



void table(){
	int menu;
	
	while(1) {
		system("cls");
		printf("[�޹�]-[ȭ���]\n\n");
		printf("1. �ſ��� ����.\n");
		printf("2. ��������.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
	 
		switch(menu) {
			case 1:
				printf("������ ���� ���� ���δ�.....\n\n");						
				break;
			case 2:
				printf("������ �ִ�.. ����: ���� ��� ����� ����Ű�� �ʹ�......\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
		system("pause");
	}	
}	

void calendar(){
	int menu;
	
	while(1) {
		system("cls");
		printf("[�޹�]-[Ķ����]\n\n");
		printf("1. �޷��� ����.\n");
		printf("0. ���ư���.\n");
		
		printf(">> ");
		scanf("%d", &menu);
	 
		switch(menu) {
			case 1:
				printf("1�� 2�� 3�� 4�� 5�� 6�� .......\n");
				Sleep(1000);
				printf("8�� 9�� .........\n");	
				Sleep(1000);
				printf("���� ���� ������ ���...\n");							
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
		system("pause");
	}	
}	

void cloek(){
	int menu;
	
	while(1) {
		system("cls");
		printf("[�޹�]-[�ð�]\n\n");
		printf("1. Ȯ���Ѵ�.\n");
		printf("0. ���ư���.\n");
		
		printf(">> ");
		scanf("%d", &menu);
	 
		switch(menu) {
			case 1:
				printf("���� �� ���ϴ�... \n");
				Sleep(700);
				printf("��Ȯ�� 6�ÿ� �����ִ�...\n");								
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
		system("pause");
	}	
}	

	




