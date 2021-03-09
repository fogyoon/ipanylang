<?php
if ($browserlang == "en") {
	$text['상단으로 이동'] = 'Go to the top';

	//win7
	$text['Windows 7 VPN 접속 방법'] = 'How to connect to a VPN in Windows 7';
	$text['"제어판 ->  프로그램"에서 접속 프로그램을 삭제할 수 있습니다.'] = 'You can delete the program from Control Panel -> Programs.';

	//win10
	$text['직접설정'] = 'set by yourself';
	$text['이중암호화'] = 'double encryption';
	$text['Windows 10 VPN 접속 방법'] = 'How to connect to a VPN in Windows 10';
	$text['다른 디바이스 접속 방법 보러 가기'] = 'Go to see how to connect from other devices';
	$text['아래 방법으로 VPN 접속을 할 수 있습니다. 접속아이디에 "<?=$vpnid;?>"을(를) 사용하세요.'] = 'You can connect to the VPN in the following way. Please use '.$vpnid.' for VPN connection ID.';
	$text['가장 많이 사용되는 <strong>IKEv2 VPN 접속 방법</strong>입니다.'] = 'This is the most used IKEv2 VPN connection method.';
	$text['접속 프로그램 설치 및 접속'] = 'Connection program installation and connection';
	$text['아래 다운로드 버튼을 클릭하여 설치파일을 다운받습니다.'] = 'Click the download button below to download the installation file.';
	$text['통합 접속프로그램 다운받기'] = 'Download the integrated connection program';
	$text['접속 프로그램을 설치하지 않고 Windows 자체의 간단한 VPN 접속 설정으로도 접속이 가능합니다. 프로그램 설치를 원하지 않고 접속 설정을 직접하기 원한다면 여기를 클릭해 "직접 접속 설정 방법"을 확인하세요.'] = 'You can connect with a simple VPN connection setting of Windows itself without installing a connection program. If you do not want to install the program and want to set up the connection yourself, click here to see "How to set up yourself".';
	$text['브라우저의 다운로드 관련 메세지가 나타나면 "저장"을 선택하여 다운로드한 설치파일을 저장합니다.'] = 'When the browser\'s download message appears, select "Save" to save the downloaded installation file.';
	$text['다운로드가 끝나고 "폴더 열기"을 선택하면 다운로드된 파일이 저장된 폴더가 열리게 됩니다.'] = 'When the download is finished and you select "Open Folder", the folder in which the downloaded file is saved will be opened.';
	$text['zip 파일의 압축을 풀어주면 나오는 실행 파일을 더블 클릭하여 실행합니다.'] = 'After unzipping the zip file, double-click the executable file to run it.';
	$text['그림과 같이 "Windows PC 보호" 창이 열린다면 "추가 정보"를 클릭하면 "실행" 버튼이 보이게 됩니다. "실행" 버튼을 클릭합니다.'] = 'If the "Windows protected your PC" window opens as shown in the figure, click "More info" and you will see a "Run" button. Click the "Run Anyway" button.';
	$text['그림과 같이 "사용자 계정 컨트롤" 창이 열린다면 "예"를 선택합니다.'] = 'If the "User Account Control" window opens as shown, select "Yes".';
	$text['프로그램 설치를 마치고, 바탕화면 바로가기나 시작 메뉴에서 IPanyVPN을 클릭하여 프로그램을 실행합니다.'] = 'After installing the program, click IPanyVPN from the desktop shortcut or the Start menu to run the program.';
	$text['통합 접속 프로그램이 열리면,'] = 'When the integrated access program opens,';
	$text['접속아이디에 "<?=$vpnid;?>"을(를) 입력하고, 비밀번호를 입력하세요.'] = 'Enter '.$vpnid.' in the access ID and enter the password.';
	$text['"<?=$account_url;?>"에서 생성한 계정의 접속아이디와 비밀번호를 입력합니다.'] = 'Enter the connection ID and password created in '.$account_url.'.';
	$text['VPN 방식을 "IKEv2"로 선택하고, 접속 서버를 선택한 후 "접속하기"를 클릭하여 접속할 수 있습니다.'] = 'You can connect by selecting "IKEv2" as the VPN method, selecting a connection server, and clicking "Connect".';
	$text['VPN 방식'] = 'VPN method';
	$text['IKEv2 접속에 문제가 있다면, Openvpn 접속 방식을 선택하세요. (중국에서는 OpenVPN 접속이 가능하지 않습니다. 대신 OpenVPN SSL을 사용하세요.)'] = 'If you are having trouble connecting to IKEv2, choose the Openvpn connection method. (OpenVPN connection is not available in China. Use OpenVPN SSL instead.)';
	$text['접속 서버'] = 'Connection server';
	$text['IPany는 다중 접속 서버를 제공합니다. 접속이 원할하지 않다면 다른 서버를 선택해 접속할 수 있습니다.'] = 'IPany provides multiple access servers. If there is a problem with the connection, you can select another server to connect.';
	$text['접속에 성공하면 "계정 관리"에서 선택한 고정아이피로 인터넷을 이용하게 됩니다.'] = 'If the connection is successful, you will use the Internet with the Korean IP selected in "Account Management".';
	$text['<span class="badge badge-danger">중국</span> 중국에서 접속 시 VPN 접속 후에도 구글 페이스북이 열리지 않는다면 DNS 서버 설정을 변경해야 합니다. 방법을 확인하려면 여기를 클릭하세요.'] = '<span class="badge badge-danger">China</span> When connecting from China, if Google and Facebook do not open even after VPN connection, you need to change the DNS server settings. Click here to see how.';
	$text['<?=$osname;?>에서 DNS 서버를 한국 DNS 서버로 변경하는 방법입니다.'] = 'This is how to change DNS server to Korean DNS server in '.$osname;
	$text['윈도우 데스크톱 화면의 오른쪽 아래의 네트워크 트레이 아이콘에 마우스를 올리고 마우스 오른 쪽 버튼을 클릭합니다. <strong>네트워크 및 공유 센터 열기</strong>를 선택합니다.'] = 'Move the mouse over the network tray icon in the lower right corner of the Windows desktop screen and click the right mouse button. Select <strong>Open Network and Sharing Center</strong>.';
	$text['PC가 인터넷에 연결된 이더넷이나 WiFi의 연결을 클릭합니다.'] = 'Click the Ethernet or WiFi connection where your PC is connected to the Internet.';
	$text['속성을 클릭합니다.'] = 'Click Properties.';
	$text['인터넷 프로토콜 버전4(TCP/IPv4)를 더블 클릭합니다.'] = 'Double-click Internet Protocol Version 4 (TCP/IPv4).';
	$text['"다음 DNS 서버 주소 사용"을 선택하고 그림과 같이 DNS 서버 주소를 입력합니다.'] = 'Select "Use the following DNS server address" and enter the DNS server address as shown.';
	$text['"확인" 및 "닫기" 버튼을 연속으로 선택하여 변경 내용을 적용합니다.  PC를 재부팅 합니다.'] = 'Select the "OK" and "Close" buttons in succession to apply the changes. Reboot your PC.';
	$text['이 방법으로도 해결이되지 않는다면 <a href="connects_rpi_rpi.php">PI보드를 이용한 VPN 접속 방법</a>을 사용해야 합니다.'] = 'If this doesn\'t work, you should use <a href="connects_rpi_rpi.php">VPN connection method using the PI board.</a>';
	$text['접속 장애 확인'] = 'Check connection failure';
	$text['접속에 실패하면 접속 실패창이 뜨게됩니다. 여기서 접속 실패 원인을 확인할 수 있습니다.'] = 'If the connection fails, the connection failure window appears. Here you can check the cause of the connection failure.';
	$text['주요 "오류 번호"에 따른 접속 실패 원인과 해결 방법입니다.'] = 'These are the causes and solutions for connection failure according to the "error number".';
	$text['오류'] = 'Error';
	$text['원인 및 해결방법'] = 'Cause and solution';
	$text['접속 계정의 사용자 이름, 비밀번호가 잘못되거나, 만기일이 지났거나, 이미 접속되어 있는데 다시 접속을 시도하는 경우입니다. IPany 서비스는 같은 계정으로 동시에 이중 접속이 되지 않습니다. IPany.net 홈페이지의 "<a href="staticip.php">계정 관리</a>"에서 해당 계정 상태를 확인합니다.'] = 'The user name and password of the access account are incorrect, the expiration date has expired, or the connection is attempted again even though it is already connected. IPany service cannot be connected to the same account simultaneously. Check the status of your account in "<a href="staticip.php">Account Management</a>" on the IPany.net homepage.';
	$text['접속 서버를 찾지 못해 발생하는 오류입니다. 인터넷 연결이 되어있지 않은 경우, DNS 오류, 방화벽으로 차단된 경우입니다. DNS 오류의 경우는 컴퓨터의 DNS 서버 설정을 "168.126.63.1"로 변경하여 해결 할 수 있습니다. 방화벽으로 차단된 경우는 다른 VPN 방식으로 접속해야 합니다.'] = 'This error occurs when the connection server is not found. If you don\'t have internet connection, DNS error or vpn connection is blocked by firewall. DNS errors can be resolved by changing the DNS server setting of the computer to "168.126.63.1". If it is blocked by a firewall, you need to connect with another VPN method.';
	$text['오류87 "매개변수가 틀립니다."는 Windows OS 자체의 문제 때문입니다. <a href="howto.php">문제해결 페이지</a>에 해결방법이 설명되어 있습니다.'] = 'Error 87 "The parameter is incorrect" is due to a problem with the Windows OS itself. The solution is explained in the <a href="howto.php">troubleshooting page</a>.';
	$text['접속기 삭제'] = 'Delete VPN connection program';
	$text['설정 -> 앱 (앱 및 기능)에서 프로그램을 삭제할 수 있습니다.'] = 'You can delete the program from Settings -> Apps (Apps & Features).';

	$title = "Windows 10 ".$vpnname."VPN ".$subvpnname." Connection";
	$description = "Windows 10 ".$vpnname."VPN Connection Method";
} elseif ($browserlang == "zh") {
	$text['상단으로 이동'] = '转到顶部';

	//win7
	$text['Windows 7 VPN 접속 방법'] = '如何在Windows 7中连接到VPN';
	$text['"제어판 ->  프로그램"에서 접속 프로그램을 삭제할 수 있습니다.'] = '您可以从控制面板->程序中删除程序。';

	//win10
	$text['직접설정'] = '自行设定';
	$text['이중암호화'] = '双重加密';
	$text['Windows 10 VPN 접속 방법'] = '如何在Windows 10中连接到VPN';
	$text['다른 디바이스 접속 방법 보러 가기'] = '去看看如何从其他设备连接';
	$text['아래 방법으로 VPN 접속을 할 수 있습니다. 접속아이디에 "<?=$vpnid;?>"을(를) 사용하세요.'] = '您可以通过以下方式连接到VPN。请使用'.$vpnid.'作为VPN连接ID';
	$text['가장 많이 사용되는 <strong>IKEv2 VPN 접속 방법</strong>입니다.'] = '这是最常用的IKEv2 VPN连接方法。';
	$text['접속 프로그램 설치 및 접속'] = '连接程序的安装和连接';
	$text['아래 다운로드 버튼을 클릭하여 설치파일을 다운받습니다.'] = '单击下面的下载按钮以下载安装文件。';
	$text['통합 접속프로그램 다운받기'] = '下载集成连接程序';
	$text['접속 프로그램을 설치하지 않고 Windows 자체의 간단한 VPN 접속 설정으로도 접속이 가능합니다. 프로그램 설치를 원하지 않고 접속 설정을 직접하기 원한다면 여기를 클릭해 "직접 접속 설정 방법"을 확인하세요.'] = '您可以使用Windows本身的简单VPN连接设置进行连接，而无需安装连接程序。 如果您不想安装该程序并想要自己建立连接，请单击此处查看“如何自行设置”。';
	$text['브라우저의 다운로드 관련 메세지가 나타나면 "저장"을 선택하여 다운로드한 설치파일을 저장합니다.'] = '当浏览器的下载消息出现时，选择“保存”以保存下载的安装文件。';
	$text['다운로드가 끝나고 "폴더 열기"을 선택하면 다운로드된 파일이 저장된 폴더가 열리게 됩니다.'] = '下载完成后，选择“打开文件夹”以打开保存下载文件的文件夹。';
	$text['zip 파일의 압축을 풀어주면 나오는 실행 파일을 더블 클릭하여 실행합니다.'] = '解压缩zip文件后，双击可执行文件以运行它。';
	$text['그림과 같이 "Windows PC 보호" 창이 열린다면 "추가 정보"를 클릭하면 "실행" 버튼이 보이게 됩니다. "실행" 버튼을 클릭합니다.'] = '如果如图所示打开“ Windows保护您的PC”窗口，请单击“更多信息”，您将看到一个“运行”按钮。 单击“仍然运行”按钮。';
	$text['그림과 같이 "사용자 계정 컨트롤" 창이 열린다면 "예"를 선택합니다.'] = '如果如图所示打开“用户帐户控制”窗口，请选择“是”。';
	$text['프로그램 설치를 마치고, 바탕화면 바로가기나 시작 메뉴에서 IPanyVPN을 클릭하여 프로그램을 실행합니다.'] = '安装程序后，从桌面快捷方式或“开始”菜单中单击IPanyVPN以运行该程序。';
	$text['통합 접속 프로그램이 열리면,'] = '当集成访问程序打开时，';
	$text['접속아이디에 "<?=$vpnid;?>"을(를) 입력하고, 비밀번호를 입력하세요.'] = '在访问ID中输入'.$vpnid.'，然后输入密码。';
	$text['"<?=$account_url;?>"에서 생성한 계정의 접속아이디와 비밀번호를 입력합니다.'] = '输入在'.$account_url.'中创建的连接ID和密码。';
	$text['VPN 방식을 "IKEv2"로 선택하고, 접속 서버를 선택한 후 "접속하기"를 클릭하여 접속할 수 있습니다.'] = '您可以通过选择“ IKEv2”作为VPN方法，选择连接服务器并单击“连接”来进行连接。';
	$text['VPN 방식'] = 'VPN方式';
	$text['IKEv2 접속에 문제가 있다면, Openvpn 접속 방식을 선택하세요. (중국에서는 OpenVPN 접속이 가능하지 않습니다. 대신 OpenVPN SSL을 사용하세요.)'] = '如果在连接IKEv2时遇到问题，请选择Openvpn连接方法。 （OpenVPN连接在中国不可用。请改用OpenVPN SSL。）';
	$text['접속 서버'] = '连接服务器';
	$text['IPany는 다중 접속 서버를 제공합니다. 접속이 원할하지 않다면 다른 서버를 선택해 접속할 수 있습니다.'] = 'IPany提供了多个访问服务器。 如果连接出现问题，则可以选择另一台服务器进行连接。';
	$text['접속에 성공하면 "계정 관리"에서 선택한 고정아이피로 인터넷을 이용하게 됩니다.'] = '如果连接成功，您将使用在“帐户管理”中选择的韩文IP的Internet。';
	$text['<span class="badge badge-danger">중국</span> 중국에서 접속 시 VPN 접속 후에도 구글 페이스북이 열리지 않는다면 DNS 서버 설정을 변경해야 합니다. 방법을 확인하려면 여기를 클릭하세요.'] = '<span class="badge badge-danger">中国</span> 从中国连接时，如果在VPN连接后仍未打开Goog​​le和Facebook，则需要更改DNS服务器设置。 单击此处查看操作方法。';
	$text['<?=$osname;?>에서 DNS 서버를 한국 DNS 서버로 변경하는 방법입니다.'] = '这是将'.$osname.'中的DNS服务器更改为韩文DNS服务器的方法。';
	$text['윈도우 데스크톱 화면의 오른쪽 아래의 네트워크 트레이 아이콘에 마우스를 올리고 마우스 오른 쪽 버튼을 클릭합니다. <strong>네트워크 및 공유 센터 열기</strong>를 선택합니다.'] = '将鼠标移到Windows桌面屏幕右下角的网络托盘图标上，然后单击鼠标右键。 选择<strong>打开网络和共享中心</strong>。';
	$text['PC가 인터넷에 연결된 이더넷이나 WiFi의 연결을 클릭합니다.'] = '单击您的PC连接到Internet的以太网或WiFi连接。';
	$text['속성을 클릭합니다.'] = '单击属性。';
	$text['인터넷 프로토콜 버전4(TCP/IPv4)를 더블 클릭합니다.'] = '双击“ Internet协议版本4（TCP / IPv4）”。';
	$text['"다음 DNS 서버 주소 사용"을 선택하고 그림과 같이 DNS 서버 주소를 입력합니다.'] = '选择“使用以下DNS服务器地址”，然后输入DNS服务器地址，如图所示。';
	$text['"확인" 및 "닫기" 버튼을 연속으로 선택하여 변경 내용을 적용합니다.  PC를 재부팅 합니다.'] = '依次选择“确定”和“关闭”按钮以应用更改。 重新启动您的PC。';
	$text['이 방법으로도 해결이되지 않는다면 <a href="connects_rpi_rpi.php">PI보드를 이용한 VPN 접속 방법</a>을 사용해야 합니다.'] = '如果这不起作用，<a href="connects_rpi_rpi.php">则应通过PI板使用VPN连接方法。</a>';
	$text['접속 장애 확인'] = '检查连接失败';
	$text['접속에 실패하면 접속 실패창이 뜨게됩니다. 여기서 접속 실패 원인을 확인할 수 있습니다.'] = '如果连接失败，将出现“连接失败”窗口。 您可以在此处检查连接失败的原因。';
	$text['주요 "오류 번호"에 따른 접속 실패 원인과 해결 방법입니다.'] = '这些是根据主要“错误号”的连接失败的原因和解决方案。';
	$text['오류'] = '错误';
	$text['원인 및 해결방법'] = '原因及解决方法';
	$text['접속 계정의 사용자 이름, 비밀번호가 잘못되거나, 만기일이 지났거나, 이미 접속되어 있는데 다시 접속을 시도하는 경우입니다. IPany 서비스는 같은 계정으로 동시에 이중 접속이 되지 않습니다. IPany.net 홈페이지의 "<a href="staticip.php">계정 관리</a>"에서 해당 계정 상태를 확인합니다.'] = '访问帐户的用户名和密码不正确，到期日期已过期，或者即使已连接也尝试重新连接。 IPany服务不允许使用同一帐户同时进行双重访问。 在IPany.net主页上的“ <a href="staticip.php">帐户管理</a>”中检查帐户的状态。';
	$text['접속 서버를 찾지 못해 발생하는 오류입니다. 인터넷 연결이 되어있지 않은 경우, DNS 오류, 방화벽으로 차단된 경우입니다. DNS 오류의 경우는 컴퓨터의 DNS 서버 설정을 "168.126.63.1"로 변경하여 해결 할 수 있습니다. 방화벽으로 차단된 경우는 다른 VPN 방식으로 접속해야 합니다.'] = '当找不到连接服务器时，会发生此错误。 如果没有Internet连接，则防火墙将阻止DNS错误或VPN连接。 通过将计算机的DNS服务器设置更改为“ 168.126.63.1”，可以解决DNS错误。 如果它被防火墙阻止，则需要使用其他VPN方法进行连接。';
	$text['오류87 "매개변수가 틀립니다."는 Windows OS 자체의 문제 때문입니다. <a href="howto.php">문제해결 페이지</a>에 해결방법이 설명되어 있습니다.'] = '错误87“参数不正确”是由于Windows操作系统本身存在问题。 <a href="howto.php">问题排查页面</a>中说明了该解决方案。';
	$text['접속기 삭제'] = '删除VPN连接程序';
	$text['설정 -> 앱 (앱 및 기능)에서 프로그램을 삭제할 수 있습니다.'] = '您可以从设置->应用程序（应用程序和功能）中删除程序。';

	$title = "Windows 10 ".$vpnname."VPN ".$subvpnname." 连接";
	$description = "Windows 10 ".$vpnname."VPN 连接方式";
} else {
	$text['상단으로 이동'] = '상단으로 이동';

	//win7
	$text['Windows 7 VPN 접속 방법'] = 'Windows 7 VPN 접속 방법';
	$text['"제어판 ->  프로그램"에서 접속 프로그램을 삭제할 수 있습니다.'] = '"제어판 ->  프로그램"에서 접속 프로그램을 삭제할 수 있습니다.';

	//win10
	$text['직접설정'] = '직접설정';
	$text['이중암호화'] = '이중암호화';
	$text['Windows 10 VPN 접속 방법'] = 'Windows 10 VPN 접속 방법';
	$text['다른 디바이스 접속 방법 보러 가기'] = '다른 디바이스 접속 방법 보러 가기';
	$text['아래 방법으로 VPN 접속을 할 수 있습니다. 접속아이디에 "<?=$vpnid;?>"을(를) 사용하세요.'] = '아래 방법으로 VPN 접속을 할 수 있습니다. 접속아이디에 '.$vpnid.'을(를) 사용하세요.';
	$text['가장 많이 사용되는 <strong>IKEv2 VPN 접속 방법</strong>입니다.'] = '가장 많이 사용되는 <strong>IKEv2 VPN 접속 방법</strong>입니다.';
	$text['접속 프로그램 설치 및 접속'] = '접속 프로그램 설치 및 접속';
	$text['아래 다운로드 버튼을 클릭하여 설치파일을 다운받습니다.'] = '아래 다운로드 버튼을 클릭하여 설치파일을 다운받습니다.';
	$text['통합 접속프로그램 다운받기'] = '통합 접속프로그램 다운받기';
	$text['접속 프로그램을 설치하지 않고 Windows 자체의 간단한 VPN 접속 설정으로도 접속이 가능합니다. 프로그램 설치를 원하지 않고 접속 설정을 직접하기 원한다면 여기를 클릭해 "직접 접속 설정 방법"을 확인하세요.'] = '접속 프로그램을 설치하지 않고 Windows 자체의 간단한 VPN 접속 설정으로도 접속이 가능합니다. 프로그램 설치를 원하지 않고 접속 설정을 직접하기 원한다면 여기를 클릭해 "직접 접속 설정 방법"을 확인하세요.';
	$text['브라우저의 다운로드 관련 메세지가 나타나면 "저장"을 선택하여 다운로드한 설치파일을 저장합니다.'] = '브라우저의 다운로드 관련 메세지가 나타나면 "저장"을 선택하여 다운로드한 설치파일을 저장합니다.';
	$text['다운로드가 끝나고 "폴더 열기"을 선택하면 다운로드된 파일이 저장된 폴더가 열리게 됩니다.'] = '다운로드가 끝나고 "폴더 열기"을 선택하면 다운로드된 파일이 저장된 폴더가 열리게 됩니다.';
	$text['zip 파일의 압축을 풀어주면 나오는 실행 파일을 더블 클릭하여 실행합니다.'] = 'zip 파일의 압축을 풀어주면 나오는 실행 파일을 더블 클릭하여 실행합니다.';
	$text['그림과 같이 "Windows PC 보호" 창이 열린다면 "추가 정보"를 클릭하면 "실행" 버튼이 보이게 됩니다. "실행" 버튼을 클릭합니다.'] = '그림과 같이 "Windows PC 보호" 창이 열린다면 "추가 정보"를 클릭하면 "실행" 버튼이 보이게 됩니다. "실행" 버튼을 클릭합니다.';
	$text['그림과 같이 "사용자 계정 컨트롤" 창이 열린다면 "예"를 선택합니다.'] = '그림과 같이 "사용자 계정 컨트롤" 창이 열린다면 "예"를 선택합니다.';
	$text['프로그램 설치를 마치고, 바탕화면 바로가기나 시작 메뉴에서 IPanyVPN을 클릭하여 프로그램을 실행합니다.'] = '프로그램 설치를 마치고, 바탕화면 바로가기나 시작 메뉴에서 IPanyVPN을 클릭하여 프로그램을 실행합니다.';
	$text['통합 접속 프로그램이 열리면,'] = '통합 접속 프로그램이 열리면,';
	$text['접속아이디에 "<?=$vpnid;?>"을(를) 입력하고, 비밀번호를 입력하세요.'] = '접속아이디에 '.$vpnid.'을(를) 입력하고, 비밀번호를 입력하세요.';
	$text['"<?=$account_url;?>"에서 생성한 계정의 접속아이디와 비밀번호를 입력합니다.'] = $account_url.'에서 생성한 계정의 접속아이디와 비밀번호를 입력합니다.';
	$text['VPN 방식을 "IKEv2"로 선택하고, 접속 서버를 선택한 후 "접속하기"를 클릭하여 접속할 수 있습니다.'] = 'VPN 방식을 "IKEv2"로 선택하고, 접속 서버를 선택한 후 "접속하기"를 클릭하여 접속할 수 있습니다.';
	$text['VPN 방식'] = 'VPN 방식';
	$text['IKEv2 접속에 문제가 있다면, Openvpn 접속 방식을 선택하세요. (중국에서는 OpenVPN 접속이 가능하지 않습니다. 대신 OpenVPN SSL을 사용하세요.)'] = 'IKEv2 접속에 문제가 있다면, Openvpn 접속 방식을 선택하세요. (중국에서는 OpenVPN 접속이 가능하지 않습니다. 대신 OpenVPN SSL을 사용하세요.)';
	$text['접속 서버'] = '접속 서버';
	$text['IPany는 다중 접속 서버를 제공합니다. 접속이 원할하지 않다면 다른 서버를 선택해 접속할 수 있습니다.'] = 'IPany는 다중 접속 서버를 제공합니다. 접속이 원할하지 않다면 다른 서버를 선택해 접속할 수 있습니다.';
	$text['접속에 성공하면 "계정 관리"에서 선택한 고정아이피로 인터넷을 이용하게 됩니다.'] = '접속에 성공하면 "계정 관리"에서 선택한 고정아이피로 인터넷을 이용하게 됩니다.';
	$text['<span class="badge badge-danger">중국</span> 중국에서 접속 시 VPN 접속 후에도 구글 페이스북이 열리지 않는다면 DNS 서버 설정을 변경해야 합니다. 방법을 확인하려면 여기를 클릭하세요.'] = '<span class="badge badge-danger">중국</span> 중국에서 접속 시 VPN 접속 후에도 구글 페이스북이 열리지 않는다면 DNS 서버 설정을 변경해야 합니다. 방법을 확인하려면 여기를 클릭하세요.';
	$text['<?=$osname;?>에서 DNS 서버를 한국 DNS 서버로 변경하는 방법입니다.'] = $osname.'에서 DNS 서버를 한국 DNS 서버로 변경하는 방법입니다.';
	$text['윈도우 데스크톱 화면의 오른쪽 아래의 네트워크 트레이 아이콘에 마우스를 올리고 마우스 오른 쪽 버튼을 클릭합니다. <strong>네트워크 및 공유 센터 열기</strong>를 선택합니다.'] = '윈도우 데스크톱 화면의 오른쪽 아래의 네트워크 트레이 아이콘에 마우스를 올리고 마우스 오른 쪽 버튼을 클릭합니다. <strong>네트워크 및 공유 센터 열기</strong>를 선택합니다.';
	$text['PC가 인터넷에 연결된 이더넷이나 WiFi의 연결을 클릭합니다.'] = 'PC가 인터넷에 연결된 이더넷이나 WiFi의 연결을 클릭합니다.';
	$text['속성을 클릭합니다.'] = '속성을 클릭합니다.';
	$text['인터넷 프로토콜 버전4(TCP/IPv4)를 더블 클릭합니다.'] = '인터넷 프로토콜 버전4(TCP/IPv4)를 더블 클릭합니다.';
	$text['"다음 DNS 서버 주소 사용"을 선택하고 그림과 같이 DNS 서버 주소를 입력합니다.'] = '"다음 DNS 서버 주소 사용"을 선택하고 그림과 같이 DNS 서버 주소를 입력합니다.';
	$text['"확인" 및 "닫기" 버튼을 연속으로 선택하여 변경 내용을 적용합니다.  PC를 재부팅 합니다.'] = '"확인" 및 "닫기" 버튼을 연속으로 선택하여 변경 내용을 적용합니다.  PC를 재부팅 합니다.';
	$text['이 방법으로도 해결이되지 않는다면 <a href="connects_rpi_rpi.php">PI보드를 이용한 VPN 접속 방법</a>을 사용해야 합니다.'] = '이 방법으로도 해결이되지 않는다면 <a href="connects_rpi_rpi.php">PI보드를 이용한 VPN 접속 방법</a>을 사용해야 합니다.';
	$text['접속 장애 확인'] = '접속 장애 확인';
	$text['접속에 실패하면 접속 실패창이 뜨게됩니다. 여기서 접속 실패 원인을 확인할 수 있습니다.'] = '접속에 실패하면 접속 실패창이 뜨게됩니다. 여기서 접속 실패 원인을 확인할 수 있습니다.';
	$text['주요 "오류 번호"에 따른 접속 실패 원인과 해결 방법입니다.'] = '주요 "오류 번호"에 따른 접속 실패 원인과 해결 방법입니다.';
	$text['오류'] = '오류';
	$text['원인 및 해결방법'] = '원인 및 해결방법';
	$text['접속 계정의 사용자 이름, 비밀번호가 잘못되거나, 만기일이 지났거나, 이미 접속되어 있는데 다시 접속을 시도하는 경우입니다. IPany 서비스는 같은 계정으로 동시에 이중 접속이 되지 않습니다. IPany.net 홈페이지의 "<a href="staticip.php">계정 관리</a>"에서 해당 계정 상태를 확인합니다.'] = '접속 계정의 사용자 이름, 비밀번호가 잘못되거나, 만기일이 지났거나, 이미 접속되어 있는데 다시 접속을 시도하는 경우입니다. IPany 서비스는 같은 계정으로 동시에 이중 접속이 되지 않습니다. IPany.net 홈페이지의 "<a href="staticip.php">계정 관리</a>"에서 해당 계정 상태를 확인합니다.';
	$text['접속 서버를 찾지 못해 발생하는 오류입니다. 인터넷 연결이 되어있지 않은 경우, DNS 오류, 방화벽으로 차단된 경우입니다. DNS 오류의 경우는 컴퓨터의 DNS 서버 설정을 "168.126.63.1"로 변경하여 해결 할 수 있습니다. 방화벽으로 차단된 경우는 다른 VPN 방식으로 접속해야 합니다.'] = '접속 서버를 찾지 못해 발생하는 오류입니다. 인터넷 연결이 되어있지 않은 경우, DNS 오류, 방화벽으로 차단된 경우입니다. DNS 오류의 경우는 컴퓨터의 DNS 서버 설정을 "168.126.63.1"로 변경하여 해결 할 수 있습니다. 방화벽으로 차단된 경우는 다른 VPN 방식으로 접속해야 합니다.';
	$text['오류87 "매개변수가 틀립니다."는 Windows OS 자체의 문제 때문입니다. <a href="howto.php">문제해결 페이지</a>에 해결방법이 설명되어 있습니다.'] = '오류87 "매개변수가 틀립니다."는 Windows OS 자체의 문제 때문입니다. <a href="howto.php">문제해결 페이지</a>에 해결방법이 설명되어 있습니다.';
	$text['접속기 삭제'] = '접속기 삭제';
	$text['설정 -> 앱 (앱 및 기능)에서 프로그램을 삭제할 수 있습니다.'] = '설정 -> 앱 (앱 및 기능)에서 프로그램을 삭제할 수 있습니다.';
}
?>