# Created by: Donald Burr <dburr@FreeBSD.org>

PORTNAME=	sourcenav
PORTVERSION=	4.5
PORTREVISION=	10
PORTEPOCH=	1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/NG${PORTVERSION}
DISTNAME=	sourcenavigator-NG${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Source code analysis tool

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_aarch64=		fails to build: undefined reference to fpsetround
BROKEN_riscv64=		fails to compile: unix/tclUnixInit.c:135:16: error: use of undeclared identifier 'FP_RN'
DEPRECATED=	Unmaintained and dead upstream, does not build with -fno-common (llvm 11)
EXPIRATION_DATE=2021-04-01

USES=		shebangfix tar:bzip2 xorg
SHEBANG_FILES=	${WRKSRC}/snavigator/demo/c++/contrib/perl/sample_client
USE_XORG=	x11

HAS_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=--prefix=${PREFIX}/sourcenav

CFLAGS+=		-fcommon

post-patch:
	${REINPLACE_CMD} -e 's|@XINCLUDES@|-I${LOCALBASE}/include|; \
	    s|@XLIBSW@|-L${LOCALBASE}/lib -lX11|' ${WRKSRC}/tk/unix/Makefile.in

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sourcenav/bin/wish8.3
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sourcenav/bin/tclsh8.3
	${RLN} ${STAGEDIR}${PREFIX}/sourcenav/bin/snavigator \
		${STAGEDIR}${PREFIX}/bin/snavigator

.include <bsd.port.mk>
