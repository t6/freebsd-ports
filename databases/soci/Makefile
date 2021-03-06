# Created by: Julien Laffaye <kimelto@gmail.com>

PORTNAME=	soci
DISTVERSION=	4.0.1
CATEGORIES=	databases

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C++ Database Access Library

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE_1_0.txt

USES=		cmake compiler:c++11-lang
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	SOCI

CMAKE_OFF=	WITH_ORACLE

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	MYSQL PGSQL SQLITE ODBC BOOST FIREBIRD
BOOST_DESC=	Enable support for additional types using Boost
OPTIONS_DEFAULT=MYSQL PGSQL SQLITE ODBC BOOST FIREBIRD
OPTIONS_SUB=	yes

# firebird is currently only available on x86.
OPTIONS_EXCLUDE_aarch64=	FIREBIRD
OPTIONS_EXCLUDE_armv6=		FIREBIRD
OPTIONS_EXCLUDE_armv7=		FIREBIRD
OPTIONS_EXCLUDE_mips=		FIREBIRD
OPTIONS_EXCLUDE_mips64=		FIREBIRD
OPTIONS_EXCLUDE_powerpc=	FIREBIRD
OPTIONS_EXCLUDE_powerpc64=	FIREBIRD
OPTIONS_EXCLUDE_powerpc64le=	FIREBIRD
OPTIONS_EXCLUDE_sparc64=	FIREBIRD

MYSQL_USES=	mysql
MYSQL_CMAKE_BOOL=	WITH_MYSQL

PGSQL_USES=	pgsql
PGSQL_CMAKE_BOOL=	WITH_POSTGRESQL

SQLITE_USES=	sqlite
SQLITE_CMAKE_BOOL=	WITH_SQLITE3

ODBC_LIB_DEPENDS=	libodbc.so:databases/unixODBC
ODBC_CMAKE_BOOL=	WITH_ODBC
ODBC_CMAKE_ON=		-DODBC_LIBRARY:FILE_PATH=${LOCALBASE}/lib/libodbc.so

BOOST_LIB_DEPENDS=	libboost_date_time.so:devel/boost-libs
BOOST_CMAKE_BOOL=	WITH_BOOST

FIREBIRD_USES=	firebird
FIREBIRD_CMAKE_BOOL=	WITH_FIREBIRD

.include <bsd.port.mk>
