
PORTNAME=	p0f2
PORTVERSION=	2.0.8
PORTREVISION=	1
CATEGORIES=	net-mgmt security
MASTER_SITES=	http://lcamtuf.coredump.cx/p0f3/releases/old/2.x/
DISTNAME=	p0f-${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Passive OS fingerprinting tool

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: file_cksum
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: file_cksum

CONFLICTS=	p0f-3.*

USES=		gmake tar:tgz
USE_RC_SUBR=	p0f2
ALL_TARGET=	all p0fq tools
PORTDOCS=	COPYING CREDITS ChangeLog KNOWN_BUGS README TODO win-memleak.txt
WRKSRC=		${WRKDIR}/p0f

OPTIONS_DEFINE=	DOCS

post-patch:
.for f in config.h doc/README
	@${REINPLACE_CMD} -e 's|/etc|${PREFIX}/etc|g' ${WRKSRC}/${f}
.endfor

do-install:
.for ii in p0f test/p0fq test/sendack test/sendack2 test/sendsyn
	${INSTALL_PROGRAM} ${WRKSRC}/${ii} ${STAGEDIR}${PREFIX}/bin
.endfor
	${INSTALL_SCRIPT} ${WRKSRC}/p0frep ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/p0f
.for ii in . a. o. r.
	${INSTALL_DATA} ${WRKSRC}/p0f${ii}fp ${STAGEDIR}${PREFIX}/etc/p0f
.endfor
	${INSTALL_MAN} ${WRKSRC}/p0f.1 ${STAGEDIR}${MANPREFIX}/man/man1

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for ii in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/doc/${ii} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
