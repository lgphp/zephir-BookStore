
extern zend_class_entry *dgafka_bookstore_business_service_dto_command_book_changeinformationcommand_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Command_Book_ChangeInformationCommand);

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Command_Book_ChangeInformationCommand, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_dto_command_book_changeinformationcommand___construct, 0, 0, 3)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, description)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_dto_command_book_changeinformationcommand_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Dto_Command_Book_ChangeInformationCommand, __construct, arginfo_dgafka_bookstore_business_service_dto_command_book_changeinformationcommand___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
  PHP_FE_END
};
