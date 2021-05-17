<?php

if ($browserlang == "en") {
	$text[$brand_name.' 홈페이지의 <a href="staticip.php">계정 관리</a>'] = '<a href="staticip.php">account management</a> of '.$brand_name.' website';
	$text['<span class="text-redfaded">비밀번호가 기억나지 않는다면</span> <a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인할 수 있습니다.</span>'] = '<span class="text-redfaded">If you don\'t remember your password, you can check it in </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">Account Management.</a>';
	$text['<span class="badge badge-warning">주의</span> <span class="text-redfaded">여기에 사용되는 아이디와 비밀번호는 '.$brand_name.' 홈페이지 로그인에 사용되는 SNS 아이디 비밀번호가 아닙니다. '.$brand_name.' 홈페이지 로그인 후 자신이 직접 생성한 VPN 접속 아이디 비번입니다. VPN 접속 아이디와 비밀번호가 기억나지 않는다면 </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인합니다.</span>'] = '<span class="badge badge-warning">Caution</span> <span class="text-redfaded">ID and Password on the connection program do not mean the ID or email address for sign-in at '.$brand_name.' website. The ID and Password are the VPN connection ID and password created by yourself after sign-in. You can check the ID and Password in </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">Account Management.</a>';
	$text['IKEv2 방식'] = 'How to connect to IKEv2';
	$text['일반 OpenVPN 접속 방법'] = 'How to connect to OpenVPN';
	$text['OpenVPN 접속 방법'] = 'How to connect to OpenVPN';
	$text[$brand_name.'은 연장 개월 수가 크고 관리하는 계정이 많을 수록 더 저렴하게 사용할 수 있습니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = $brand_name.' can be used cheaper the more extended months you have and the more accounts you manage. Collect and manage accounts of friends or colleagues in the same company.';
	$text['연장 개월 수에 따른 요금'] = 'Fees based on the number of extended months';
	$text['1개월'] = '1 month';
	$text['3개월'] = '3 months';
	$text['6개월'] = '6 months';
	$text['12개월'] = '12 months';
	$text['가격/월'] = 'Price/month';
	$text['원'] = 'KRW';
	$text['이중 동시 접속 추가 요금은 월 '.$formate_multiconnect2_add_fee.'원이며, 할인율이 적용되지 않습니다.'] = 'The additional charge for simultaneous access is KRW '.$formate_multiconnect2_add_fee.' per month, and the discount rate does not apply.';
	$text['사용자 계정 수에 따른 추가 할인율'] = 'Additional discount rate based on the number of user accounts';
	$text['30개 이상'] = '30 or more';
	$text['50개 이상'] = '50 or more';
	$text['100개 이상'] = '100 or more';
	$text['200개 이상'] = '200 or more';
	$text['할인율'] = 'Discount Rate';
	$text['개월수에 따른 요금에서 추가 할인됩니다. 만기일이 지난 계정은 계정 수에 포함되지 않습니다.'] = 'Discount is added to the discount by the number of months. Accounts past their expiration date are not included in the account count.';
	$text['연장 시 개월 수가 클수록 더 저렴합니다.'] = 'The larger the number of months to extend, the cheaper it is.';
	$text['더 많이 사용할 수록 더 저렴합니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = 'The more you use, the cheaper it is. Collect and manage accounts of friends or colleagues at the same company.';
} elseif ($browserlang == "zh") {
	$text[$brand_name.' 홈페이지의 <a href="staticip.php">계정 관리</a>'] = $brand_name.'主页上的<a href="staticip.php">帐户管理</a>';
	$text['<span class="text-redfaded">비밀번호가 기억나지 않는다면</span> <a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인할 수 있습니다.</span>'] = '<span class="text-redfaded">如果您忘记了密码，可以在</span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">帐户管理</a><span class="text-redfaded">中进行检查。</span>';
	$text['<span class="badge badge-warning">주의</span> <span class="text-redfaded">여기에 사용되는 아이디와 비밀번호는 '.$brand_name.' 홈페이지 로그인에 사용되는 SNS 아이디 비밀번호가 아닙니다. '.$brand_name.' 홈페이지 로그인 후 자신이 직접 생성한 VPN 접속 아이디 비번입니다. VPN 접속 아이디와 비밀번호가 기억나지 않는다면 </span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">계정 관리</a><span class="text-redfaded">에서 확인합니다.</span>'] = '<span class="badge badge-warning">警告</span> <span class="text-redfaded">这里使用的ID和密码不是用于登录'.$brand_name.'网站的SNS ID密码。 这是您登录'.$brand_name.'主页后由您自己创建的VPN连接ID的密码。 如果您不记得自己的VPN连接ID和密码，可以在</span><a class="btn btn-secondary btn-sm btn-light" href="staticip.php">帐户管理</a><span class="text-redfaded">中进行检查。</span>';
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
	$text['사용자 계정 수에 따른 추가 할인율'] = '基于用户帐户数的附加折扣率';
	$text['30개 이상'] = '30以上';
	$text['50개 이상'] = '50以上';
	$text['100개 이상'] = '100以上';
	$text['200개 이상'] = '200以上';
	$text['할인율'] = '折扣率';
	$text['개월수에 따른 요금에서 추가 할인됩니다. 만기일이 지난 계정은 계정 수에 포함되지 않습니다.'] = '折扣按月数添加到折扣中。 过期日期后的帐户不包括在帐户计数中。';
	$text['연장 시 개월 수가 클수록 더 저렴합니다.'] = '延长的月数越大，则越便宜。';
	$text['더 많이 사용할 수록 더 저렴합니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = '您使用的越多，它越便宜。 收集和管理同一家公司的朋友或同事的帐户。';
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
	$text['사용자 계정 수에 따른 추가 할인율'] = '사용자 계정 수에 따른 추가 할인율';
	$text['30개 이상'] = '30개 이상';
	$text['50개 이상'] = '50개 이상';
	$text['100개 이상'] = '100개 이상';
	$text['200개 이상'] = '200개 이상';
	$text['할인율'] = '할인율';
	$text['개월수에 따른 요금에서 추가 할인됩니다. 만기일이 지난 계정은 계정 수에 포함되지 않습니다.'] = '개월수에 따른 요금에서 추가 할인됩니다. 만기일이 지난 계정은 계정 수에 포함되지 않습니다.';
	$text['연장 시 개월 수가 클수록 더 저렴합니다.'] = '연장 시 개월 수가 클수록 더 저렴합니다.';
	$text['더 많이 사용할 수록 더 저렴합니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.'] = '더 많이 사용할 수록 더 저렴합니다. 친구나 같은 회사 동료들의 계정을 모아 관리해보세요.';

}

?>