
CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-web

COMMENT=	Free Pascal web application library (FCL)

USES=		fpc
USE_FPC=	dblib fcl-async fcl-base fcl-db fcl-xml fcl-json fcl-net \
		fcl-fpcunit fcl-passrc fastcgi httpd22 httpd24 ibase \
		libmicrohttpd mysql odbc openssl oracle postgres pxlib \
		rtl-extra sqlite

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
