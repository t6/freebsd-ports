PORTNAME=	astron
PORTVERSION=	0.0.20200521
CATEGORIES=	net

MAINTAINER=	nc@FreeBSD.org
COMMENT=	Server Technology for Realtime Object Networking

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKDIR}/LICENSE.md

LIB_DEPENDS=	libuv.so:devel/libuv \
		libyaml-cpp.so:devel/yaml-cpp

USES=		cmake
USE_GITHUB=	yes
GH_ACCOUNT=	Astron
GH_PROJECT=	${GH_ACCOUNT}
GH_TAGNAME=	c8ba982

PLIST_FILES=	bin/astrond

OPTIONS_DEFINE=		SOCI
OPTIONS_DEFAULT=	SOCI

SOCI_DESC=		Database support via Soci
SOCI_LIB_DEPENDS=	libsoci_core.so:databases/soci

.if !empty(VARIABLE:MSOCI)
CMAKE_ARGS+=	-DSOCI_FOUND=NO
.endif

.include <bsd.port.mk>
