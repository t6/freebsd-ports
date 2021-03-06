# Created by: thierry@pompo.net

PORTNAME=	cypari2
DISTVERSION=	2.1.2b1
CATEGORIES=	math python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Python interface to the number theory library PARI/GP

LICENSE=	GPLv2

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cysignals>0:devel/py-cysignals@${PY_FLAVOR}
LIB_DEPENDS=	libgmp.so:math/gmp	\
		libpari.so:math/pari
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cysignals>0:devel/py-cysignals@${PY_FLAVOR}

USE_GITHUB=	yes
GH_ACCOUNT=	sagemath

USES=		compiler:c11 perl5 python:3.6+
USE_PERL5=	build
USE_PYTHON=	cython distutils

OPTIONS_DEFINE=		DOCS
DOCS_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sphinx>=0,1:textproc/py-sphinx@${PY_FLAVOR}
DOCS_USES=		gmake
PORTDOCS=		*

PLIST_SUB+=	VER=${DISTVERSION}

pre-configure-DOCS-on:
	${REINPLACE_CMD} -e 's|python -m|${PYTHON_CMD} -m|'	\
		${WRKSRC}/docs/Makefile

do-build-DOCS-on:
	(cd ${WRKSRC}/docs && ${GMAKE} html)

post-build-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${CP} -R ${WRKSRC}/docs/build/html/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
