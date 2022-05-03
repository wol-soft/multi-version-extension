/* wolsoft extension for PHP */

#ifndef PHP_WOLSOFT_H
# define PHP_WOLSOFT_H

extern zend_module_entry wolsoft_module_entry;
# define phpext_wolsoft_ptr &wolsoft_module_entry

# define PHP_WOLSOFT_VERSION "0.2.0"
# define PHP_WOLSOFT_NS "CustomExtensions\\WolSoft_2"

# if defined(ZTS) && defined(COMPILE_DL_WOLSOFT)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_WOLSOFT_H */
