# Created by: alepulver

PORTNAME=	cre
DISTVERSION=	1.2beta_r2
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-dev/1.2%20BETA%2C%20Release%202
DISTNAME=	${PORTNAME}_${DISTVERSION}_src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Corewars Redcode Evolver

LICENSE=	GPLv2+ PD
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2+ =	${WRKSRC}/COPYING.TXT

USES=		dos2unix
DOS2UNIX_GLOB=	*.txt
NO_WRKSUBDIR=	yes
BUILD_WRKSRC=	${WRKSRC}/src

CFLAGS+=		-fcommon

DEPRECATED=	Unmaintained and dead upstream, does not build with -fno-common (llvm 11)
EXPIRATION_DATE=2021-04-01

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	CRE_Manual.txt Exhaust_README.txt

OPTIONS_DEFINE=	DOCS

post-extract:
	@${CP} ${FILESDIR}/${MAKEFILE} ${BUILD_WRKSRC}
	@cd ${WRKSRC} && ${MV} "CRE Manual.txt" CRE_Manual.txt && \
		${MV} "Exhaust README.txt" Exhaust_README.txt

post-patch:
	@cd ${BUILD_WRKSRC} && ${REINPLACE_CMD} -e '/memwatch\.h/d' \
		asm.c pspace.c sim.c
	@cd ${BUILD_WRKSRC} && ${REINPLACE_CMD} \
		-e 's|random[[:blank:]]*(|myrandom(|' \
		battler.c generator.c globals.h Main.c

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
