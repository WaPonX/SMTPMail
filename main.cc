/********************************************************************
 * author: waponx
 * email : 18826419224@163.com
 * time  : 10.11.2015
 * ******************************************************************/

#include "smtpmail.h"

#include <string>

int main() {
	using Mail::SMTPMail;
	SMTPMail *sm = new SMTPMail(SMTPMail::String("18826419224@163.com"),
			SMTPMail::String("idpdshehxshaqhxl"),
			SMTPMail::String("smtp.163.com"));

	sm->SendEmail("18826419224@163.com", "helloi 这是一个演习！");

	delete sm;

	return 0;
}
