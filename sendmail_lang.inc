<?php

if ($browserlang == "en") {
    $text['계정 삭제 안내'] = 'VPN connection ID Deletion Notification';
    $text['안녕하세요.'] = 'Hello!';
    $text[$companyname.'입니다.'] = 'This is '.$companyname.'.';
    $text[$service.' 서비스를 이용해 주셔서 감사합니다.']= 'Thank you for using our '.$service.' service.';
    $text['고객님께서 사용하셨던 '.$service.' 서비스 접속 계정 '.$userid.'은 '.$expiration.'의 만기가 지나고 '.$exterm.'개월 간 사용되지 않아 자동으로 삭제되었습니다.'] = 'The ID for '.$service.' service, '.$userid.' was automatically deleted because it was expired on '.$expiration.' and was not used for '.$exterm.' months.';
    $text['원하신다면 언제든지 '.$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 새 계정을 만들어 안정적인 '.$service.' 서비스를 다시 이용하실 수 있습니다.'] = 'If you wish, you can use the reliable '.$service.' service again by creating a new VPN connection ID on the <a href="'.$accountpage.'">'.$companyname.' website</a> at any time.';
    $text['감사합니다.'] = 'Thanks and regards,';
    $text['사업부 고객센터'] = 'Customer Center';
    $text['만기일 안내'] = 'Expiration date reminder';
    $text['고객님께서 사용중인 '.$service.' 서비스 접속 계정 '.$userid.'은 만기일('.$expiration.')이 지났습니다.'] = 'The '.$service.' connection ID, '.$userid.' has expired at '.$expiration.'.';
    $text['걱정하지 않으셔도 됩니다. 만기일이 지나도 해당 계정에 할당되어 있는 고정아이피는 30일간 유지됩니다.'] = 'Don\'t worry. Even after the expiration date, the IP address assigned to the ID is maintained for 30 days.';
    $text['30일이 지나기 전에 '.$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장하면 기존 아이피 주소를 다시 사용할 수 있습니다.'] = 'You can use the IP address again if you extend the ID at the '.$companyname.' website <a href="'.$accountpage.'">'.$domain.'</a> before 30 days have passed.';
    $text[$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장하여 다시 사용할 수 있습니다.'] = 'You can use it again by extending it at the '.$companyname.' website <a href="'.$accountpage.'">'.$domain.'</a>.';
    $text['고객님께서 사용중인 '.$service.' 서비스 접속 계정 '.$userid.'은 만기일 '.$expiration.' 까지 사용할 수 있습니다.'] = 'The '.$service.' connection ID, '.$userid.' can be used until the expiration date of '.$expiration.'.';
    $text['만기일이 지나기 전에 미리 연장하시기 바랍니다.'] = 'Please make an extension before the expiration date.';
    $text[$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장할 수 있습니다.'] = 'It can be extended at the '.$companyname.' website <a href="'.$accountpage.'">'.$domain.'</a>.';
    $text['접속 계정 생성 안내'] = 'Guide to creating VPN connection ID';
    $text[$service.' 서비스를 이용하시려면 <strong>접속 계정을 만들고</strong> 그 접속계정의 아이디와 비밀번호로 VPN 접속을 하셔야합니다.'] = 'To use '.$service.' service, you should <strong>create a connection ID</strong> that will be used for VPN connection.';
    $text['아래와 같은 절차로 계정을 만들고 VPN 접속을하면 VPN 아이피 서비스를 이용하실 수 있습니다.'] = 'You can use the VPN IP service by creating an ID with the procedure below.';
    $text['<a href="'.$accountpage.'">'.$companyname.' 홈페이지</a>에서 "'.$loginsns.'"로 로그인합니다.'] = 'Sign in with '.$loginsns.' on <a href="'.$accountpage.'">'.$companyname.'</a>.';
    $text['"접속계정 생성" 버튼을 클릭하여 접속 계정을 생성합니다.'] = 'Click the "Create Connection ID" button to create an access account.';
    $text['"접속 방법"에서 VPN 접속 방법을 확인합니다.'] = 'Check the VPN connection method in "Connection method".';
    $text['"접속 방법"의 설명대로 VPN 접속을 합니다. VPN 접속 시 위에서 생성한 접속 계정의 아이디와 비밀 번호를 이용합니다.'] = 'Connect to VPN as described in "Connection method". When connecting to the VPN, use the connection ID and password created above.';
    $text['VPN 접속에 성공하면 안정적인 아이피 서비스를 이용하실 수 있습니다.'] = 'If the VPN connection is successful, you can use a stable VPN IP service.';
    $text['지금 <a href="'.$accountpage.'">'.$companyname.' 홈페이지</a>에서 새 계정을 만들어 가장 안정적인 '.$service.' 서비스를 3일간 무료로 이용해 보세요.'] = 'Create a VPN connection ID on <a href="'.$accountpage.'">'.$companyname.' website</a> now and try the most reliable '.$service.' service for free for 3 days.';

} elseif ($browserlang == "zh") {
    $text['계정 삭제 안내'] = '帐户删除通知';
    $text['안녕하세요.'] = '早上好。';
    $text[$companyname.'입니다.'] = '这是'.$companyname.'。';
    $text[$service.' 서비스를 이용해 주셔서 감사합니다.']= '感谢您使用'.$service.'服务。';
    $text['고객님께서 사용하셨던 '.$service.' 서비스 접속 계정 '.$userid.'은 '.$expiration.'의 만기가 지나고 '.$exterm.'개월 간 사용되지 않아 자동으로 삭제되었습니다.'] = '客户使用的'.$service.'服务访问账号'.$userid.'已于'.$expiration.'到期，'.$exterm.'个月未使用，已被自动删除。';
    $text['원하신다면 언제든지 '.$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 새 계정을 만들어 안정적인 '.$service.' 서비스를 다시 이용하실 수 있습니다.'] = '如果您愿意，您可以随时在'.$companyname.'官网<a href="'.$accountpage.'">'.$domain.'</a>上创建新的连接ID，重新使用稳定的'.$service.'服务。';
    $text['감사합니다.'] = '谢谢你。';
    $text['사업부 고객센터'] = '客服中心';
    $text['만기일 안내'] = '到期日期通知';
    $text['고객님께서 사용중인 '.$service.' 서비스 접속 계정 '.$userid.'은 만기일('.$expiration.')이 지났습니다.'] = '您正在使用的'.$service.'服务连接账户'.$userid.'过期（'.$expiration.'）。';
    $text['걱정하지 않으셔도 됩니다. 만기일이 지나도 해당 계정에 할당되어 있는 고정아이피는 30일간 유지됩니다.'] = '不用担心。过期后，分配到该账户的固定Ipi将维持30天。';
    $text['30일이 지나기 전에 '.$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장하면 기존 아이피 주소를 다시 사용할 수 있습니다.'] = '在过了30天之前，在'.$companyname.'官网<a href="'.$accountpage.'">'.$domain.'</a>上延长的话，就可以重新使用现有的IP地址了。';
    $text[$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장하여 다시 사용할 수 있습니다.'] = $companyname.'官网<a href="'.$accountpage.'">'.$domain.'</a>可以延长使用。';
    $text['고객님께서 사용중인 '.$service.' 서비스 접속 계정 '.$userid.'은 만기일 '.$expiration.' 까지 사용할 수 있습니다.'] = '您正在使用的'.$service.'服务连接ID '.$userid.'可以使用到到期日'.$expiration.'。';
    $text['만기일이 지나기 전에 미리 연장하시기 바랍니다.'] = '请在过期前提前延长。';
    $text[$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장할 수 있습니다.'] = '可以在'.$companyname.'官网<a href="'.$accountpage.'">'.$domain.'</a>中延长。';
    $text['접속 계정 생성 안내'] = '登录ID生成指南';
    $text[$service.' 서비스를 이용하시려면 <strong>접속 계정을 만들고</strong> 그 접속계정의 아이디와 비밀번호로 VPN 접속을 하셔야합니다.'] = '要想使用'.$service.'服务，需要建立"strong"连接ID，并用"/strong"的连接ID和密码连接VPN。';
    $text['아래와 같은 절차로 계정을 만들고 VPN 접속을하면 VPN 아이피 서비스를 이용하실 수 있습니다.'] = '您可以使用VPN IP服务。';
    $text['<a href="'.$accountpage.'">'.$companyname.' 홈페이지</a>에서 "'.$loginsns.'"로 로그인합니다.'] = '<a href="'.$accountpage.'">'.$companyname.'主页</a>登录'.$loginsns.'。';
    $text['"접속계정 생성" 버튼을 클릭하여 접속 계정을 생성합니다.'] = '点击"生成登录ID"按钮生成登录账号。';
    $text['"접속 방법"에서 VPN 접속 방법을 확인합니다.'] = '在"连接方法"中确认VPN连接方法。';
    $text['"접속 방법"의 설명대로 VPN 접속을 합니다. VPN 접속 시 위에서 생성한 접속 계정의 아이디와 비밀 번호를 이용합니다.'] = '按照"连接方法"的说明连接VPN。使用VPN连接时在上面生成的连接ID和密码。';
    $text['VPN 접속에 성공하면 안정적인 아이피 서비스를 이용하실 수 있습니다.'] = 'VPN连接成功后，可以使用稳定的VPN IP服务。';
    $text['지금 <a href="'.$accountpage.'">'.$companyname.' 홈페이지</a>에서 새 계정을 만들어 가장 안정적인 '.$service.' 서비스를 3일간 무료로 이용해 보세요.'] = '现在<a href="'.$accountpage.'">'.$companyname.'主页</a>制作VPN连接ID，免费使用最稳定的'.$service.'服务3天。';

} else {
    $text['계정 삭제 안내'] = '계정 삭제 안내';
    $text['안녕하세요.'] = '안녕하세요.';
    $text[$companyname.'입니다.'] = $companyname.'입니다.';
    $text[$service.' 서비스를 이용해 주셔서 감사합니다.']= $service.' 서비스를 이용해 주셔서 감사합니다.';
    $text['고객님께서 사용하셨던 '.$service.' 서비스 접속 계정 '.$userid.'은 '.$expiration.'의 만기가 지나고 '.$exterm.'개월 간 사용되지 않아 자동으로 삭제되었습니다.'] = '고객님께서 사용하셨던 '.$service.' 서비스 접속 계정 '.$userid.'은 '.$expiration.'의 만기가 지나고 '.$exterm.'개월 간 사용되지 않아 자동으로 삭제되었습니다.';
    $text['원하신다면 언제든지 '.$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 새 계정을 만들어 안정적인 '.$service.' 서비스를 다시 이용하실 수 있습니다.'] = '원하신다면 언제든지 '.$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 새 계정을 만들어 안정적인 '.$service.' 서비스를 다시 이용하실 수 있습니다.';
    $text['감사합니다.'] = '감사합니다.';
    $text['사업부 고객센터'] = '사업부 고객센터';
    $text['만기일 안내'] = '만기일 안내';
    $text['고객님께서 사용중인 '.$service.' 서비스 접속 계정 '.$userid.'은 만기일('.$expiration.')이 지났습니다.'] = '고객님께서 사용중인 '.$service.' 서비스 접속 계정 '.$userid.'은 만기일('.$expiration.')이 지났습니다.';
    $text['걱정하지 않으셔도 됩니다. 만기일이 지나도 해당 계정에 할당되어 있는 고정아이피는 30일간 유지됩니다.'] = '걱정하지 않으셔도 됩니다. 만기일이 지나도 해당 계정에 할당되어 있는 고정아이피는 30일간 유지됩니다.';
    $text['30일이 지나기 전에 '.$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장하면 기존 아이피 주소를 다시 사용할 수 있습니다.'] = '30일이 지나기 전에 '.$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장하면 기존 아이피 주소를 다시 사용할 수 있습니다.';
    $text[$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장하여 다시 사용할 수 있습니다.'] = $companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장하여 다시 사용할 수 있습니다.';
    $text['고객님께서 사용중인 '.$service.' 서비스 접속 계정 '.$userid.'은 만기일 '.$expiration.' 까지 사용할 수 있습니다.'] = '고객님께서 사용중인 '.$service.' 서비스 접속 계정 '.$userid.'은 만기일 '.$expiration.' 까지 사용할 수 있습니다.';
    $text['만기일이 지나기 전에 미리 연장하시기 바랍니다.'] = '만기일이 지나기 전에 미리 연장하시기 바랍니다.';
    $text[$companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장할 수 있습니다.'] = $companyname.' 홈페이지 <a href="'.$accountpage.'">'.$domain.'</a> 에서 연장할 수 있습니다.';
    $text['접속 계정 생성 안내'] = '접속 계정 생성 안내';
    $text[$service.' 서비스를 이용하시려면 <strong>접속 계정을 만들고</strong> 그 접속계정의 아이디와 비밀번호로 VPN 접속을 하셔야합니다.'] = $service.' 서비스를 이용하시려면 <strong>접속 계정을 만들고</strong> 그 접속계정의 아이디와 비밀번호로 VPN 접속을 하셔야합니다.';
    $text['아래와 같은 절차로 계정을 만들고 VPN 접속을하면 VPN 아이피 서비스를 이용하실 수 있습니다.'] = '아래와 같은 절차로 계정을 만들고 VPN 접속을하면 VPN 아이피 서비스를 이용하실 수 있습니다.';
    $text['<a href="'.$accountpage.'">'.$companyname.' 홈페이지</a>에서 "'.$loginsns.'"로 로그인합니다.'] = '<a href="'.$accountpage.'">'.$companyname.' 홈페이지</a>에서 "'.$loginsns.'"로 로그인합니다.';
    $text['"접속계정 생성" 버튼을 클릭하여 접속 계정을 생성합니다.'] = '"접속계정 생성" 버튼을 클릭하여 접속 계정을 생성합니다.';
    $text['"접속 방법"에서 VPN 접속 방법을 확인합니다.'] = '"접속 방법"에서 VPN 접속 방법을 확인합니다.';
    $text['"접속 방법"의 설명대로 VPN 접속을 합니다. VPN 접속 시 위에서 생성한 접속 계정의 아이디와 비밀 번호를 이용합니다.'] = '"접속 방법"의 설명대로 VPN 접속을 합니다. VPN 접속 시 위에서 생성한 접속 계정의 아이디와 비밀 번호를 이용합니다.';
    $text['VPN 접속에 성공하면 안정적인 아이피 서비스를 이용하실 수 있습니다.'] = 'VPN 접속에 성공하면 안정적인 아이피 서비스를 이용하실 수 있습니다.';
    $text['지금 <a href="'.$accountpage.'">'.$companyname.' 홈페이지</a>에서 새 계정을 만들어 가장 안정적인 '.$service.' 서비스를 3일간 무료로 이용해 보세요.'] = '지금 <a href="'.$accountpage.'">'.$companyname.' 홈페이지</a>에서 새 계정을 만들어 가장 안정적인 '.$service.' 서비스를 3일간 무료로 이용해 보세요.';

}

?>