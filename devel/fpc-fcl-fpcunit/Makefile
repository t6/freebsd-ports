
PORTREVISION=	2
CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-fpcunit

COMMENT=	Free Pascal unit testing library (FCL)

USES=		fpc
USE_FPC=	fcl-base fcl-xml

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
