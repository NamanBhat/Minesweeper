#include"naman.h"
int brd[9][9][2]={0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,
                  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,
				  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,
				  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,
				  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,
				  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,
				  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,
				  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,
				  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,  0,0,};
 void ursor(){
CONSOLE_FONT_INFOEX console_info  ;
    console_info.cbSize = sizeof(console_info);
	console_info.dwFontSize.X = 14;
	console_info.dwFontSize.Y= 5;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE),FALSE,  &console_info);
	CONSOLE_CURSOR_INFO info;
	info.dwSize=100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}
int display(int call){int i,j,tiles=71;;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14*16+15);
if(call==1)system("cls");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0*16+15);
		for(i=0;i<9;i++){
		for(j=0;j<9;j++){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14*16+15);
		if((brd[i][j][0]!=10)&&(brd[i][j][1]==1))tiles--;
		gotoxy((i+1)*4-1,(j+1)*8-1);printf(" _____");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0*16+15);

			gotoxy((i+1)*4,(j+1)*8+5);printf("|");gotoxy((i+1)*4+1,(j+1)*8+5);printf("|");
			gotoxy((i+1)*4,(j+1)*8-1);printf("|     ");gotoxy((i+1)*4+1,(j+1)*8-1);printf("|     ");
			gotoxy((i+1)*4+2,(j+1)*8-1);printf("|_____");gotoxy((i+1)*4+2,(j+1)*8+5);printf("|");
						gotoxy((i+1)*4+1,(j+1)*8+2);
			if(brd[i][j][1]==0){gotoxy((i+1)*4,(j+1)*8);printf("%c%c%c%c%c",219,219,219,219,219);
			                    gotoxy((i+1)*4+1,(j+1)*8);printf("%c%c%c%c%c",219,219,219,219,219);
			                    gotoxy((i+1)*4+2,(j+1)*8);printf("%c%c%c%c%c",219,219,219,219,219);
			}
			
			else if(brd[i][j][1]==1){if((brd[i][j][0]!=10)&&(brd[i][j][0]!=0))printf("%d",brd[i][j][0]);
			     if(brd[i][j][0]==10){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12); printf("#");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);} 
				  if(brd[i][j][0]==0)printf(" ");}
			else if(brd[i][j][1]==2){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1*16+12);
			gotoxy((i+1)*4,(j+1)*8);printf("     ");
			gotoxy((i+1)*4+1,(j+1)*8);printf("  F  ");
			gotoxy((i+1)*4+2,(j+1)*8);printf("     ");	}
			
		}
	}SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14*16+2);	gotoxy(40,0);printf("          TILES LEFT: %d",tiles);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0*16+15);}


void cp(int i,int j){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10*16+2); 
	
			gotoxy((i)*4,(j)*8);printf("     ");
			gotoxy((i)*4+1,(j)*8);printf("  F  ");
			gotoxy((i)*4+2,(j)*8);printf("     ");
			gotoxy((i)*4+1,(j)*8+2);
			
			
			 if(brd[i-1][j-1][1]==1){if((brd[i-1][j-1][0]!=10)&&(brd[i-1][j-1][0]!=0))printf("%d",brd[i-1][j-1][0]);
			     if(brd[i-1][j-1][0]==10){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12); printf("#");} 
				  if(brd[i-1][j-1][0]==0)printf(" ");}
			else if(brd[i-1][j-1][1]==2){printf("F");	}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10*16+2);gotoxy((i)*4+2,(j)*8);printf("     ");
			if(brd[i-1][j-1][1]==0){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10*16+2);
			                    gotoxy((i)*4,(j)*8);printf("%c%c%c%c%c",219,219,219,219,219);
			                    gotoxy((i)*4+1,(j)*8);printf("%c%c%c%c%c",219,219,219,219,219);
			                    gotoxy((i)*4+2,(j)*8);printf("%c%c%c%c%c",219,219,219,219,219);
			}SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0*16+15);}
int makebrd(int k ,int l){int i,j,r,value,s;
	for(i=0;i<10;i++){cp(k+1,l+1);SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13*16+1);
	  gotoxy(11,15);
	      printf("|         Wait while set up the mines              |");gotoxy(12,15);
	      printf("|__________________________________________________|");
		re:
		srand(time(NULL)+getpid());
		r=(rand()%9);
		srand(time(NULL)+2*getpid());
		s=(rand()%9);
		if((brd[r][s][0]!=10)&&(r!=k)&&(s!=l))
		brd[r][s][0]=10;
		else goto re;	}

    for(i=0;i<9;i++){
    	for(j=0;j<9;j++){value=0;
    		if(brd[i][j][0]!=10){
    			if((i+1>=0)&&(i+1<9)){if(brd[i+1][j][0]==10)value++;}
    			if((i+1>=0)&&(i+1<9)&&(j-1>=0)&&(j-1<9)){if(brd[i+1][j-1][0]==10)value++;}
    			if((i+1>=0)&&(i+1<9)&&(j+1>=0)&&(j+1<9)){if(brd[i+1][j+1][0]==10)value++;}
    			if((i-1>=0)&&(i-1<9)&&(j>=0)&&(j<9)){if(brd[i-1][j][0]==10)value++;}
    			if((i-1>=0)&&(i-1<9)&&(j+1>=0)&&(j+1<9)){if(brd[i-1][j+1][0]==10)value++;}
    			if((i-1>=0)&&(i-1<9)&&(j-1>=0)&&(j-1<9)){if(brd[i-1][j-1][0]==10)value++;}
    			if((i>=0)&&(i<9)&&(j+1>=0)&&(j+1<9)){if(brd[i][j+1][0]==10)value++;}
    			if((i>=0)&&(i<9)&&(j-1>=0)&&(j-1<9)){if(brd[i][j-1][0]==10)value++;}
    			brd[i][j][0]=value;
			}
		}
	}

}

int getkey(){
	long int a=arrow();
	if(a==13) return 5;
	if(a==224072) return 1;
	if(a==224080) return 2;
	if(a==224075) return 3;
	if(a==224077) return 4;
	if(a==102) return 6;
	return 0;
}
void lose();

int checkwin2(){int i,j;
	display(1);
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){if(brd[i][j][0]!=10){if(brd[i][j][1]==0)return 0;}}}
	printf("\nYou win!!!");getch();exit(1);
}
int main(){
	int v,x=1,y=1,turn=0;system("cls");gotoxy(10,15);
	printf("#       #  ###  #    #   #######   #####  #     #  #######  #######  #####  #######  #####  ");gotoxy(11,15);
	printf("##     ##   #   ##   #   #        #       #  #  #  #        #        #    # #        #    # ");gotoxy(12,15);
	printf("# #   # #   #   # #  #   ######    ####   # # # #  ######   ######   #####  ######   #####  ");gotoxy(13,15);
	printf("#  # #  #   #   #  # #   #             #  ##   ##  #        #        #      #        #    # ");gotoxy(14,15);
	printf("#   #   #  ###  #   ##   #######  #####   #     #  #######  #######  #      #######  #     #");gotoxy(25,45);

	
	
	
	
	
	
	
	
	
	printf("press any key to start");
     getch();
     display(1);gotoxy(y*3+1,x*6+2);cp(y,x);
		if(kbhit){
		 v=getkey();
		 wait: 	if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
			if(v==5)goto swap;
			if(v==6)goto flagmine;
			  goto wait;}
	left:
		{if(x!=1)
		 x=x-1;
		 gotoxy(y*3+1,x*6+2);display(1);cp(y,x);
		 if(kbhit){
		 	int v=getkey();
		 	if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
			if(v==5)goto swap;
			if(v==6)goto flagmine;
			
		     
;}
		 goto wait;

		}
	up:
		{if(y!=1)
		 y=y-1;
		 gotoxy(y*3+1,x*6+2);display(1);cp(y,x);
		 if(kbhit){
		 	int v=getkey();
		 		if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
			if(v==5)goto swap;
			if(v==6)goto flagmine;
 }
		 
		    goto wait;
		}
	right:
		{if(x!=9)
		 x=x+1;
		 gotoxy(y*3+1,x*6+2);display(1);cp(y,x);
		 if(kbhit){
		 	int v=getkey();
		 		if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
			if(v==5)goto swap;
			if(v==6)goto flagmine;
}
		
		    goto wait;
		}
	down:
		{if(y!=9)
		 y=y+1;
		 gotoxy(y*3+1,x*6+2);display(1);cp(y,x);
		 if(kbhit){
		 	int v=getkey();
		 		if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
			if(v==5)goto swap;
			if(v==6)goto flagmine;
 }
		
		    goto wait;
		}
	swap:

	      if(turn==0){
		  makebrd(y-1,x-1);turn=1;}
          int a,f;
		 {brd[y-1][x-1][1]=1;cp(y,x);
	    if(brd[y-1][x-1][0]==10)lose();
		if(brd[y-1][x-1][0]==0){
			a=y-1;
			for(f=x;f<9;f++){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}else break;}
			int end=f;int st,start=x-1;
			re: 
			a++;while(start<end){
				if(brd[a][start][0]==0)break;else start++;}st=start;
				if((start>=end)||(a>=9))goto next;
			for(f=start;f<end;f++){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}}
			for(f=end;f<9;f++){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}else break;}
			goto re;
			
			
			next:
			a=y-1;
			for(f=x;f<9;f++){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}else break;}
			 end=f;start=x-1;
			re2: 
			a--;while(start<end){
				if(brd[a][start][0]==0)break;else start++;}st=start;
				if((start>=end)||(a<0))goto next1;
			for(f=start;f<end;f++){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}}
			for(f=end;f<9;f++){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}else break;}
			goto re2;
			

			
			
			next1:
			a=y-1;
			for(f=x-2;f>=0;f--){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}else break;}
		    end=f;start=x-1;
			re3: 
			a++;while(start>end){
				if(brd[a][start][0]==0)break;else start--;}st=start;
				if((start<=end)||(a>=9))goto next2;
			for(f=start;f>end;f--){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}}
			for(f=end;f>9;f--){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}else break;}
			goto re3;
			
			
		next2:
			a=y-1;
			for(f=x-2;f>=0;f--){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}else break;}
		    end=f;start=x-1;
			re4: 
			a--;while(start>end){
				if(brd[a][start][0]==0)break;else start--;}st=start;
				if((start<=end)||(a<0))goto display;
			for(f=start;f>end;f--){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}}
			for(f=end;f>9;f--){if(brd[a][f][0]==0){brd[a][f][1]=1;
			}else break;}
			goto re4;
			
			
			
			
			}
		display:cp(y,x);display(1);checkwin2();
		   gotoxy(y*3+1,x*6+2);cp(y,x);
		if(kbhit){int v=getkey();
		 	display(1);if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
			if(v==5)goto swap;
			if(v==6)goto flagmine;}
		 
		    goto wait;
		}
		flagmine:
			{if(brd[y-1][x-1][1]==0)
			{brd[y-1][x-1][1]=2;}display(1);
		   gotoxy(y*3+1,x*6+2);cp(y,x);
		if(kbhit){
		 	int v=getkey();
		 	display(1);	if(v==1)goto up;
		 	if(v==2)goto down;
		 	if(v==3)goto left;
		 	if(v==4)goto right;
			if(v==5)goto swap;
			if(v==6)goto flagmine; }
		 
		    goto wait;				
			}
	
}void lose(){int i,j;
	display(1);
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){if(brd[i][j][0]==10){brd[i][j][1]=1;}}}display(1);printf("\a");printf("\nYOU  LOSE!!!");
		int n;
		exit:
		n=1;
    	
    	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11*16+12);
		    		
		    		gotoxy(26,35);
		    		printf("|                  BETTER LUCK NEXT TIME!!!                   |");
		    		gotoxy(27,35);
		    		printf("|             Restart       New game      Exit                |");
		    		gotoxy(28,35);
		    		printf("|                                                             |");
		    		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
		           gotoxy(27,35+14*n);
		           
				  if(n==1) printf("Restart");
				  if(n==2) printf("New game");
				  if(n==3) printf("Exit");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		
		
		
		
		
		
			w2:
					 if(kbhit){
			int v=getkey();	
		 	if(v==3)goto left1;
		 	if(v==4)goto right1;
		 	if(v==5)goto enter2; 
			}
			right1:
		          {if(n!=3)
		           n=n+1;
		           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11*16+12);
		    	gotoxy(26,35);
		    		printf("|                  BETTER LUCK NEXT TIME!!!                   |");
		    		gotoxy(27,35);
		    		printf("|             Restart       New game      Exit                |");
		    		gotoxy(28,35);
		    		printf("|                                                             |");
		    		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
		           gotoxy(27,35+14*n);
		           
				  if(n==1) printf("Restart");
				  if(n==2) printf("New game");
				  if(n==3) printf("Exit");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		           if(kbhit){
		 	int v=getkey();	
		 	if(v==3)goto left1;
		 	if(v==4)goto right1;
		 	if(v==5)goto enter2;
			 }}
		 	
		 	goto w2;
		 	
		 	left1:
		          {if(n!=1)
		           n=n-1;
		           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11*16+12);
		    	gotoxy(26,35);
		    	
		    		printf("|                  BETTER LUCK NEXT TIME!!!                   |");
		    		gotoxy(27,35);
		    		printf("|             Restart       New game      Exit                |");
		    		gotoxy(28,35);
		    		printf("|                                                             |");
		    		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
		           gotoxy(27,35+14*n);
		           
				  if(n==1) printf("Restart");
				  if(n==2) printf("New game");
				  if(n==3) printf("Exit");
				   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		           if(kbhit){
		 	int v=getkey();	
		 	if(v==3)goto left1;
		 	if(v==4)goto right1;
		 	if(v==5)goto enter2;
			 }}
		    		
			goto w2;	
			
			
			
			enter2:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		if(n==3){exit(1);}
		if(n==2){
			for(i=0;i<9;i++){
    	for(j=0;j<9;j++){brd[i][j][0]=0;brd[i][j][1]=0;
		}};main();
		}
		if(n==1){for(i=0;i<9;i++){
    	for(j=0;j<9;j++){brd[i][j][1]=0;
		}}}}
