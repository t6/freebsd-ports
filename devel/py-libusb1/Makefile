
PORTNAME=	libusb1
PORTVERSION?=	1.8
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Pure-python wrapper for libusb-1.0

LICENSE=	LGPL21+

CONFLICTS_INSTALL?=	${PKGNAMEPREFIX}${PORTNAME}15

NO_ARCH=	yes
USES=		python:3.6+
USE_PYTHON=	autoplist distutils

do-test:
		@${PYTHON_CMD} -m unittest discover -vs ${TEST_WRKSRC}

.include <bsd.port.mk>
