
extern zend_class_entry *dgafka_bookstore_business_service_dto_query_author_getby_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Business_Service_Dto_Query_Author_GetBy);

PHP_METHOD(Dgafka_BookStore_Business_Service_Dto_Query_Author_GetBy, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_business_service_dto_query_author_getby___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, orderBy)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_business_service_dto_query_author_getby_method_entry) {
	PHP_ME(Dgafka_BookStore_Business_Service_Dto_Query_Author_GetBy, __construct, arginfo_dgafka_bookstore_business_service_dto_query_author_getby___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
  PHP_FE_END
};
