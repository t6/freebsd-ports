# Created by: Dima Dorfman <dima@unixfreak.org>

PORTNAME=	foomatic-db
PORTVERSION=	20201029
CATEGORIES=	print
MASTER_SITES=	LOCAL/danilo
DISTNAME=	${PORTNAME}-${FOOMATICVER}-${PORTVERSION}

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Database for integrating printer drivers with common spoolers

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake tar:xz

GNU_CONFIGURE=	yes

FOOMATICVER=	4.0
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
NO_ARCH=	yes

.include <bsd.port.mk>
