/*
개발자: 30905 김지환, 30906 
개발일 : 2021.09.17
문의 : justintop628@gmail.com
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
void box();	    //1-1. 상자 
void phone();   //1-2. 전화기 
void phone_number();  // 전화번호 입력 
void letter();	//1-3. 러브레터 
void computer();//1-4. 컴퓨터 
void usb_pw();
void bed();	    //2-1. 침대 
void table();	//2-2. 화장대 
void calendar();//2-3. 달력 
void cloek();	//2-4. 시계 
void door1();	//1. 앞출입문 
void door2();   //2. 뒤출입문 

int isDropBox = FALSE;	//상자 버림 여부 
int isDropLetter = FALSE; //러브레터 버림 여부  


int isFindUsb = FALSE;	//usb 습득여부 


int main() {
	int menu;
	
	while(1) {
		printf("ROOM ESCAPE VER 1.0\n\n");
		printf("1. 입장\n");
		printf("0. 종료\n");
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
				printf("입력 오류\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("눈을 떠보니 작은 방 안에 있는 것 같다.\n");
	Sleep(1500);
	printf("여긴 어디지... 어젯밤 기억이 잘 나지 않는다.\n\n");
	Sleep(2500);
	printf("옷장, 침대, 냉장고.. 모든 물건이 낯설다.\n");
	Sleep(1500);
	printf("대체 누가 날 여기에 데리고 온 것일까?\n\n");
	Sleep(2500);
	printf("하지만 지금은 그런 걸 따질 시간이 없다.\n");
	Sleep(1500);
	printf("이 방을 나가야 한다.\n\n");
	Sleep(1500);
	system("pause");
}

void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("[원룸]\n\n");
		printf("방 안에서 할 수 있는 것들을 찾아보자.\n\n");
		printf("1. 상자    2. 전화기    3. 러브레터   4. 컴퓨터   5.뒷방문\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isDropBox) {
					printf("\n상자를 버려버렸다. 더 이상 찾을 수 없다.\n");
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
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
	}
	
}

void box(){//1. 박스  
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[상자]\n\n");
		printf("상자가 놓여져있다. \n\n");
		printf("1. 열어본다.\n");
		printf("2. 쓰레기통에 던진다.\n");
		printf("0. 돌아간다.\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindUsb) {
					printf("프로필이 놓여 있다.\n\n 이름 : 홀길동\n 인스타그램은 하지 않아요!\n 제일 좋아하는 선수는 손흥민 선수!\n\n");
				} else {
					isFindUsb = true;
					printf("usb를 획득 g다. \n  프로필도 놓여 있다.\n\n 이름 : 홀길동\n 인스타그램은 하지 않아요!\n 제일 좋아하는 선수는 손흥민 선수!\n\n"); 
				}
				break;
			case 2:
				isDropBox = true;
				printf("\n상자를 버려버렸다.\n");
				Sleep(1000);
				system("pause");
				return;
			case 0:
				return;
			default:
				Sleep(100);
				printf("\n# ERROR # 입력값 오류\n\n");
				Sleep(1000);
				break;
		}
		system("pause");
	}	
}	

void phone() {//2. 전화기 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[전화기]\n\n");
		printf("1. 전화번호를 입력한다.\n");
		printf("2. 알림을 본다.\n");
		printf("3. 전화기를 끈다.\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				phone_number();
				break;
			case 2:
				printf(" 카카오톡 문자가 4개 왔다. 디엠이 3개 왔다. \n");
				Sleep(1000);
				system("pause");
				break;		
			case 3:
				return;
			default:
				printf("# ERROR # 입력값 오류\n\n");
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
		printf("\n\n전화를 걸었다... \n\n");
		Sleep(1000);
		printf("남자: 여보세요? \n");
		Sleep(1000);
		printf("???: 아 마침 전화 주셨네요.\n");
		Sleep(1000);
		printf("남자: ?\n");
		Sleep(1000);
		printf("???: 병무청입니다.\n");
		Sleep(1000);
		printf("# THE END #\n\n");
		Sleep(1000);
		system("pause");
		exit(0);
	} else if(!strcmp(number2, temp)){
		system("cls");
		printf("\n\n전화를 걸었다... \n\n");
		Sleep(1000);
		printf("남자: 여보세요? \n");
		Sleep(1000);
		printf("여자친구: 어 자기야 일어났어?\n");
		Sleep(1000);
		printf("남자: ?\n");
		Sleep(1000);
		printf("여자친구: 자기 어제 취했었잖아..내가 우리집 데려왔어,,\n");
		Sleep(1000);
		printf("남자: ?\n");
		Sleep(1000);
		printf("어든 해피엔딩으로 끝난듯 하다..\n\n");
		Sleep(1000);
		system("pause");
		exit(0);
		
	}else {
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		Sleep(1000);
		return;	
	}
}
	

void letter(){//3. 러브레터 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[러브레터]\n\n");
		printf("1. 읽는다.\n2.버린다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n내가 널......\n얼룩문에 보이지 않는다..\n");
				Sleep(1000);
				break;
			case 2:
				isDropLetter = true; 
				printf("\n편지를 버려버렸다.\n");
				Sleep(1000);
				system("pause");
				return;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				Sleep(1000);
				break;
		}
		system("pause");
	}
}	

void computer(){//4. 컴퓨터 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[컴퓨터]\n\n");
		printf("낡은 핑크색 컴퓨터다...\n\n");
	printf("1. 인터넷을 들어간다.\n");
			printf("2. 휴지통을 열어본다..\n");
			printf("3. usb 파일을 열어본다..\n");
			printf("0. 돌아가기\n");
		
			printf(">> ");
			scanf("%d", &menu);
		
			switch(menu) {
				case 1:
					printf("\n네트워크가 연결되지않았습니다....\n\n");
					Sleep(1000);
					break; 
					
				case 2:
					printf("\n일학년 2학기 추억\n");
					printf("칠칠맞은 나의 중학교 시절\n");
					printf("사슴울음소리.mp3\n");
					printf("팔팔한 청년.jpg\n\n");
					Sleep(1000);
					break;
				case 3:
					if(isFindUsb) {
						
					}else{
						
					}
				case 0:
					return;
				default:
					printf("\n# ERROR # 입력값 오류\n\n");
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

void door2(){//.뒷방 
	int menu;
	
	while(1) {
		system("cls");

		printf("여긴 어두운 방인 것 같다...\n\n");
		
		printf("1. 침대    2. 화장대    3. 캘린더   4. 시계   5.앞방문 \n");
		
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
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
		system("pause");
	}	
}	

void bed(){
	int menu;
	
	while(1) {
		system("cls");
		printf("[뒷방]-[침대]\n\n");
		printf("1. 부순다.\n");
		printf("2. 뒤진다.\n");
		printf("3. 눕는다.\n");
		printf("0. 돌아가기\n");
		printf(">> ");
		scanf("%d", &menu);
	 
		switch(menu) {
			case 1:
				printf("침대는 부서지지 않는다....\n\n");						
				break;
			case 2:
				printf("아무것도 없다.\n\n");
				break;
			case 3:
				printf("야광별인 북두칠성이 보인다.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
		system("pause");
	}	
}	



void table(){
	int menu;
	
	while(1) {
		system("cls");
		printf("[뒷방]-[화장대]\n\n");
		printf("1. 거울을 본다.\n");
		printf("2. 뒤져돈다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
	 
		switch(menu) {
			case 1:
				printf("못생긴 나의 얼굴이 보인다.....\n\n");						
				break;
			case 2:
				printf("쪽지가 있다.. 내용: 나는 모든 사람을 일으키고 싶다......\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
		system("pause");
	}	
}	

void calendar(){
	int menu;
	
	while(1) {
		system("cls");
		printf("[뒷방]-[캘린더]\n\n");
		printf("1. 달력을 본다.\n");
		printf("0. 돌아간다.\n");
		
		printf(">> ");
		scanf("%d", &menu);
	 
		switch(menu) {
			case 1:
				printf("1일 2일 3일 4일 5일 6일 .......\n");
				Sleep(1000);
				printf("8일 9일 .........\n");	
				Sleep(1000);
				printf("뭔가 빠진 느낌이 든다...\n");							
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
		system("pause");
	}	
}	

void cloek(){
	int menu;
	
	while(1) {
		system("cls");
		printf("[뒷방]-[시계]\n\n");
		printf("1. 확인한다.\n");
		printf("0. 돌아간다.\n");
		
		printf(">> ");
		scanf("%d", &menu);
	 
		switch(menu) {
			case 1:
				printf("고장 난 듯하다... \n");
				Sleep(700);
				printf("정확히 6시에 멈춰있다...\n");								
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
		system("pause");
	}	
	
}	

	




