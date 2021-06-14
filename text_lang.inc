<?php

if ($browserlang == "en") {
	$text[$brand_name.' 홈페이지의 <a href="staticip.php">계정 관리</a>'] = '<a href="staticip.php">Account Management</a> of '.$brand_name.' website';
	$text['<span class="text-redfaded">비밀번호가 기억나지 않는다면</span> <a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인할 수 있습니다.</span>'] = '<span class="text-redfaded">If you don\'t remember your password, you can check it in </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">Account Management</a>.';
	$text['<span class="badge badge-warning">주의</span> <span class="text-redfaded">여기에 사용되는 아이디와 비밀번호는 '.$brand_name.' 홈페이지 로그인에 사용되는 SNS 아이디 비밀번호가 아닙니다. '.$brand_name.' 홈페이지 로그인 후 자신이 직접 생성한 VPN 접속 아이디 비번입니다. VPN 접속 아이디와 비밀번호가 기억나지 않는다면 </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인합니다.</span>'] = '<span class="badge badge-warning">Notice</span> <span class="text-redfaded">ID and Password on the connection program do not mean the ID or email address for sign-in at '.$brand_name.' website. The ID and Password are the VPN connection ID and password created by yourself after sign-in. You can check the ID and Password in </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">Account Management.</a>';
	$text['IKEv2 방식'] = 'How to connect to IKEv2';
	$text['일반 OpenVPN 접속 방법'] = 'How to connect to OpenVPN';
	$text['OpenVPN 접속 방법'] = 'How to connect to OpenVPN';
	$text[$brand_name.'은 연장 개월 수가 크고 관리하는 계정이 많을 수록 더 저렴하게 사용할 수 있습니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = $brand_name.' can be used cheaper if the more extended months you have and the more accounts you manage.';
	$text['연장 개월 수에 따른 요금'] = 'Fees based on the number of extended months';
	$text['1개월'] = '1 month';
	$text['3개월'] = '3 months';
	$text['6개월'] = '6 months';
	$text['12개월'] = '12 months';
	$text['가격/월'] = 'Price/month';
	$text['원'] = 'KRW';
	$text['이중 동시 접속 추가 요금은 월 '.$formate_multiconnect2_add_fee.'원이며, 할인율이 적용되지 않습니다.'] = 'The additional charge for dual connection is KRW '.$formate_multiconnect2_add_fee.' per month and the discount rate is not applied.';
	$text['이중 동시 접속 추가 요금은 월 USD'.$formate_multiconnect2_add_fee.'이며, 할인율이 적용되지 않습니다.'] = 'The additional charge for dual connection is USD'.$formate_multiconnect2_add_fee.' per month and the discount rate is not applied.'; 
	$text['사용자 계정 수에 따른 추가 할인율'] = 'Additional discount rate based on the number of user accounts';
	$text['30개 이상'] = '30 or more';
	$text['50개 이상'] = '50 or more';
	$text['100개 이상'] = '100 or more';
	$text['200개 이상'] = '200 or more';
	$text['할인율'] = 'Discount Rate';
	$text['개월수에 따른 요금에서 추가 할인됩니다. 만기일이 지난 계정은 계정 수에 포함되지 않습니다.'] = 'This discount will be added to the discount for extended months. VPN connection IDs past the expiration date are not included in the ID count.';
	$text['연장 시 개월 수가 클수록 더 저렴합니다.'] = 'The larger the number of months to extend, the cheaper it is.';
	$text['더 많이 사용할 수록 더 저렴합니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = 'The more you use, the cheaper it is.';
	$text['<span class="badge badge-warning">주의</span> <span class="text-redfaded">일부 바이러스 백신 프로그램에서 통합접속프로그램을 악성코드로 잘못 인식하는 경우가 있습니다.<br>이런 경우 통합접속프로그램을 사용하지않고 <a class="btn btn-success btn-sm" href=".'.$filename.'?tab=ikev2m">Windows 자체 VPN을 직접 설정해</a> 접속할 수 있습니다.<br>('.$brand_name.' 통합접속프로그램은 <a class="btn btn-info btn-sm" href="https://www.autoitscript.com/" target="_blank">AutoIt</a>을 이용하며, 일부 백신 프로그램이 이 AutoIt 자체를 악성코드로 잘못 인식하는 것이지 통합프로그램 자체에는 절대 악성코드가 들어있지않습니다.)</span>'] = '<span class="badge badge-warning">Notice</span> <span class="text-redfaded">Some antivirus programs may incorrectly recognize the integrated connection program as malicious code.<br>In this case, you can connect by <a class="btn btn-success btn-sm" href=".'.$filename.'?tab=ikev2m">direct set-up of Windows\' own VPN</a> without using the integrated connection program.<br>(The integrated connection program of '.$brand_name.' uses <a class="btn btn-info btn-sm" href="https://www.autoitscript.com/" target="_blank">AutoIt</a>, Some anti-virus programs misrecognize AutoIt itself as malicious code, but the integrated program itself never contains malicious code.)</span>';
} elseif ($browserlang == "zh") {
	$text[$brand_name.' 홈페이지의 <a href="staticip.php">계정 관리</a>'] = $brand_name.'主页上的<a href="staticip.php">帐户管理</a>';
	$text['<span class="text-redfaded">비밀번호가 기억나지 않는다면</span> <a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인할 수 있습니다.</span>'] = '<span class="text-redfaded">如果您忘记了密码，可以在</span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">帐户管理</a><span class="text-redfaded">中进行检查。</span>';
	$text['<span class="badge badge-warning">주의</span> <span class="text-redfaded">여기에 사용되는 아이디와 비밀번호는 '.$brand_name.' 홈페이지 로그인에 사용되는 SNS 아이디 비밀번호가 아닙니다. '.$brand_name.' 홈페이지 로그인 후 자신이 직접 생성한 VPN 접속 아이디 비번입니다. VPN 접속 아이디와 비밀번호가 기억나지 않는다면 </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인합니다.</span>'] = '<span class="badge badge-warning">注意</span> <span class="text-redfaded">这里使用的ID和密码不是用于登录'.$brand_name.'网站的SNS ID密码。 这是您登录'.$brand_name.'主页后由您自己创建的VPN连接ID的密码。 如果您不记得自己的VPN连接ID和密码，可以在</span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">帐户管理</a><span class="text-redfaded">中进行检查。</span>';
	$text['IKEv2 방식'] = '如何连接到IKEv2';
	$text['일반 OpenVPN 접속 방법'] = '如何连接到OpenVPN';
	$text['OpenVPN 접속 방법'] = '如何连接到OpenVPN';
	$text[$brand_name.'은 연장 개월 수가 크고 관리하는 계정이 많을 수록 더 저렴하게 사용할 수 있습니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = $brand_name.'的使用时间越长，您管理的帐户就越便宜。 收集和管理同一公司的朋友或同事的帐户。';
	$text['연장 개월 수에 따른 요금'] = '费用基于延长的月份数';
	$text['1개월'] = '1月';
	$text['3개월'] = '3月';
	$text['6개월'] = '6月';
	$text['12개월'] = '12月';
	$text['가격/월'] = '价钱/月';
	$text['원'] = '韩元';
	$text['이중 동시 접속 추가 요금은 월 '.$formate_multiconnect2_add_fee.'원이며, 할인율이 적용되지 않습니다.'] = '双重同时访问的额外费用为每月'.$formate_multiconnect2_add_fee.'韩元，且不适用折扣率。';
	$text['이중 동시 접속 추가 요금은 월 USD'.$formate_multiconnect2_add_fee.'이며, 할인율이 적용되지 않습니다.'] = '双重同时访问的额外费用为每月USD'.$formate_multiconnect2_add_fee.'，且不适用折扣率。';
	$text['사용자 계정 수에 따른 추가 할인율'] = '基于用户帐户数的附加折扣率';
	$text['30개 이상'] = '30以上';
	$text['50개 이상'] = '50以上';
	$text['100개 이상'] = '100以上';
	$text['200개 이상'] = '200以上';
	$text['할인율'] = '折扣率';
	$text['개월수에 따른 요금에서 추가 할인됩니다. 만기일이 지난 계정은 계정 수에 포함되지 않습니다.'] = '折扣按月数添加到折扣中。 过期日期后的帐户不包括在帐户计数中。';
	$text['연장 시 개월 수가 클수록 더 저렴합니다.'] = '延长的月数越大，则越便宜。';
	$text['더 많이 사용할 수록 더 저렴합니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = '您使用的越多，它越便宜。 收集和管理同一家公司的朋友或同事的帐户。';
	$text['<span class="badge badge-warning">주의</span> <span class="text-redfaded">일부 바이러스 백신 프로그램에서 통합접속프로그램을 악성코드로 잘못 인식하는 경우가 있습니다.<br>이런 경우 통합접속프로그램을 사용하지않고 <a class="btn btn-success btn-sm" href=".'.$filename.'?tab=ikev2m">Windows 자체 VPN을 직접 설정해</a> 접속할 수 있습니다.<br>('.$brand_name.' 통합접속프로그램은 <a class="btn btn-info btn-sm" href="https://www.autoitscript.com/" target="_blank">AutoIt</a>을 이용하며, 일부 백신 프로그램이 이 AutoIt 자체를 악성코드로 잘못 인식하는 것이지 통합프로그램 자체에는 절대 악성코드가 들어있지않습니다.)</span>'] = '<span class="badge badge-warning">注意</span> <span class="text-redfaded">某些防病毒程序可能错误地将集成连接程序识别为恶意代码。<br>在这种情况下，您可以通过<a class="btn btn-success btn-sm" href=".'.$filename.'?tab=ikev2m">直接设置Windows自己的VPN</a>进行连接，而无需使用集成连接程序。<br>('.$brand_name.'集成连接程序使用<a class="btn btn-info btn-sm" href="https://www.autoitscript.com/" target="_blank">AutoIt</a>，某些防病毒程序会将AutoIt本身误认为是恶意代码，但是集成程序本身从不包含恶意代码。)</span>';
} else {
	$text[$brand_name.' 홈페이지의 <a href="staticip.php">계정 관리</a>'] = $brand_name.' 홈페이지의 <a href="staticip.php">계정 관리</a>';
	$text['<span class="text-redfaded">비밀번호가 기억나지 않는다면</span> <a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인할 수 있습니다.</span>'] = '<span class="text-redfaded">비밀번호가 기억나지 않는다면</span> <a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인할 수 있습니다.</span>';
	$text['<span class="badge badge-warning">주의</span> <span class="text-redfaded">여기에 사용되는 아이디와 비밀번호는 '.$brand_name.' 홈페이지 로그인에 사용되는 SNS 아이디 비밀번호가 아닙니다. '.$brand_name.' 홈페이지 로그인 후 자신이 직접 생성한 VPN 접속 아이디 비번입니다. VPN 접속 아이디와 비밀번호가 기억나지 않는다면 </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인합니다.</span>'] = '<span class="badge badge-warning">주의</span> <span class="text-redfaded">여기에 사용되는 아이디와 비밀번호는 '.$brand_name.' 홈페이지 로그인에 사용되는 SNS 아이디 비밀번호가 아닙니다. '.$brand_name.' 홈페이지 로그인 후 자신이 직접 생성한 VPN 접속 아이디 비번입니다. VPN 접속 아이디와 비밀번호가 기억나지 않는다면 </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인합니다.</span>';
	$text['IKEv2 방식'] = 'IKEv2 방식';
	$text['일반 OpenVPN 접속 방법'] = '일반 OpenVPN 접속 방법';
	$text['OpenVPN 접속 방법'] = 'OpenVPN 접속 방법';
	$text[$brand_name.'은 연장 개월 수가 크고 관리하는 계정이 많을 수록 더 저렴하게 사용할 수 있습니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = $brand_name.'은 연장 개월 수가 크고 관리하는 계정이 많을 수록 더 저렴하게 사용할 수 있습니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.';
	$text['연장 개월 수에 따른 요금'] = '연장 개월 수에 따른 요금';
	$text['1개월'] = '1개월';
	$text['3개월'] = '3개월';
	$text['6개월'] = '6개월';
	$text['12개월'] = '12개월';
	$text['가격/월'] = '가격/월';
	$text['원'] = '원';
	$text['이중 동시 접속 추가 요금은 월 '.$formate_multiconnect2_add_fee.'원이며, 할인율이 적용되지 않습니다.'] = '이중 동시 접속 추가 요금은 월 '.$formate_multiconnect2_add_fee.'원이며, 할인율이 적용되지 않습니다.';
	$text['이중 동시 접속 추가 요금은 월 USD'.$formate_multiconnect2_add_fee.'이며, 할인율이 적용되지 않습니다.'] = '이중 동시 접속 추가 요금은 월 USD'.$formate_multiconnect2_add_fee.'이며, 할인율이 적용되지 않습니다.';
	$text['사용자 계정 수에 따른 추가 할인율'] = '사용자 계정 수에 따른 추가 할인율';
	$text['30개 이상'] = '30개 이상';
	$text['50개 이상'] = '50개 이상';
	$text['100개 이상'] = '100개 이상';
	$text['200개 이상'] = '200개 이상';
	$text['할인율'] = '할인율';
	$text['개월수에 따른 요금에서 추가 할인됩니다. 만기일이 지난 계정은 계정 수에 포함되지 않습니다.'] = '개월수에 따른 요금에서 추가 할인됩니다. 만기일이 지난 계정은 계정 수에 포함되지 않습니다.';
	$text['연장 시 개월 수가 클수록 더 저렴합니다.'] = '연장 시 개월 수가 클수록 더 저렴합니다.';
	$text['더 많이 사용할 수록 더 저렴합니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = '더 많이 사용할 수록 더 저렴합니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.';
	$text['<span class="badge badge-warning">주의</span> <span class="text-redfaded">일부 바이러스 백신 프로그램에서 통합접속프로그램을 악성코드로 잘못 인식하는 경우가 있습니다.<br>이런 경우 통합접속프로그램을 사용하지않고 <a class="btn btn-success btn-sm" href=".'.$filename.'?tab=ikev2m">Windows 자체 VPN을 직접 설정해</a> 접속할 수 있습니다.<br>('.$brand_name.' 통합접속프로그램은 <a class="btn btn-info btn-sm" href="https://www.autoitscript.com/" target="_blank">AutoIt</a>을 이용하며, 일부 백신 프로그램이 이 AutoIt 자체를 악성코드로 잘못 인식하는 것이지 통합프로그램 자체에는 절대 악성코드가 들어있지않습니다.)</span>'] = '<span class="badge badge-warning">주의</span> <span class="text-redfaded">일부 바이러스 백신 프로그램에서 통합접속프로그램을 악성코드로 잘못 인식하는 경우가 있습니다.<br>이런 경우 통합접속프로그램을 사용하지않고 <a class="btn btn-success btn-sm" href=".'.$filename.'?tab=ikev2m">Windows 자체 VPN을 직접 설정해</a> 접속할 수 있습니다.<br>('.$brand_name.' 통합접속프로그램은 <a class="btn btn-info btn-sm" href="https://www.autoitscript.com/" target="_blank">AutoIt</a>을 이용하며, 일부 백신 프로그램이 이 AutoIt 자체를 악성코드로 잘못 인식하는 것이지 통합프로그램 자체에는 절대 악성코드가 들어있지않습니다.)</span>';

}

?>