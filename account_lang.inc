<?php
if ($browserlang == "ko") {
	$text['VPN 접속계정 관리'] = 'VPN 접속계정 관리';
	$text['앞 세자리'] = '앞 세자리';
	$text['넷째자리'] = '넷째자리';
	$text[$email.'로 이메일을 발송했습니다. 이메일을 받았는지 확인해 주세요.(스팸메일함 확인 필수)'] = $email.'로 이메일을 발송했습니다. 이메일을 받았는지 확인해 주세요.(스팸메일함 확인 필수)';
	$text['이메일 발송에 실패했습니다. 잠시후 다시 시도해 주세요.'] = '이메일 발송에 실패했습니다. 잠시후 다시 시도해 주세요.';
	$text['잘못된 이메일 형식입니다. 다시 입력해 주세요.'] = '잘못된 이메일 형식입니다. 다시 입력해 주세요.';
	$text['새 이메일 주소 '.$_POST['email'].'을(를) 저장하고 확인 이메일을 발송했습니다. 이메일을 받았는지 확인해 주세요.(스팸메일함 확인 필수)'] = '새 이메일 주소 '.$_POST['email'].'을(를) 저장하고 확인 이메일을 발송했습니다. 이메일을 받았는지 확인해 주세요.(스팸메일함 확인 필수)';
	$text['새 이메일 주소 '.$_POST['email'].'을(를) 저장했지만 메일을 발송하는데 실패했습니다. 잠시후 "이메일 발송"를 클릭하여 다시 시도해 주세요.'] = '새 이메일 주소 '.$_POST['email'].'을(를) 저장했지만 메일을 발송하는데 실패했습니다. 잠시후 "이메일 발송"를 클릭하여 다시 시도해 주세요.';
	$text['이메일 저장에 실패했습니다. 잠시후 다시 시도해 주세요.'] = '이메일 저장에 실패했습니다. 잠시후 다시 시도해 주세요.';
	$text['연장할 아이디를 선택해 주세요.'] = '연장할 아이디를 선택해 주세요.';
	$text[' IP를 중복하여 선택하였습니다. IP가 중복되지 않도록 다시 선택하세요.'] = ' IP를 중복하여 선택하였습니다. IP가 중복되지 않도록 다시 선택하세요.';
	$text['의 IP를 선택하지 않았습니다. IP를 선택해 주세요.'] = '의 IP를 선택하지 않았습니다. IP를 선택해 주세요.';
	$text[$username.'의 '.$_POST['ip'][$configi].' IP는 방금 다른 사용자가 먼저 선택하였습니다. 죄송하지만 다른 IP를 다시 선택해주세요.'] = $username. '의 '.$_POST['ip'][$configi].' IP는 방금 다른 사용자가 먼저 선택하였습니다. 죄송하지만 다른 IP를 다시 선택해주세요.';
	$text['변경할 아이디를 선택해 주세요.'] = '변경할 아이디를 선택해 주세요.';
	$text['VPN 접속계정(아이디) 관리'] = 'VPN 접속계정(아이디) 관리';
	$text['아래 생성한 아이디와 비밀번호를 VPN 접속하는데 사용하세요.'] = '아래 생성한 아이디와 비밀번호를 VPN 접속하는데 사용하세요.';
	$text['VPN 접속 방법 보러가기'] = 'VPN 접속 방법 보러가기';
	$text['VPN접속에 성공하면 VPN으로 할당된 IP로 인터넷을 사용하게 됩니다.'] = 'VPN접속에 성공하면 VPN으로 할당된 IP로 인터넷을 사용하게 됩니다.';
	$text[$brand_name.' 사용 방법'] = $brand_name.' 사용 방법';
	$text['VPN 접속계정 만들기</a>를 클릭하여 VPN 연결에 사용할 VPN 접속 아이디를 추가할 수 있습니다.'] = 'VPN 접속계정 만들기</a>를 클릭하여 VPN 연결에 사용할 VPN 접속 아이디를 추가할 수 있습니다.';
	$text['VPN 접속계정을 만들었다면 <a href="'.$vpn_connection_url.'" class="badge badge-secondary">VPN 접속 방법</a>을 확인합니다.'] = 'VPN 접속계정을 만들었다면 <a href="'.$vpn_connection_url.'" class="badge badge-secondary">VPN 접속 방법</a>을 확인합니다.';
	$text['VPN 접속 방법대로 VPN 접속을 진행할 때 앞서 생성한 VPN 접속 아이디를 사용합니다.'] = 'VPN 접속 방법대로 VPN 접속을 진행할 때 앞서 생성한 VPN 접속 아이디를 사용합니다.';
	$text['VPN 접속에 성공하면 VPN으로 할당된 IP로 인터넷을 사용하게 됩니다.'] = 'VPN 접속에 성공하면 VPN으로 할당된 IP로 인터넷을 사용하게 됩니다.';
	$text['최초로 생성한 첫번째 접속계정(아이디)으로 <strong>'.$config['testdays'].'일 동안 무료</strong>로 사용할 수 있습니다.'] = '최초로 생성한 첫번째 접속계정(아이디)으로 <strong>'.$config['testdays'].'일 동안 무료</strong>로 사용할 수 있습니다.';
	$text['테스트 사용 후 계속 사용을 원하는 경우 "연장"버튼을 클릭하여 결제하면 자동 연장됩니다.'] = '테스트 사용 후 계속 사용을 원하는 경우 "연장"버튼을 클릭하여 결제하면 자동 연장됩니다.';
	$text['여러개 아이디를 선택한 후 "선택한 아이디 모두 연장"버튼을 클릭하여 한번에 연장할 수 있습니다.'] = '여러개 아이디를 선택한 후 "선택한 아이디 모두 연장"버튼을 클릭하여 한번에 연장할 수 있습니다.';
	$text['20일 무료 연장 이벤트를 진행합니다.'] = '20일 무료 연장 이벤트를 진행합니다.';
	$text[$brand_name.' <strong>사용기를 자신의 블로그나 인터넷 카페</strong>에 올려 주시면 20일 무료 사용기간을 드립니다.'] = $brand_name.' <strong>사용기를 자신의 블로그나 인터넷 카페</strong>에 올려 주시면 20일 무료 사용기간을 드립니다.';
	$text['올리신 글의 링크를 '.$brand_name.' 홈페이지 "문의하기"로 보내 주시면 내용 확인 후 성의있는 사용기라 판단되면 원하시는 접속 아이디를 20일 연장해 드리겠습니다.<br>많은 참여 부탁 드립니다. 감사합니다.<br>(이 이벤트는 한시적으로 진행되며, 이벤트가 종료되면 이 게시물은 사라지게 됩니다.)'] = '올리신 글의 링크를 '.$brand_name.' 홈페이지 "문의하기"로 보내 주시면 내용 확인 후 성의있는 사용기라 판단되면 원하시는 접속 아이디를 20일 연장해 드리겠습니다.<br>많은 참여 부탁 드립니다. 감사합니다.<br>(이 이벤트는 한시적으로 진행되며, 이벤트가 종료되면 이 게시물은 사라지게 됩니다.)';
	$text['토렌트 또는 P2P 사용 시 접속이 끊어집니다.'] = '토렌트 또는 P2P 사용 시 접속이 끊어집니다.';
	$text[$brand_name.'은 다른 사용자에게 피해가 가지 않도록 VPN을 통한 토렌트 및 P2P 사용을 제한하기 위해 VPN 접속이 자동 강제 종료됩니다. VPN 접속이 빈번히 끊어진다면 토렌트, P2P 프로그램을 종료하고 VPN에 접속하세요.'] = $brand_name.'은 다른 사용자에게 피해가 가지 않도록 VPN을 통한 토렌트 및 P2P 사용을 제한하기 위해 VPN 접속이 자동 강제 종료됩니다. VPN 접속이 빈번히 끊어진다면 토렌트, P2P 프로그램을 종료하고 VPN에 접속하세요.';
	$text['토렌트나 P2P 프로그램을 사용하지 않는데도 강제로 접속이 끊어진다면, <strong>"그리드딜리버리 서비스"</strong> 프로그램이 설치되었거나 <strong>"악성코드"</strong>에 감염되지 않았는지 검사해보세요.'] = '토렌트나 P2P 프로그램을 사용하지 않는데도 강제로 접속이 끊어진다면, <strong>"그리드딜리버리 서비스"</strong> 프로그램이 설치되었거나 <strong>"악성코드"</strong>에 감염되지 않았는지 검사해보세요.';
	$text['그리드딜리버리 서비스란?'] = '그리드딜리버리 서비스란?';
	$text['그리드딜리버리 서비스 제거 프로그램'] = '그리드딜리버리 서비스 제거 프로그램';
	$text['최근 토렌트 사용이나 바이러스 감염 의심으로 강제 접속 종료된 아이디는 아래와 같습니다.'] = '최근 토렌트 사용이나 바이러스 감염 의심으로 강제 접속 종료된 아이디는 아래와 같습니다.';
	$text['아이디'] = '아이디';
	$text['최근 강제 접속 종료된 시간<br>(12시간내)'] = '최근 강제 접속 종료된 시간<br>(12시간내)';
	$text['VPN 방식'] = 'VPN 방식';
	$text['총 계정 수'] = '총 계정 수';
	$text['접속계정을 추가 합니다.'] = '접속계정을 추가 합니다.';
	$text['접속계정을 생성합니다.'] = '접속계정을 생성합니다.';
	$text['접속계정 추가'] = '접속계정 추가';
	$text['접속계정 만들기'] = '접속계정 만들기';
	$text['VPN 접속계정(아이디)을 추가하려면 클릭하세요.'] = 'VPN 접속계정(아이디)을 추가하려면 클릭하세요.';
	$text['선택한 아이디 모두 연장'] = '선택한 아이디 모두 연장';
	$text['선택된 계정을 일괄 결제하고 연장합니다.'] = '선택된 계정을 일괄 결제하고 연장합니다.';
	$text['아이디 왼쪽의 체크박스로 여러개의 아이디를 선택해 한번에 연장할 수 있습니다.'] = '아이디 왼쪽의 체크박스로 여러개의 아이디를 선택해 한번에 연장할 수 있습니다.';
	$text['하나의 VPN 접속 아이디로 <span class="font-weight-bold">이중 동시 접속</span>을 원한다면 연장할 때 "이중 접속"을 선택하고 "연장" 버튼을 클릭하세요. (월 '.number_format($config['multiconnect2_add_fee']).'원의 요금이 추가됩니다.)'] = '하나의 VPN 접속 아이디로 <span class="font-weight-bold">이중 동시 접속</span>을 원한다면 연장할 때 "이중 접속"을 선택하고 "연장" 버튼을 클릭하세요. (월 '.number_format($config['multiconnect2_add_fee']).'원의 요금이 추가됩니다.)';
	$text[$config['testdays'].'일 테스트 기간에는 이중 동시 접속이 가능하지 않습니다.'] = $config['testdays'].'일 테스트 기간에는 이중 동시 접속이 가능하지 않습니다.';
	$text['선택'] = '선택';
	$text['IP주소'] = 'IP주소';
	$text['서비스'] = '서비스';
	$text['만기일'] = '만기일';
	$text['연장'] = '연장';
	$text['비밀번호'] = '비밀번호';
	$text['메모'] = '메모';
	$text['생성날짜'] = '생성날짜';
	$text['수정날짜'] = '수정날짜';
	$text['연장날짜'] = '연장날짜';
	$text['접속시간'] = '접속시간';
	$text['수정'] = '수정';
	$text['복사'] = '복사';
	$text['계정수정'] = '계정수정';
	$text['계정복사'] = '계정복사';
	$text['수정일'] = '수정일';
	$text['생성일'] = '생성일';
	$text['연장일'] = '연장일';
	$text['접속'] = '접속';
	$text['IP를 선택하세요'] = 'IP를 선택하세요';
	$text['IP선택'] = 'IP선택';
	$text['스마트폰 전용'] = '스마트폰 전용';
	$text['VoIP 전용'] = 'VoIP 전용';
	$text['서비스를 선택하세요'] = '서비스를 선택하세요';
	$text['이중 접속'] = '이중 접속';
	$text['개월'] = '개월';
	$text['가상계좌 입금 대기 중입니다. 발행된 가상계좌로 입금하면 연장됩니다.'] = '가상계좌 입금 대기 중입니다. 발행된 가상계좌로 입금하면 연장됩니다.';
	$text['가상계좌 입금 대기 중'] = '가상계좌 입금 대기 중';
	$text['계좌이체 입금 대기 중입니다. 입금하면 연장됩니다.'] = '계좌이체 입금 대기 중입니다. 입금하면 연장됩니다.';
	$text['계좌이체 입금 대기 중'] = '계좌이체 입금 대기 중';
	$text['PayPal 결제 대기 중입니다. PayPal 결제가 완료되면 연장됩니다.'] = 'PayPal 결제 대기 중입니다. PayPal 결제가 완료되면 연장됩니다.';
	$text['PayPal결제 대기 중'] = 'PayPal결제 대기 중';
	$text['이 ID를 선택한 연장 개월 수만큼 결제하고 연장합니다.'] = '이 ID를 선택한 연장 개월 수만큼 결제하고 연장합니다.';
	$text['시간'] = '시간';
	$text['분'] = '분';
	$text['을 수정합니다.'] = '을 수정합니다.';
	$text['의 내용을 복사하여 새 계정을 생성합니다.'] = '의 내용을 복사하여 새 계정을 생성합니다.';
	$text['VPN 접속계정(아이디)이 없습니다.'] = 'VPN 접속계정(아이디)이 없습니다.';
	$text['지금 VPN 접속계정(아이디)을 만드세요.'] = '지금 VPN 접속계정(아이디)을 만드세요.';
	$text['위 표에서 한개 이상의 아이디를 선택한 후 아래 버튼으로 일괄 연장 또는 일괄 IP 변경을 할 수 있습니다.'] = '위 표에서 한개 이상의 아이디를 선택한 후 아래 버튼으로 일괄 연장 또는 일괄 IP 변경을 할 수 있습니다.';
	$text['선택한 아이디 IP주소 변경'] = '선택한 아이디 IP주소 변경';
	$text['선택된 계정의 IP주소를 수정 선택한 IP주소로 일괄 변경 적용합니다.'] = '선택된 계정의 IP주소를 수정 선택한 IP주소로 일괄 변경 적용합니다.';
	$text['선택된 아이디의 "IP 선택"에서 IP를 변경한 후 클릭하세요.'] = '선택된 아이디의 "IP 선택"에서 IP를 변경한 후 클릭하세요.';
	$text['IP 선택이 가능하게 합니다.'] = 'IP 선택이 가능하게 합니다.';
	$text['IP 선택이 가능하지 않게합니다.'] = 'IP 선택이 가능하지 않게합니다.';
	$text['페이지 로딩 속도를 높이기 위해 IP 선택 기능이 비활성화되어 있습니다. 이 버튼을 클릭하여 IP 선택 기능을 다시 활성화 할 수 있습니다.'] = '페이지 로딩 속도를 높이기 위해 IP 선택 기능이 비활성화되어 있습니다. 이 버튼을 클릭하여 IP 선택 기능을 다시 활성화 할 수 있습니다.';
	$text['페이지 로딩에 시간이 많이 걸린다면 이 버튼을 클릭하여 IP 선택기능을 비활성화 할 수 있습니다. IP 선택 기능이 비활성화되어도 수정 버튼을 클릭하여 IP를 변경할 수 있습니다.'] = '페이지 로딩에 시간이 많이 걸린다면 이 버튼을 클릭하여 IP 선택기능을 비활성화 할 수 있습니다. IP 선택 기능이 비활성화되어도 수정 버튼을 클릭하여 IP를 변경할 수 있습니다.';
	$text['만기일이 지난 계정이 있습니다. 만기일이 지난 계정의 아이디로는 VPN 접속을 할 수 없습니다.'] = '만기일이 지난 계정이 있습니다. 만기일이 지난 계정의 아이디로는 VPN 접속을 할 수 없습니다.';
	$text['만기일이 지난 계정이 '.$max_expired_users.'개 이상이면 더이상 새 계정을 생성할 수 없습니다. 기존 계정을 연장해 사용하세요. 필요하다면 기존 계정의 비밀번호와 아이피를 변경해 사용할 수 있습니다.'] = '만기일이 지난 계정이 '.$max_expired_users.'개 이상이면 더이상 새 계정을 생성할 수 없습니다. 기존 계정을 연장해 사용하세요. 필요하다면 기존 계정의 비밀번호와 아이피를 변경해 사용할 수 있습니다.';
	$text['만기 지난 계정 보기'] = '만기 지난 계정 보기';
	$text['표에서 만기일이 지난 계정은 붉게 표기됩니다.'] = '표에서 만기일이 지난 계정은 붉게 표기됩니다.';
	$text['만기일이 지난 계정은 연장하려면 해당 아이디의 "연장"버튼을 클릭하세요.'] = '만기일이 지난 계정은 연장하려면 해당 아이디의 "연장"버튼을 클릭하세요.';
	$text['내역보기'] = '내역보기';
	$text['연장 신청 계정'] = '연장 신청 계정';
	$text['결제할 금액'] = '결제할 금액';
	$text['결제하기'] = '결제하기';
	$text['PayPal 결제 진행'] = 'PayPal 결제 진행';
	$text['이미 결제를 했다면, PayPal 입금이 확인되는데 다소 시간이 걸릴 수 있으니 잠시만 기다려주세요.'] = '이미 결제를 했다면, PayPal 입금이 확인되는데 다소 시간이 걸릴 수 있으니 잠시만 기다려주세요.';
	$text['현재 '.$sns.'로 로그인되어 있습니다.'] = '현재 '.$sns.'로 로그인되어 있습니다.';
	$text['이전에 생성하고 사용 중인 접속계정이 보이지 않는다면 로그아웃하고 다른 SNS로 로그인하세요.'] = '이전에 생성하고 사용 중인 접속계정이 보이지 않는다면 로그아웃하고 다른 SNS로 로그인하세요.';
	$text['로그아웃'] = '로그아웃';
	$text['VPN 접속계정 관리페이지 사용 방법'] = 'VPN 접속계정 관리페이지 사용 방법';
	$text['"접속계정 추가"버튼을 클릭하여 접속 계정을 새로 만들 수 있습니다.'] = '"접속계정 추가"버튼을 클릭하여 접속 계정을 새로 만들 수 있습니다.';
	$text['아이디의 "복사"버튼을 클릭하여 기존 계정의 내용을 복사하여 새 계정을 만들 수 있습니다.'] = '아이디의 "복사"버튼을 클릭하여 기존 계정의 내용을 복사하여 새 계정을 만들 수 있습니다.';
	$text['아이디의 "수정"버튼을 클릭하여 IP나 비밀번호를 수정할 수 있습니다.'] = '아이디의 "수정"버튼을 클릭하여 IP나 비밀번호를 수정할 수 있습니다.';
	$text['아이디의 "연장"버튼을 클릭하여 결제하면 사용기간이 선택한 개월수만큼 자동 연장됩니다.'] = '아이디의 "연장"버튼을 클릭하여 결제하면 사용기간이 선택한 개월수만큼 자동 연장됩니다.';
	$text['여러 개의 아이디를 선택하고 "선택된 계정 연장"버튼을 클릭하면 일괄 결제후 연장할 수 있습니다.'] = '여러 개의 아이디를 선택하고 "선택된 계정 연장"버튼을 클릭하면 일괄 결제후 연장할 수 있습니다.';
	$text['여러 개의 아이디를 선택하고, 선택한 아이디의 아이피를 변경한 후, "선택된 계정 IP 변경"버튼을 클릭하면 여러개 아이디의 IP를 한번에 변경할 수 있습니다.'] = '여러 개의 아이디를 선택하고, 선택한 아이디의 아이피를 변경한 후, "선택된 계정 IP 변경"버튼을 클릭하면 여러개 아이디의 IP를 한번에 변경할 수 있습니다.';
	$text['IP주소를 변경한 후 이전 IP주소를 다른 사용자가 선택했다면 이전 IP주소를 다시 사용할 수 없습니다.'] = 'IP주소를 변경한 후 이전 IP주소를 다른 사용자가 선택했다면 이전 IP주소를 다시 사용할 수 없습니다.';
	$text['각 계정의 아이디를 클릭하면 해당 아이디의 VPN 접속 로그를 확인할 수 있습니다.'] = '각 계정의 아이디를 클릭하면 해당 아이디의 VPN 접속 로그를 확인할 수 있습니다.';
	$text['이미 생성된 계정은 삭제하거나 아이디를 변경할 수 없습니다. 만기일이 지난 계정은 6개월 후 자동 삭제됩니다.'] = '이미 생성된 계정은 삭제하거나 아이디를 변경할 수 없습니다. 만기일이 지난 계정은 6개월 후 자동 삭제됩니다.';
	$text['현재 접속되어 있는 VPN 계정을 확인하려며 "현재 VPN 접속현황 확인하기"를 클릭합니다. 접속현황에서 접속을 강제로 끊을수 있습니다.'] = '현재 접속되어 있는 VPN 계정을 확인하려며 "현재 VPN 접속현황 확인하기"를 클릭합니다. 접속현황에서 접속을 강제로 끊을수 있습니다.';
	$text['그동안의 연장 결제 내역을 확인하려면 "결제 내역 확인"을 클릭하세요.'] = '그동안의 연장 결제 내역을 확인하려면 "결제 내역 확인"을 클릭하세요.';
	$text['가격표 보기'] = '가격표 보기';
	$text['VPN 접속계정 관리페이지 사용방법 보기'] = 'VPN 접속계정 관리페이지 사용방법 보기';
	$text['만기지난 아이디 숨기기'] = '만기지난 아이디 숨기기';
	$text['만기지난 아이디 보기'] = '만기지난 아이디 보기';
	$text['만기지난 아이디를 리스트에서 보이거나 숨길 수 있습니다.'] = '만기지난 아이디를 리스트에서 보이거나 숨길 수 있습니다.';
	$text['로그인 비밀번호를 변경할 수 있습니다.'] = '로그인 비밀번호를 변경할 수 있습니다.';
	$text['비밀번호 변경'] = '비밀번호 변경';


} elseif ($browserlang == "zh") {
	$text['VPN 접속계정 관리'] = 'VPN连接ID管理';
	$text['앞 세자리'] = '前三位数';
	$text['넷째자리'] = '第四位数';
	$text[$email.'로 이메일을 발송했습니다. 이메일을 받았는지 확인해 주세요.(스팸메일함 확인 필수)'] = '已发送电子邮件。 请确保您已收到电子邮件（要求检查您的垃圾邮件文件夹）。';
	$text['이메일 발송에 실패했습니다. 잠시후 다시 시도해 주세요.'] = '电子邮件发送失败。 请在几分钟后再试一次。';
	$text['잘못된 이메일 형식입니다. 다시 입력해 주세요.'] = '无效的电子邮件格式。 请再次输入。';
	$text['새 이메일 주소 '.$_POST['email'].'을(를) 저장하고 확인 이메일을 발송했습니다. 이메일을 받았는지 확인해 주세요.(스팸메일함 확인 필수)'] = '您的新电子邮件地址已保存，并且已发送确认电子邮件。 请确保您已收到电子邮件（要求检查您的垃圾邮件文件夹）。';
	$text['새 이메일 주소 '.$_POST['email'].'을(를) 저장했지만 메일을 발송하는데 실패했습니다. 잠시후 "이메일 발송"를 클릭하여 다시 시도해 주세요.'] = '新的电子邮件地址已保存，但邮件发送失败。 稍后，请点击"发送电子邮件"再试一次。';
	$text['이메일 저장에 실패했습니다. 잠시후 다시 시도해 주세요.'] = '无法保存电子邮件。 请在几分钟后再试一次。';
	$text['연장할 아이디를 선택해 주세요.'] = '请选择一个要扩展的ID。';
	$text[' IP를 중복하여 선택하였습니다. IP가 중복되지 않도록 다시 선택하세요.'] = ' 我选择了重复的IP。 再次选择，以使IP不重叠。';
	$text['의 IP를 선택하지 않았습니다. IP를 선택해 주세요.'] = ' - 您尚未选择IP。 请选择一个IP。';
	$text[$username.'의 '.$_POST['ip'][$configi].' IP는 방금 다른 사용자가 먼저 선택하였습니다. 죄송하지만 다른 IP를 다시 선택해주세요.'] = $username.' - '.$_POST['ip'][$configi].' IP刚被另一个用户选择。 抱歉，请再次选择其他IP。';
	$text['변경할 아이디를 선택해 주세요.'] = '请选择一个ID进行更改。';
	$text['VPN 접속계정(아이디) 관리'] = 'VPN访问帐户（ID）管理';
	$text['아래 생성한 아이디와 비밀번호를 VPN 접속하는데 사용하세요.'] = '使用下面创建的ID和密码连接到VPN。';
	$text['VPN 접속 방법 보러가기'] = '转到VPN连接方法';
	$text['VPN접속에 성공하면 VPN으로 할당된 IP로 인터넷을 사용하게 됩니다.'] = '如果VPN连接成功，则Internet将使用VPN分配的IP。';
	$text[$brand_name.' 사용 방법'] = '如何使用'.$brand_name;
	$text['VPN 접속계정 만들기</a>를 클릭하여 VPN 연결에 사용할 VPN 접속 아이디를 추가할 수 있습니다.'] = '创建VPN连接</a>帐户以创建用于VPN连接的VPN连接帐户（ID）。';
	$text['VPN 접속계정을 만들었다면 <a href="'.$vpn_connection_url.'" class="badge badge-secondary">VPN 접속 방법</a>을 확인합니다.'] = '如果您已创建VPN连接帐户，请检查<a href="'.$vpn_connection_url.'" class ="badge badge-secondary">VPN连接方法</a>。';
	$text['VPN 접속 방법대로 VPN 접속을 진행할 때 앞서 생성한 VPN 접속 아이디를 사용합니다.'] = '按照VPN连接方法进行VPN连接时，请使用之前创建的VPN连接ID。';
	$text['VPN 접속에 성공하면 VPN으로 할당된 IP로 인터넷을 사용하게 됩니다.'] = '如果VPN连接成功，则Internet将与分配给VPN的IP一起使用。';
	$text['최초로 생성한 첫번째 접속계정(아이디)으로 <strong>'.$config['testdays'].'일 동안 무료</strong>로 사용할 수 있습니다.'] = '您创建的第一个登录ID可以免费使用<strong>'.$config['testdays'].'天</strong>。';
	$text['테스트 사용 후 계속 사용을 원하는 경우 "연장"버튼을 클릭하여 결제하면 자동 연장됩니다.'] = '如果您想在测试后继续使用它，请单击"扩展"按钮付款。';
	$text['여러개 아이디를 선택한 후 "선택한 아이디 모두 연장"버튼을 클릭하여 한번에 연장할 수 있습니다.'] = '选择多个ID后，您可以通过单击"扩展所有选定的ID"按钮来一次扩展它们。';
	$text['20일 무료 연장 이벤트를 진행합니다.'] = '有20天的免费扩展活动。';
	$text[$brand_name.' <strong>사용기를 자신의 블로그나 인터넷 카페</strong>에 올려 주시면 20일 무료 사용기간을 드립니다.'] = '如果您在博客或网吧上发布<strong>用户评论</ strong>，我们将为您提供20天的免费试用期。';
	$text['올리신 글의 링크를 '.$brand_name.' 홈페이지 "문의하기"로 보내 주시면 내용 확인 후 성의있는 사용기라 판단되면 원하시는 접속 아이디를 20일 연장해 드리겠습니다.<br>많은 참여 부탁 드립니다. 감사합니다.<br>(이 이벤트는 한시적으로 진행되며, 이벤트가 종료되면 이 게시물은 사라지게 됩니다.)'] = '如果您将评论文章的链接发送到'.$brand_name.'主页上的"与我们联系"，我们将在检查内容并确定它是真诚用户后将所需ID延长20天。</br>我们非常期待你的参与。 谢谢。</br>此活动是在有限的时间内进行的，活动结束后，该信息将消失。）';
	$text['토렌트 또는 P2P 사용 시 접속이 끊어집니다.'] = 'VPN will disconnected when using torrent or P2P.';
	$text[$brand_name.'은 다른 사용자에게 피해가 가지 않도록 VPN을 통한 토렌트 및 P2P 사용을 제한하기 위해 VPN 접속이 자동 강제 종료됩니다. VPN 접속이 빈번히 끊어진다면 토렌트, P2P 프로그램을 종료하고 VPN에 접속하세요.'] = $brand_name.' automatically terminates VPN access to limit torrenting and P2P use through VPN to avoid harm to other users. If the VPN connection is frequently disconnected, close torrent or P2P programs.';
	$text['토렌트나 P2P 프로그램을 사용하지 않는데도 강제로 접속이 끊어진다면, <strong>"그리드딜리버리 서비스"</strong> 프로그램이 설치되었거나 <strong>"악성코드"</strong>에 감염되지 않았는지 검사해보세요.'] = 'If the connection is forcibly disconnected even though you are not using a torrent or P2P program, check that the <strong>"Grid Delivery Service"</strong> program is installed or is not infected with <strong>"malware"</strong>.';
	$text['그리드딜리버리 서비스란?'] = 'What is grid delivery service?';
	$text['그리드딜리버리 서비스 제거 프로그램'] = 'Grid Delivery Service Removal Program';
	$text['최근 토렌트 사용이나 바이러스 감염 의심으로 강제 접속 종료된 아이디는 아래와 같습니다.'] = 'The IDs that were forcibly terminated due to recent torrent use or virus infection are as follows.';
	$text['아이디'] = 'ID';
	$text['최근 강제 접속 종료된 시간<br>(12시간내)'] = 'Last forced connection termination time<br>(within 12 hours)';
	$text['VPN 방식'] = 'VPN Type';
	$text['총 계정 수'] = '帐户总数';
	$text['접속계정을 추가 합니다.'] = '添加连接ID';
	$text['접속계정을 생성합니다.'] = '创建连接ID';
	$text['접속계정 추가'] = '添加连接ID';
	$text['접속계정 만들기'] = '创建连接ID';
	$text['VPN 접속계정(아이디)을 추가하려면 클릭하세요.'] = '单击以添加VPN连接ID。';
	$text['선택한 아이디 모두 연장'] = '扩展所有选定的ID';
	$text['선택된 계정을 일괄 결제하고 연장합니다.'] = '立即支付并扩展所选的ID。';
	$text['아이디 왼쪽의 체크박스로 여러개의 아이디를 선택해 한번에 연장할 수 있습니다.'] = '您可以使用ID左侧的复选框选择多个ID，然后一次扩展它们。';
	$text['하나의 VPN 접속 아이디로 <span class="font-weight-bold">이중 동시 접속</span>을 원한다면 연장할 때 "이중 접속"을 선택하고 "연장" 버튼을 클릭하세요. (월 '.number_format($config['multiconnect2_add_fee']).'원의 요금이 추가됩니다.)'] = '如果您希望使用单个VPN连接ID进行<span class ="font-weight-bold">双重同时连接</span>，请在扩展时选择"双重连接"，然后单击"扩展"按钮。(每月增加'.number_format($config['multiconnect2_add_fee']).'韩元的费用。)';
	$text[$config['testdays'].'일 테스트 기간에는 이중 동시 접속이 가능하지 않습니다.'] = $config['testdays'].'天的测试期间，无法同时进行双重访问。';
	$text['선택'] = '选择';
	$text['IP주소'] = 'IP';
	$text['서비스'] = '服务';
	$text['만기일'] = '截止日期';
	$text['연장'] = '延期';
	$text['비밀번호'] = '密码';
	$text['메모'] = '描述';
	$text['생성날짜'] = '创建日期';
	$text['수정날짜'] = '修改日期';
	$text['연장날짜'] = '延长日期';
	$text['접속시간'] = '连线时间';
	$text['수정'] = '修改';
	$text['복사'] = '复制';
	$text['계정수정'] = '修改';
	$text['계정복사'] = '复制';
	$text['수정일'] = '修改日期';
	$text['생성일'] = '创建日期';
	$text['연장일'] = '延长日期';
	$text['접속'] = '连线时间';
	$text['IP를 선택하세요'] = '选择一个IP';
	$text['IP선택'] = 'IP选择';
	$text['스마트폰 전용'] = '仅限行动电话';
	$text['VoIP 전용'] = '仅网络电话';
	$text['서비스를 선택하세요'] = '选择一项服务';
	$text['이중 접속'] = '双重连接';
	$text['개월'] = '月';
	$text['가상계좌 입금 대기 중입니다. 발행된 가상계좌로 입금하면 연장됩니다.'] = '等待存入虚拟帐户。 通过将其存入已发行的虚拟帐户来扩展它。';
	$text['가상계좌 입금 대기 중'] = '等待存款虚拟账户';
	$text['계좌이체 입금 대기 중입니다. 입금하면 연장됩니다.'] = '等待银行转帐存款。 如果您存入资金，它将被延长。';
	$text['계좌이체 입금 대기 중'] = '等待银行转帐存款';
	$text['PayPal 결제 대기 중입니다. PayPal 결제가 완료되면 연장됩니다.'] = '等待PayPal付款。 PayPal付款完成后会延长。';
	$text['PayPal결제 대기 중'] = '等待PayPal付款';
	$text['이 ID를 선택한 연장 개월 수만큼 결제하고 연장합니다.'] = '支付此ID并将其扩展为您选择的扩展月份数。';
	$text['시간'] = '时间';
	$text['분'] = '分钟';
	$text['을 수정합니다.'] = '编辑';
	$text['의 내용을 복사하여 새 계정을 생성합니다.'] = '的内容来创建一个新帐户。';
	$text['VPN 접속계정(아이디)이 없습니다.'] = 'VPN ID不存在。';
	$text['지금 VPN 접속계정(아이디)을 만드세요.'] = '请立即创建一个VPN ID。';
	$text['위 표에서 한개 이상의 아이디를 선택한 후 아래 버튼으로 일괄 연장 또는 일괄 IP 변경을 할 수 있습니다.'] = '从上表中选择一个或多个ID后，您可以使用下面的按钮共同扩展或更改IP。';
	$text['선택한 아이디 IP주소 변경'] = '更改所选ID的IP地址';
	$text['선택된 계정의 IP주소를 수정 선택한 IP주소로 일괄 변경 적용합니다.'] = '将每个选定ID的IP地址更改为每个选定IP地址。';
	$text['선택된 아이디의 "IP 선택"에서 IP를 변경한 후 클릭하세요.'] = '更改所选ID的IP后单击。';
	$text['IP 선택이 가능하게 합니다.'] = '启用IP选择。';
	$text['IP 선택이 가능하지 않게합니다.'] = '禁用IP选择。';
	$text['페이지 로딩 속도를 높이기 위해 IP 선택 기능이 비활성화되어 있습니다. 이 버튼을 클릭하여 IP 선택 기능을 다시 활성화 할 수 있습니다.'] = 'IP选择功能已禁用，以加快页面加载速度。 您可以单击此按钮以重新启用IP选择功能。';
	$text['페이지 로딩에 시간이 많이 걸린다면 이 버튼을 클릭하여 IP 선택기능을 비활성화 할 수 있습니다. IP 선택 기능이 비활성화되어도 수정 버튼을 클릭하여 IP를 변경할 수 있습니다.'] = '如果页面加载时间较长，可以单击此按钮禁用IP选择功能。 即使禁用了IP选择功能，也可以通过单击Modify按钮来更改IP。';
	$text['만기일이 지난 계정이 있습니다. 만기일이 지난 계정의 아이디로는 VPN 접속을 할 수 없습니다.'] = '我有一个过期的帐户。 您无法使用已过期的帐户连接到VPN。';
	$text['만기일이 지난 계정이 '.$max_expired_users.'개 이상이면 더이상 새 계정을 생성할 수 없습니다. 기존 계정을 연장해 사용하세요. 필요하다면 기존 계정의 비밀번호와 아이피를 변경해 사용할 수 있습니다.'] = '如果超过'.$max_expired_users.'个帐户已过期，则不能再创建新帐户。 请扩展您的现有帐户。 如有必要，您可以更改现有帐户的密码和IP。';
	$text['만기 지난 계정 보기'] = '查看过期的帐户';
	$text['표에서 만기일이 지난 계정은 붉게 표기됩니다.'] = '在表格中，已过期的帐户显示为红色。';
	$text['만기일이 지난 계정은 연장하려면 해당 아이디의 "연장"버튼을 클릭하세요.'] = '要将帐户延长到到期日期之后，请单击ID的"扩展"按钮。';
	$text['내역보기'] = '列表显示';
	$text['연장 신청 계정'] = 'ID扩展';
	$text['결제할 금액'] = '该付的钱';
	$text['결제하기'] = '进行付款';
	$text['PayPal 결제 진행'] = '转到PayPal付款';
	$text['이미 결제를 했다면, PayPal 입금이 확인되는데 다소 시간이 걸릴 수 있으니 잠시만 기다려주세요.'] = '如果您已经付款，则可能需要一些时间来确认您的PayPal存款，因此请耐心等待。';
	$text['현재 '.$sns.'로 로그인되어 있습니다.'] = '您当前正在使用'.$sns.'登录。';
	$text['이전에 생성하고 사용 중인 접속계정이 보이지 않는다면 로그아웃하고 다른 SNS로 로그인하세요.'] = '如果您没有看到先前创建的帐户，并且正在使用该帐户，请注销并使用其他SNS登录。';
	$text['로그아웃'] = '登出';
	$text['VPN 접속계정 관리페이지 사용 방법'] = '如何使用VPN访问帐户管理页面';
	$text['"접속계정 추가"버튼을 클릭하여 접속 계정을 새로 만들 수 있습니다.'] = '您可以通过单击"添加连接ID"按钮来创建新的访问帐户。';
	$text['아이디의 "복사"버튼을 클릭하여 기존 계정의 내용을 복사하여 새 계정을 만들 수 있습니다.'] = '您可以通过单击ID的"复制"按钮来复制现有ID的内容来创建新帐户。';
	$text['아이디의 "수정"버튼을 클릭하여 IP나 비밀번호를 수정할 수 있습니다.'] = '您可以通过单击ID的"编辑"按钮来修改IP或密码。';
	$text['아이디의 "연장"버튼을 클릭하여 결제하면 사용기간이 선택한 개월수만큼 자동 연장됩니다.'] = '要延长使用期限，请单击ID旁边的"扩展"按钮并付款。';
	$text['여러 개의 아이디를 선택하고 "선택된 계정 연장"버튼을 클릭하면 일괄 결제후 연장할 수 있습니다.'] = '您可以通过选择多个ID并单击"扩展所有选定的ID"按钮来一次扩展多个ID。';
	$text['여러 개의 아이디를 선택하고, 선택한 아이디의 아이피를 변경한 후, "선택된 계정 IP 변경"버튼을 클릭하면 여러개 아이디의 IP를 한번에 변경할 수 있습니다.'] = '选择多个ID，更改所选ID的每个IP，然后单击"更改所选ID的IP"按钮以一次更改多个ID的IP。';
	$text['IP주소를 변경한 후 이전 IP주소를 다른 사용자가 선택했다면 이전 IP주소를 다시 사용할 수 없습니다.'] = '更改IP地址后，如果另一个用户选择并使用了先前的IP地址，则无法再次使用先前的IP地址。';
	$text['각 계정의 아이디를 클릭하면 해당 아이디의 VPN 접속 로그를 확인할 수 있습니다.'] = '';
	$text['이미 생성된 계정은 삭제하거나 아이디를 변경할 수 없습니다. 만기일이 지난 계정은 6개월 후 자동 삭제됩니다.'] = '如果单击每个帐户的ID，则可以检查该ID的VPN访问日志。';
	$text['현재 접속되어 있는 VPN 계정을 확인하려며 "현재 VPN 접속현황 확인하기"를 클릭합니다. 접속현황에서 접속을 강제로 끊을수 있습니다.'] = '单击"检查当前VPN连接状态"以检查当前连接到的VPN ID。 可以强制断开连接状态。';
	$text['그동안의 연장 결제 내역을 확인하려면 "결제 내역 확인"을 클릭하세요.'] = '点击"查看付款明细"以查看您的付款历史。';
	$text['가격표 보기'] = '查看价格表';
	$text['VPN 접속계정 관리페이지 사용방법 보기'] = '如何使用VPN访问帐户管理页面';
	$text['만기지난 아이디 숨기기'] = '隐藏过期的 ID';
	$text['만기지난 아이디 보기'] = '查看过期的 ID';
	$text['만기지난 아이디를 리스트에서 보이거나 숨길 수 있습니다.'] = '您可以从列表中显示或隐藏过期的 ID。';
	$text['로그인 비밀번호를 변경할 수 있습니다.'] = '您可以更改您的登录密码。';
	$text['비밀번호 변경'] = '更改密码';

} else { //en
	$text['VPN 접속계정 관리'] = 'VPN Connection ID Management';
	$text['앞 세자리'] = 'first three digits';
	$text['넷째자리'] = 'fourth digit';
	$text[$email.'로 이메일을 발송했습니다. 이메일을 받았는지 확인해 주세요.(스팸메일함 확인 필수)'] = 'An email has been sent. Please make sure you have received the email (requires checking your spam folder)';
	$text['이메일 발송에 실패했습니다. 잠시후 다시 시도해 주세요.'] = 'Failed to send email. Please try again in a few minutes.';
	$text['잘못된 이메일 형식입니다. 다시 입력해 주세요.'] = 'Invalid email format. Please enter again.';
	$text['새 이메일 주소 '.$_POST['email'].'을(를) 저장하고 확인 이메일을 발송했습니다. 이메일을 받았는지 확인해 주세요.(스팸메일함 확인 필수)'] = 'Your new email address has been saved and a confirmation email has been sent. Please make sure you have received the email (requires checking your spam folder).';
	$text['새 이메일 주소 '.$_POST['email'].'을(를) 저장했지만 메일을 발송하는데 실패했습니다. 잠시후 "이메일 발송"를 클릭하여 다시 시도해 주세요.'] = 'The new email address was saved, but the mail failed to be sent. After a while, please click "Send Email" to try again.';
	$text['이메일 저장에 실패했습니다. 잠시후 다시 시도해 주세요.'] = 'Failed to save email. Please try again in a few minutes.';
	$text['연장할 아이디를 선택해 주세요.'] = 'Please select an ID to extend.';
	$text[' IP를 중복하여 선택하였습니다. IP가 중복되지 않도록 다시 선택하세요.'] = ' Selected duplicate IP. Select again so that the IP does not overlap.';
	$text['의 IP를 선택하지 않았습니다. IP를 선택해 주세요.'] = ' - You have not selected an IP. Please select an IP.';
	$text[$username.'의 '.$_POST['ip'][$configi].' IP는 방금 다른 사용자가 먼저 선택하였습니다. 죄송하지만 다른 IP를 다시 선택해주세요.'] = $username.' - '.$_POST['ip'][$configi].' The IP was just chosen by another user first. Sorry, but please select another IP again.';
	$text['변경할 아이디를 선택해 주세요.'] = 'Please select an ID to change.';
	$text['VPN 접속계정(아이디) 관리'] = 'VPN connection ID management';
	$text['아래 생성한 아이디와 비밀번호를 VPN 접속하는데 사용하세요.'] = 'Use the ID and password created below to connect to the VPN.';
	$text['VPN 접속 방법 보러가기'] = 'Go to see the VPN connection method';
	$text['VPN접속에 성공하면 VPN으로 할당된 IP로 인터넷을 사용하게 됩니다.'] = 'If the VPN connection is successful, you will use the the IP assigned by the VPN.';
	$text[$brand_name.' 사용 방법'] = 'How to use '.$brand_name;
	$text['VPN 접속계정 만들기</a>를 클릭하여 VPN 연결에 사용할 VPN 접속 아이디를 추가할 수 있습니다.'] = 'Create VPN Connection ID</a> to create a VPN connection ID.';
	$text['VPN 접속계정을 만들었다면 <a href="'.$vpn_connection_url.'" class="badge badge-secondary">VPN 접속 방법</a>을 확인합니다.'] = 'If you have created a VPN connection account, check <a href="'.$vpn_connection_url.'" class="badge badge-secondary">VPN connection method.</a>';
	$text['VPN 접속 방법대로 VPN 접속을 진행할 때 앞서 생성한 VPN 접속 아이디를 사용합니다.'] = 'When proceeding with the VPN connection according to the VPN connection method, use the VPN connection ID created earlier.';
	$text['VPN 접속에 성공하면 VPN으로 할당된 IP로 인터넷을 사용하게 됩니다.'] = 'If the VPN connection is successful, you will use the the IP assigned by the VPN.';
	$text['최초로 생성한 첫번째 접속계정(아이디)으로 <strong>'.$config['testdays'].'일 동안 무료</strong>로 사용할 수 있습니다.'] = 'The first VPN connection ID you created can be used for <strong>'.$config['testdays'].' days for free</strong>.';
	$text['테스트 사용 후 계속 사용을 원하는 경우 "연장"버튼을 클릭하여 결제하면 자동 연장됩니다.'] = 'If you want to continue using vpn after testing, please click the "Extend" button to pay.';
	$text['여러개 아이디를 선택한 후 "선택한 아이디 모두 연장"버튼을 클릭하여 한번에 연장할 수 있습니다.'] = 'After selecting multiple IDs, you can extend them at once by clicking the "Extend all selected IDs" button.';
	$text['20일 무료 연장 이벤트를 진행합니다.'] = 'There is a 20-day free extension event.';
	$text[$brand_name.' <strong>사용기를 자신의 블로그나 인터넷 카페</strong>에 올려 주시면 20일 무료 사용기간을 드립니다.'] = '<strong>Posting your testimonial on your blog or internet cafe</strong> gives you a 20-day free trial period.';
	$text['올리신 글의 링크를 '.$brand_name.' 홈페이지 "문의하기"로 보내 주시면 내용 확인 후 성의있는 사용기라 판단되면 원하시는 접속 아이디를 20일 연장해 드리겠습니다.<br>많은 참여 부탁 드립니다. 감사합니다.<br>(이 이벤트는 한시적으로 진행되며, 이벤트가 종료되면 이 게시물은 사라지게 됩니다.)'] = 'If you send the link of the review article to "Contact Us" on the  '.$brand_name.' website, we will extend the ID you want by 20 days after checking the content and if it is judged as a sincere user.</br>We look forward to your participation. Thank you.<br>(This event is on a temporary basis, and this post will disappear when the event ends.)';
	$text['토렌트 또는 P2P 사용 시 접속이 끊어집니다.'] = '使用torrent或P2P时，VPN连接断开。';
	$text[$brand_name.'은 다른 사용자에게 피해가 가지 않도록 VPN을 통한 토렌트 및 P2P 사용을 제한하기 위해 VPN 접속이 자동 강제 종료됩니다. VPN 접속이 빈번히 끊어진다면 토렌트, P2P 프로그램을 종료하고 VPN에 접속하세요.'] = $brand_name.'自动终止VPN访问，以限制通过VPN的洪流和P2P使用，以避免对其他用户造成伤害。 如果您的VPN连接经常断开连接，请关闭Torrent或P2P程序。';
	$text['토렌트나 P2P 프로그램을 사용하지 않는데도 강제로 접속이 끊어진다면, <strong>"그리드딜리버리 서비스"</strong> 프로그램이 설치되었거나 <strong>"악성코드"</strong>에 감염되지 않았는지 검사해보세요.'] = '如果即使您未使用torrent或P2P程序，也强制断开了连接，请检查是否已安装<strong>" Grid Delivery Service" </ strong>程序或未感染<strong>"恶意软件" </strong >。';
	$text['그리드딜리버리 서비스란?'] = '什么是网格交付服务？';
	$text['그리드딜리버리 서비스 제거 프로그램'] = '网格交付服务卸载程序';
	$text['최근 토렌트 사용이나 바이러스 감염 의심으로 강제 접속 종료된 아이디는 아래와 같습니다.'] = '由于最近的洪流使用或病毒感染而被强制终止的ID如下。';
	$text['아이디'] = 'ID';
	$text['최근 강제 접속 종료된 시간<br>(12시간내)'] = '上次强制连接终止时间<br>（12小时以内）';
	$text['VPN 방식'] = 'VPN方式';
	$text['총 계정 수'] = 'Total number of accounts';
	$text['접속계정을 추가 합니다.'] = 'Add Connection ID.';
	$text['접속계정을 생성합니다.'] = 'Create Connection ID.';
	$text['접속계정 추가'] = 'Add Connection ID.';
	$text['접속계정 만들기'] = 'Create Connection ID.';
	$text['VPN 접속계정(아이디)을 추가하려면 클릭하세요.'] = 'Click to add a VPN connection ID.';
	$text['선택한 아이디 모두 연장'] = 'Extend all selected IDs';
	$text['선택된 계정을 일괄 결제하고 연장합니다.'] = 'Pay and extend the selected ID at once.';
	$text['아이디 왼쪽의 체크박스로 여러개의 아이디를 선택해 한번에 연장할 수 있습니다.'] = 'You can select multiple IDs with the checkbox on the left of ID and extend them at once.';
	if ($brand_name == "DasanVPN")
		$text['하나의 VPN 접속 아이디로 <span class="font-weight-bold">이중 동시 접속</span>을 원한다면 연장할 때 "이중 접속"을 선택하고 "연장" 버튼을 클릭하세요. (월 '.number_format($config['multiconnect2_add_fee']).'원의 요금이 추가됩니다.)'] = 'If you want <span class="font-weight-bold">dual connection</span> with a single VPN connection ID, select "Dual Connection" when extending and click the "Extend" button. (Addtional monthly fee of USD'.$formate_multiconnect2_add_fee.' will be added.)';
	else
		$text['하나의 VPN 접속 아이디로 <span class="font-weight-bold">이중 동시 접속</span>을 원한다면 연장할 때 "이중 접속"을 선택하고 "연장" 버튼을 클릭하세요. (월 '.number_format($config['multiconnect2_add_fee']).'원의 요금이 추가됩니다.)'] = 'If you want <span class="font-weight-bold">dual connection</span> with a single VPN connection ID, select "Dual Connection" when extending and click the "Extend" button. (Addtional monthly fee of '.number_format($config['multiconnect2_add_fee']).' won will be added.)';
	$text[$config['testdays'].'일 테스트 기간에는 이중 동시 접속이 가능하지 않습니다.'] = 'Dual Connection is not possible during the '.$config['testdays'].'-day test period.';
	$text['선택'] = 'Select';
	$text['IP주소'] = 'IP';
	$text['서비스'] = 'Service';
	$text['만기일'] = 'Expiration date';
	$text['연장'] = 'Extend';
	$text['비밀번호'] = 'Password';
	$text['메모'] = 'Note';
	$text['생성날짜'] = 'Created date';
	$text['수정날짜'] = 'Modified date';
	$text['연장날짜'] = 'Extended date';
	$text['접속시간'] = 'Connection time';
	$text['수정'] = 'Edit';
	$text['복사'] = 'Copy';
	$text['계정수정'] = 'Edit';
	$text['계정복사'] = 'Copy';
	$text['수정일'] = 'Modified date';
	$text['생성일'] = 'Created date';
	$text['연장일'] = 'Extended date';
	$text['접속'] = 'Connection time';
	$text['IP를 선택하세요'] = 'Choose an IP';
	$text['IP선택'] = 'IP selection';
	$text['스마트폰 전용'] = 'Mobile only';
	$text['VoIP 전용'] = 'VoIP only';
	$text['서비스를 선택하세요'] = 'Choose a service';
	$text['이중 접속'] = 'Dual Connection';
	$text['개월'] = 'month';
	$text['가상계좌 입금 대기 중입니다. 발행된 가상계좌로 입금하면 연장됩니다.'] = 'Waiting to deposit virtual account. It is extended by depositing into the issued virtual account.';
	$text['가상계좌 입금 대기 중'] = 'Waiting to deposit virtual account';
	$text['계좌이체 입금 대기 중입니다. 입금하면 연장됩니다.'] = 'Waiting for bank transfer deposit. It will be extended when you deposit.';
	$text['계좌이체 입금 대기 중'] = 'Waiting for bank transfer deposit';
	$text['PayPal 결제 대기 중입니다. PayPal 결제가 완료되면 연장됩니다.'] = 'Waiting for PayPal payment. It is extended when PayPal payment is completed.';
	$text['PayPal결제 대기 중'] = 'Waiting for PayPal payment';
	$text['이 ID를 선택한 연장 개월 수만큼 결제하고 연장합니다.'] = 'Pay and extend this ID for the selected number of extended months';
	$text['시간'] = 'hours';
	$text['분'] = 'minutes';
	$text['을 수정합니다.'] = '- Modify';
	$text['의 내용을 복사하여 새 계정을 생성합니다.'] = '- Create a new ID by copying the contents of this ID.';
	$text['VPN 접속계정(아이디)이 없습니다.'] = 'There is no VPN connection ID.';
	$text['지금 VPN 접속계정(아이디)을 만드세요.'] = 'You can create a VPN connection ID now.';
	$text['위 표에서 한개 이상의 아이디를 선택한 후 아래 버튼으로 일괄 연장 또는 일괄 IP 변경을 할 수 있습니다.'] = 'After selecting one or more IDs from the table above, you can collectively extend or change IPs with the button below.';
	$text['선택한 아이디 IP주소 변경'] = 'Change IP of Selected ID';
	$text['선택된 계정의 IP주소를 수정 선택한 IP주소로 일괄 변경 적용합니다.'] = 'Changes the IP address of each selected ID to each selected IP address.';
	$text['선택된 아이디의 "IP 선택"에서 IP를 변경한 후 클릭하세요.'] = 'Click after changing the IP of the selected ID.';
	$text['IP 선택이 가능하게 합니다.'] = 'Enables IP selection.';
	$text['IP 선택이 가능하지 않게합니다.'] = 'Disable IP selection.';
	$text['페이지 로딩 속도를 높이기 위해 IP 선택 기능이 비활성화되어 있습니다. 이 버튼을 클릭하여 IP 선택 기능을 다시 활성화 할 수 있습니다.'] = 'The IP selection feature is disabled to speed up page loading. You can click this button to re-enable the IP selection function.';
	$text['페이지 로딩에 시간이 많이 걸린다면 이 버튼을 클릭하여 IP 선택기능을 비활성화 할 수 있습니다. IP 선택 기능이 비활성화되어도 수정 버튼을 클릭하여 IP를 변경할 수 있습니다.'] = 'If the page takes a long time to load, you can click this button to disable the IP selection function. Even if the IP selection function is disabled, you can change the IP by clicking the Modify button.';
	$text['만기일이 지난 계정이 있습니다. 만기일이 지난 계정의 아이디로는 VPN 접속을 할 수 없습니다.'] = 'There is the expired ID. You cannot connect to a VPN with an ID that has expired.';
	$text['만기일이 지난 계정이 '.$max_expired_users.'개 이상이면 더이상 새 계정을 생성할 수 없습니다. 기존 계정을 연장해 사용하세요. 필요하다면 기존 계정의 비밀번호와 아이피를 변경해 사용할 수 있습니다.'] = 'If you have more than '.$max_expired_users.' IDs that have expired, you can no longer create new ID. Please extend your existing ID. If necessary, you can change the password and IP of the existing ID.';
	$text['만기 지난 계정 보기'] = 'View expired IDs';
	$text['표에서 만기일이 지난 계정은 붉게 표기됩니다.'] = 'In the table, expired accounts are marked in red.';
	$text['만기일이 지난 계정은 연장하려면 해당 아이디의 "연장"버튼을 클릭하세요.'] = 'To extend an expired account, click the "Extend" button next to the ID in the table.';
	$text['내역보기'] = 'View';
	$text['연장 신청 계정'] = 'ID to extend';
	$text['결제할 금액'] = 'Amount to be paid';
	$text['결제하기'] = 'Make a payment';
	$text['PayPal 결제 진행'] = 'Go to PayPal payment';
	$text['이미 결제를 했다면, PayPal 입금이 확인되는데 다소 시간이 걸릴 수 있으니 잠시만 기다려주세요.'] = 'If you have already paid, it may take some time for your PayPal deposit to be confirmed, so please be patient.';
	$text['현재 '.$sns.'로 로그인되어 있습니다.'] = 'You are currently signed in with '.$sns.'.';
	$text['이전에 생성하고 사용 중인 접속계정이 보이지 않는다면 로그아웃하고 다른 SNS로 로그인하세요.'] = 'If you do not see the previously created VPN connection ID, sign out and sign in with another social media account or email address.';
	$text['로그아웃'] = 'Sign out';
	$text['VPN 접속계정 관리페이지 사용 방법'] = 'How to use the VPN account management page.';
	$text['"접속계정 추가"버튼을 클릭하여 접속 계정을 새로 만들 수 있습니다.'] = 'You can create a new ID by clicking the "Add Connection ID" button.';
	$text['아이디의 "복사"버튼을 클릭하여 기존 계정의 내용을 복사하여 새 계정을 만들 수 있습니다.'] = 'You can create a ID by copying the contents of an existing ID by clicking the "Copy" button of the ID.';
	$text['아이디의 "수정"버튼을 클릭하여 IP나 비밀번호를 수정할 수 있습니다.'] = 'You can modify the IP or password by clicking the "Edit" button of the ID.';
	$text['아이디의 "연장"버튼을 클릭하여 결제하면 사용기간이 선택한 개월수만큼 자동 연장됩니다.'] = 'To extend the period of use, click the "Extend" button next to your ID and pay.';
	$text['여러 개의 아이디를 선택하고 "선택된 계정 연장"버튼을 클릭하면 일괄 결제후 연장할 수 있습니다.'] = 'Select multiple IDs and click the "Extend all selected IDs" button to extend them at once.';
	$text['여러 개의 아이디를 선택하고, 선택한 아이디의 아이피를 변경한 후, "선택된 계정 IP 변경"버튼을 클릭하면 여러개 아이디의 IP를 한번에 변경할 수 있습니다.'] = 'Select multiple IDs, change each IP of the selected ID, and click the "Change IP of Selected ID" button to change the IP of multiple IDs at once.';
	$text['IP주소를 변경한 후 이전 IP주소를 다른 사용자가 선택했다면 이전 IP주소를 다시 사용할 수 없습니다.'] = 'After changing the IP address, if another user selects and uses the previous IP address, you cannot user the previous IP address again.';
	$text['각 계정의 아이디를 클릭하면 해당 아이디의 VPN 접속 로그를 확인할 수 있습니다.'] = 'If you click the ID of each account, you can check the VPN connecton log for that ID.';
	$text['이미 생성된 계정은 삭제하거나 아이디를 변경할 수 없습니다. 만기일이 지난 계정은 6개월 후 자동 삭제됩니다.'] = 'You cannot delete or change the vpn connection ID. IDs past their expiration date will be automatically deleted after 6 months.';
	$text['현재 접속되어 있는 VPN 계정을 확인하려며 "현재 VPN 접속현황 확인하기"를 클릭합니다. 접속현황에서 접속을 강제로 끊을수 있습니다.'] = 'Click "Check the current VPN connection status" to check the VPN ID you are currently connected to. Connection can be forcibly disconnected from the connection status.';
	$text['그동안의 연장 결제 내역을 확인하려면 "결제 내역 확인"을 클릭하세요.'] = 'To check the payment history in the meantime, click "Check payment details"';
	$text['가격표 보기'] = 'View price list';
	$text['VPN 접속계정 관리페이지 사용방법 보기'] = 'How to use the VPN connection ID management page';
	$text['만기지난 아이디 숨기기'] = 'Hide expired IDs';
	$text['만기지난 아이디 보기'] = 'View expired IDs';
	$text['만기지난 아이디를 리스트에서 보이거나 숨길 수 있습니다.'] = 'You can show or hide expired IDs from the list.';
	$text['로그인 비밀번호를 변경할 수 있습니다.'] = 'You can change your login password.';
	$text['비밀번호 변경'] = 'Change Password';


}
?>