# Created by: Eric Freeman <freebsdports@chillibear.com>

PORTNAME=	terminal-table
PORTVERSION=	1.8.0
PORTREVISION=	1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple, feature rich ASCII table generation library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-unicode-display_width1>=1.1.1<2:devel/rubygem-unicode-display_width1

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^1\.

.include <bsd.port.mk>
