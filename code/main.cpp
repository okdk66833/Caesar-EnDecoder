#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <windows.h>
using namespace std;

int intro(){
	system( "cls" );
	printf("복합암호화프로그램 1.0\n");
}
///////////////////////////////////////////////
int manu1a1(){
	printf("====================================================\n");
	printf("manu: 1. 암호화	2. 복호화 3. 종료\n");
	printf("====================================================\n");
}
int manu1a2(){
	printf("====================================================\n");
	printf("선택 : 암호화\n");
	printf("====================================================\n");
}
int manu1a3(){
	printf("====================================================\n");
	printf("선택 : 복호화\n");
	printf("====================================================\n");
}
///////////////////////////////////////////////
int manu2a1(){
	printf("sys:  원하는 메뉴를 선택해주세요.\n\n\n");
	printf("====================================================\n입력 : ");

}
///////////////////////////////////////////////
int manu2a2(){
	printf("sys: 암호화 하고자 하는 문자열을 입력해주세요.\n(취소 : 3)([숫자, 특수문자, 한글]제외)\n\n");
	printf("====================================================\n입력 : ");

}
int manu2a2a1(){
	printf("sys: 암호화 강도를  입력해주세요.\n(-13~4)\n\n");
	printf("====================================================\n입력 : ");
}
///////////////////////////////////////////////
int manu2a3(){
	printf("sys: 복호화 하고자 하는 문자열을 입력해주세요.\n(취소 : 3)([숫자, 특수문자, 한글]제외)\n\n");
	printf("====================================================\n입력 : ");

}
int manu2a2a2(){
	printf("sys: 복호화 강도를  입력해주세요.\n(-13~4, 모르면 0)\n\n");
	printf("====================================================\n입력 : ");
}
///////////////////////////////////////////////
int main(){
	for(;;){
		intro();
		manu1a1();
		manu2a1();
		int a;
		scanf("%d",&a);
		scanf("%*c");
		if(a==1) {
			char b[10000];
			int c;
			intro();
			manu1a2();
			manu2a2();
			gets(b);
			if(b[0]=='3') goto x;
			vvv:;
			intro();
			manu1a2();
			manu2a2a1();
			scanf("%d",&c);
            scanf("%*c");
			if(c>4) c=4;
			intro();
			manu1a2();
			printf("sys: 결과 = ");
			for(int i=0;i<strlen(b);i++){
				if(b[i]==' ') printf(" ");
				else if(b[i-1]!=b[i])printf("%c",b[i]+c);

			}
			printf("\nsys: 암호화 하고자 하는 문자열을 입력해주세요.\n(취소 : 3)([숫자, 특수문자, 한글]제외)\n====================================================\n 입력 : ");
			gets(b);
			if(b[0]=='3') goto x;
			else goto vvv;
		}
		else if(a==2){
			char b[10000];
			int c;
			intro();
			manu1a3();
			manu2a3();
			gets(b);
			if(b[0]=='3') goto x;
			bbb:;
			intro();
			manu1a3();
			manu2a2a2();
			scanf("%d",&c);
			scanf("%*c");
			if(c>4) c=4;
			else if(c==0){
				intro();
				manu1a3();
				printf("sys: 결과 =");
				for(int i=-13;i<=4;i++){
					printf("\n강도 %d : ",i);
					for(int j=0;j<strlen(b);j++){
						if(b[j]==' ') printf(" ");
						else printf("%c",b[j]-i);
					}
				}
			}
			else{
				intro();
				manu1a3();
				printf("sys: 결과 = ");
				for(int i=0;i<strlen(b);i++){
					printf("%c",b[i]-c);
				}
			}
			printf("\nsys: 복호화 하고자 하는 문자열을 입력해주세요.\n(취소 : 3)([숫자, 특수문자, 한글]제외)\n====================================================\n 입력 : ");
			gets(b);
			if(b[0]=='3') goto x;
			else goto bbb;
		}
		else {
			break;
		}
		x:;
	}
}
