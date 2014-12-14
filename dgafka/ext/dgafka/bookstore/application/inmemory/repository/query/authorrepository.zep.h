
extern zend_class_entry *dgafka_bookstore_application_inmemory_repository_query_authorrepository_ce;

ZEPHIR_INIT_CLASS(Dgafka_BookStore_Application_InMemory_Repository_Query_AuthorRepository);

PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Query_AuthorRepository, __construct);
PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Query_AuthorRepository, findById);
PHP_METHOD(Dgafka_BookStore_Application_InMemory_Repository_Query_AuthorRepository, findBy);

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_application_inmemory_repository_query_authorrepository_findbyid, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgafka_bookstore_application_inmemory_repository_query_authorrepository_findby, 0, 0, 2)
	ZEND_ARG_INFO(0, orderBy)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(dgafka_bookstore_application_inmemory_repository_query_authorrepository_method_entry) {
	PHP_ME(Dgafka_BookStore_Application_InMemory_Repository_Query_AuthorRepository, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Dgafka_BookStore_Application_InMemory_Repository_Query_AuthorRepository, findById, arginfo_dgafka_bookstore_application_inmemory_repository_query_authorrepository_findbyid, ZEND_ACC_PUBLIC)
	PHP_ME(Dgafka_BookStore_Application_InMemory_Repository_Query_AuthorRepository, findBy, arginfo_dgafka_bookstore_application_inmemory_repository_query_authorrepository_findby, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
